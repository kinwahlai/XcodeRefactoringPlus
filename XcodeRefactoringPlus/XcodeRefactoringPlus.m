// Copyright (c) 2014 KinWah
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import "XcodeRefactoringPlus.h"

BOOL isNewline(unichar ch) { return (ch >= 0xA && ch <= 0xD) || ch == 0x85; } // What's the defference with [NSCharacterSet newlineCharacterSet] characterIsMember:] ?


static XcodeRefactoringPlus *sharedPlugin;

@interface XcodeRefactoringPlus()
{
    NSRange _currentRange;
    NSRange _currentLineRange;
    NSString *_currentSelectedString;
    NSTextView *_codeEditor;
}
@property (nonatomic, strong) NSBundle *bundle;
@end

@implementation XcodeRefactoringPlus
@synthesize currentLineRange = _currentLineRange, currentSelectedString = _currentSelectedString,codeEditor = _codeEditor;
+ (void)pluginDidLoad:(NSBundle *)plugin
{
    static id sharedPlugin = nil;
    static dispatch_once_t onceToken;
    NSString *currentApplicationName = [[NSBundle mainBundle] infoDictionary][@"CFBundleName"];
    if ([currentApplicationName isEqual:@"Xcode"]) {
        dispatch_once(&onceToken, ^{
            sharedPlugin = [[self alloc] initWithBundle:plugin];
        });
    }
}

- (id)initWithBundle:(NSBundle *)plugin
{
    if (self = [super init]) {
        // reference to plugin's bundle, for resource acccess
        self.bundle = plugin;
        [self setupSubMenu:[[[[NSApp mainMenu] itemWithTitle:@"Edit"] submenu] itemWithTitle:@"Refactor"]];
    }
    return self;
}

-(void)setupSubMenu:(NSMenuItem*)menuItem
{
    if(menuItem)
    {
        unichar arrowKeyDown = NSDownArrowFunctionKey;
        unichar arrowKeyUp = NSUpArrowFunctionKey;
        [[menuItem submenu] addItem:[NSMenuItem separatorItem]];
        
        NSMenuItem *deleteLineMenuItem = [[NSMenuItem alloc] initWithTitle:@"Delete Line" action:@selector(deleteLine) keyEquivalent:@"d"];
        [deleteLineMenuItem setKeyEquivalentModifierMask:NSCommandKeyMask];
        [deleteLineMenuItem setTarget:self];
        [[menuItem submenu] addItem:deleteLineMenuItem];
        
        NSMenuItem *duplicateLineMenuItem = [[NSMenuItem alloc] initWithTitle:@"Duplicate Line" action:@selector(duplicateLine) keyEquivalent:[NSString stringWithCharacters:&arrowKeyDown length:1]];
        [duplicateLineMenuItem setTarget:self];
        [duplicateLineMenuItem setKeyEquivalentModifierMask:(NSCommandKeyMask | NSAlternateKeyMask)];
        [[menuItem submenu] addItem:duplicateLineMenuItem];
        
        NSMenuItem *moveLineUpMenuItem = [[NSMenuItem alloc] initWithTitle:@"Move Line Up" action:@selector(moveLineUp) keyEquivalent:[NSString stringWithCharacters:&arrowKeyUp length:1]];
        [moveLineUpMenuItem setTarget:self];
        [moveLineUpMenuItem setKeyEquivalentModifierMask:(NSAlternateKeyMask)];
        [[menuItem submenu] addItem:moveLineUpMenuItem];
        
        NSMenuItem *moveLineDownMenuItem = [[NSMenuItem alloc] initWithTitle:@"Move Line Down" action:@selector(moveLineDown) keyEquivalent:[NSString stringWithCharacters:&arrowKeyDown length:1]];
        [moveLineDownMenuItem setTarget:self];
        [moveLineDownMenuItem setKeyEquivalentModifierMask:(NSAlternateKeyMask)];
        [[menuItem submenu] addItem:moveLineDownMenuItem];
        
        // tap into notifications
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(selectionDidChange:) name:NSTextViewDidChangeSelectionNotification object:nil];
        
        if(!self.codeEditor){
            NSResponder *firstResponder = [[NSApp keyWindow] firstResponder];
            if([firstResponder isKindOfClass:NSClassFromString(@"DVTSourceTextView")] && [firstResponder isKindOfClass:[NSTextView class]]){
                _codeEditor = (NSTextView *)firstResponder;
            }
        }
        
        if(self.codeEditor){
            NSNotification *notification = [NSNotification notificationWithName:NSTextViewDidChangeSelectionNotification object:self.codeEditor];
            [self selectionDidChange:notification];
        }
    }
}

