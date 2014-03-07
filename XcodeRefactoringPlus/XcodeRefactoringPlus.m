//
//  XcodeRefactoringPlus.m
//  XcodeRefactoringPlus
//
//  Created by developer on 3/5/14.
//    Copyright (c) 2014 KinWah. All rights reserved.
//

#import "XcodeRefactoringPlus.h"

static XcodeRefactoringPlus *sharedPlugin;

@interface XcodeRefactoringPlus()

@property (nonatomic, strong) NSBundle *bundle;
@end

@implementation XcodeRefactoringPlus

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
        [[menuItem submenu] addItem:[NSMenuItem separatorItem]];
        
        NSMenuItem *deleteLineMenuItem = [[NSMenuItem alloc] initWithTitle:@"Delete Line" action:@selector(deleteLine) keyEquivalent:@"d"];
        [deleteLineMenuItem setKeyEquivalentModifierMask:NSCommandKeyMask];
        [deleteLineMenuItem setTarget:self];
        [[menuItem submenu] addItem:deleteLineMenuItem];
        
        NSMenuItem *duplicateLineMenuItem = [[NSMenuItem alloc] initWithTitle:@"Duplicate Line" action:@selector(duplicateLine) keyEquivalent:[NSString stringWithCharacters:&arrowKeyDown length:1]];
        [duplicateLineMenuItem setTarget:self];
        [duplicateLineMenuItem setKeyEquivalentModifierMask:(NSCommandKeyMask | NSAlternateKeyMask)];
        [[menuItem submenu] addItem:duplicateLineMenuItem];
        
        NSMenuItem *moveLineDownMenuItem = [[NSMenuItem alloc] initWithTitle:@"Move Line Down" action:@selector(moveLineDown) keyEquivalent:[NSString stringWithCharacters:&arrowKeyDown length:1]];
        [moveLineDownMenuItem setTarget:self];
        [moveLineDownMenuItem setKeyEquivalentModifierMask:(NSAlternateKeyMask)];
        [[menuItem submenu] addItem:moveLineDownMenuItem];
        
        // tap into notifications
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(selectionDidChange:) name:NSTextViewDidChangeSelectionNotification object:nil];
        
        if(!self.codeEditor){
            NSResponder *firstResponder = [[NSApp keyWindow] firstResponder];
            if([firstResponder isKindOfClass:NSClassFromString(@"DVTSourceTextView")] && [firstResponder isKindOfClass:[NSTextView class]]){
                self.codeEditor = (NSTextView *)firstResponder;
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
		self.codeEditor = (NSTextView *)[notification object];
        NSArray *selectedRanges = [self.codeEditor selectedRanges];
        if(selectedRanges.count >= 1)
        {
            [self updateLineRange:[[selectedRanges objectAtIndex:0] rangeValue] AndSelectedString:self.codeEditor.textStorage.string];
        }
    }
}

-(void)updateLineRange:(NSRange)range AndSelectedString:(const NSString *)code
{
    self.currentRange     = range;
    self.currentLineRange = [code lineRangeForRange:range];
    self.currentSelectedString = [code substringWithRange:range];
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
    [self.codeEditor insertText:lineContent];
//  highlight the newly created line(s)
    [self.codeEditor setSelectedRange:NSMakeRange(startRange.location, lineContent.length)];
}

-(void)duplicateLine
{
    if(self.codeEditor)
	{
		NSString *lineContent = [self.codeEditor.textStorage.string substringWithRange:self.currentLineRange];
        [self insertNewLineBelow:NSMakeRange(self.currentLineRange.location + self.currentLineRange.length, 0) lineContent:lineContent];
        // maybe we should continue to highlight the line
        
	}
}

-(void)moveLineDown
{
    if(self.codeEditor)
    {
        NSString *lineContent = [self.codeEditor.textStorage.string substringWithRange:self.currentLineRange];
        
        NSString *code = self.codeEditor.textStorage.string;
        NSRange nextLineRange = [self getNextLineRange:code forRange:self.currentLineRange];
        
        [self insertNewLineBelow:NSMakeRange(nextLineRange.location + nextLineRange.length, 0) lineContent:lineContent];
        [self deleteLineInRange:self.currentLineRange];

        NSRange lineAboveMovedLine = NSMakeRange(nextLineRange.location - self.currentLineRange.length, nextLineRange.length);
        nextLineRange = [self getNextLineRange:code forRange:lineAboveMovedLine];
        [self updateLineRange:nextLineRange AndSelectedString:code];
    }
}

- (NSRange)getNextLineRange:(const NSString *)code forRange:(NSRange)range
{
    return [code lineRangeForRange:NSMakeRange(range.location + range.length, 0)];
}
@end
