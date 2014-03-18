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
#import "RefactoringLogic.h"
#import "DVTKit.h"

static XcodeRefactoringPlus *sharedPlugin;

@interface XcodeRefactoringPlus()
{
    RefactoringLogic *logic;
}
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
    if (self = [self initWithLogic:[[RefactoringLogic alloc] init]]) {
        // reference to plugin's bundle, for resource acccess
        self.bundle = plugin;
        [self setupSubMenu:[[[[NSApp mainMenu] itemWithTitle:@"Edit"] submenu] itemWithTitle:@"Refactor"]];
    }
    return self;
}

- (instancetype)initWithLogic:(RefactoringLogic*)refactoringLogic
{
    self = [super init];
    if (self) {
        logic = refactoringLogic;
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

- (NSResponder *)getFirstResponder
{
    NSResponder *firstResponder = [[NSApp keyWindow] firstResponder];
    return firstResponder;
}

-(void)deleteLine
{
    NSResponder *firstResponder;
    firstResponder = [self getFirstResponder];
    if (([firstResponder isKindOfClass:NSClassFromString(@"DVTSourceTextView")] && [firstResponder isKindOfClass:[NSTextView class]])) {
        DVTSourceTextView *dvtSourceTextView = (DVTSourceTextView*) firstResponder;
        [logic deleteLineWithRange:dvtSourceTextView.selectedRange inTextView:dvtSourceTextView];
    }
}


-(void)duplicateLine
{
    NSResponder *firstResponder;
    firstResponder = [self getFirstResponder];
    if (([firstResponder isKindOfClass:NSClassFromString(@"DVTSourceTextView")] && [firstResponder isKindOfClass:[NSTextView class]])) {
        DVTSourceTextView *dvtSourceTextView = (DVTSourceTextView*) firstResponder;
        [logic duplicateLineWithRange:dvtSourceTextView.selectedRange inTextView:dvtSourceTextView];
    }
}

-(void)moveLineDown
{
    NSResponder *firstResponder;
    firstResponder = [self getFirstResponder];
    if (([firstResponder isKindOfClass:NSClassFromString(@"DVTSourceTextView")] && [firstResponder isKindOfClass:[NSTextView class]])) {
        DVTSourceTextView *dvtSourceTextView = (DVTSourceTextView*) firstResponder;
        [logic moveDownLineWithRange:dvtSourceTextView.selectedRange inTextView:dvtSourceTextView];
    }
}

-(void)moveLineUp
{
    NSResponder *firstResponder;
    firstResponder = [self getFirstResponder];
    if (([firstResponder isKindOfClass:NSClassFromString(@"DVTSourceTextView")] && [firstResponder isKindOfClass:[NSTextView class]])) {
        DVTSourceTextView *dvtSourceTextView = (DVTSourceTextView*) firstResponder;
        [logic moveUpLineWithRange:dvtSourceTextView.selectedRange inTextView:dvtSourceTextView];
    }
}

- (void) showMessageBox:(NSString *)text
{
    NSAlert *alert = [[NSAlert alloc] init];
    
    [alert setMessageText:text];
    [alert runModal];
}

@end