-(BOOL)validateMenuItem:(NSMenuItem *)menuItem
{
    if([menuItem action] == @selector(deleteLine))
    {
        NSResponder *firstResponder = [[NSApp keyWindow] firstResponder];
        return ([firstResponder isKindOfClass:NSClassFromString(@"DVTSourceTextView")] && [firstResponder isKindOfClass:[NSTextView class]]);
    }
    else if([menuItem action] == @selector(duplicateLine))
    {
        NSResponder *firstResponder = [[NSApp keyWindow] firstResponder];
        return ([firstResponder isKindOfClass:NSClassFromString(@"DVTSourceTextView")] && [firstResponder isKindOfClass:[NSTextView class]]);
    }
    else if([menuItem action] == @selector(moveLineUp))
    {
        NSResponder *firstResponder = [[NSApp keyWindow] firstResponder];
        return ([firstResponder isKindOfClass:NSClassFromString(@"DVTSourceTextView")] && [firstResponder isKindOfClass:[NSTextView class]]);
    }
    else if([menuItem action] == @selector(moveLineDown))
    {
        NSResponder *firstResponder = [[NSApp keyWindow] firstResponder];
        return ([firstResponder isKindOfClass:NSClassFromString(@"DVTSourceTextView")] && [firstResponder isKindOfClass:[NSTextView class]]);
    }
    
    return YES;
}

- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

-(void)selectionDidChange:(NSNotification *)notification
{
    /**
     *  DVTSourceTextView cannot be instantiate now thus cannot be test, so we dont check in the if statement
     */
    if([[notification object] isKindOfClass:[NSTextView class]])
    {
		_codeEditor = (NSTextView *)[notification object];
        NSArray *selectedRanges = [self.codeEditor selectedRanges];
        if(selectedRanges.count >= 1)
        {
            [self updateLineRange:[[selectedRanges objectAtIndex:0] rangeValue] AndSelectedString:self.codeEditor.textStorage.string];
        }
    }
}

-(void)updateLineRange:(NSRange)range AndSelectedString:(const NSString *)code
{
    _currentRange     = range;
    _currentLineRange = [code lineRangeForRange:range];
    _currentSelectedString = [code substringWithRange:self.currentLineRange];
}

- (void)deleteLineInRange:(NSRange)range
{
    @try {
        [self.codeEditor insertText:@"" replacementRange:NSMakeRange(range.location-1, range.length)];
    }
    @catch (NSException *exception) {
        [self.codeEditor insertText:@"" replacementRange:NSMakeRange(range.location, range.length)];
    }
}

-(void)deleteLine
{
    if(self.codeEditor)
	{
		[self deleteLineInRange:self.currentLineRange];
	}
}

- (void)insertNewLineBelow:(NSRange)startRange lineContent:(NSString *)lineContent
{
    [self.codeEditor setSelectedRange:startRange];
    
    //TODO: why are we accessing self.codeEidtor directly? should we pass a string in? mixture of style is not good.
    NSString *content2insert = @"";
    NSRange customRange = NSMakeRange(startRange.location, lineContent.length);
    if (!isNewline([self.codeEditor.string characterAtIndex:startRange.location - 1])) {
        content2insert = [content2insert stringByAppendingString:@"\n"];
        customRange.location++;
    }
    content2insert = [content2insert stringByAppendingString:lineContent];
    [self.codeEditor insertText:content2insert];
//  highlight the newly created line(s)
    [self.codeEditor setSelectedRange:customRange];
}

-(void)duplicateLine
{
    if(self.codeEditor)
	{
		NSString *lineContent = [self.codeEditor.textStorage.string substringWithRange:self.currentLineRange];
        [self insertNewLineBelow:NSMakeRange(self.currentLineRange.location + self.currentLineRange.length, 0) lineContent:lineContent];
	}
}

- (void) showMessageBox:(NSString *)text
{
    NSAlert *alert = [[NSAlert alloc] init];
    
    [alert setMessageText:text];
    [alert runModal];
}

-(void)moveLineDown
{
    if(self.codeEditor)
    {
        // we need to store this locally because self.currentLineRange will be updated whenever we call setSelectedRange
        NSRange lCurrentLineRange = self.currentLineRange;
        NSString *lineContent = [self.codeEditor.textStorage.string substringWithRange:lCurrentLineRange];
        
        NSString *code = self.codeEditor.textStorage.string;
        NSRange nextLineRange = [self getNextLineRange:code forRange:lCurrentLineRange];
        
        [self insertNewLineBelow:NSMakeRange(nextLineRange.location + nextLineRange.length, 0) lineContent:lineContent];
        [self deleteLineInRange:lCurrentLineRange];
    }
}

-(void)moveLineUp
{
    if(self.codeEditor)
    {
        NSRange lCurrentLineRange = self.currentLineRange;
        NSString *lineContent = [self.codeEditor.textStorage.string substringWithRange:lCurrentLineRange];
        NSString *code = self.codeEditor.textStorage.string;
    
        NSRange lineAboveMovedLine = [self getPreviouseLineRange:code forRange:lCurrentLineRange];
        
        [self deleteLineInRange:lCurrentLineRange];
        [self insertNewLineBelow:NSMakeRange(lineAboveMovedLine.location, 0) lineContent:lineContent];
    }
}

- (NSRange)getNextLineRange:(const NSString *)code forRange:(NSRange)range
{
    return [code lineRangeForRange:NSMakeRange(range.location + range.length, 0)];
}

- (NSRange)getPreviouseLineRange:(const NSString *)code forRange:(NSRange)range
{
    if (range.location == 0) {
        return NSMakeRange(range.location, 0);
    }
    return [code lineRangeForRange:NSMakeRange(range.location - 1, 0)];
}
@end
