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

#import <AppKit/AppKit.h>
#import "RefactoringLogic.h"
#import "DVTKit.h"
#import "DVTAdapter.h"

@implementation RefactoringLogic
- (instancetype) initWithAdapterFactory:(id<DVTAdapterFactory>)factory
{
    self = [super init];
    if (self) {
        self.factory = factory;
    }
    return self;
}

// interface to xcoderefactoringplus class
- (void)deleteLineWithRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    DVTAdapter* adapter = [self.factory makeAdapterWithCodeEditor:codeEditor];
    [adapter highlightLine:[adapter getLineRange:range]];
    [adapter deleteLine];
}

- (void)duplicateLineWithRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    DVTAdapter* adapter = [self.factory makeAdapterWithCodeEditor:codeEditor];
    NSRange linerange = [adapter getLineRange:range];
    NSString *lineContent = [adapter getLineContentAtRange:linerange];
    [adapter placeCursorAtLocation:linerange.location + linerange.length];
    [adapter insertLine:lineContent];
    [adapter highlightLine:NSMakeRange(linerange.location + linerange.length, linerange.length)];
}

- (void)moveDownLineWithRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    DVTAdapter* adapter = [self.factory makeAdapterWithCodeEditor:codeEditor];
    [adapter highlightTextAtRange:range];
    [adapter moveCurrentLineDown];
    [adapter highlightLine:[adapter getLineRangeForSelectedRange]];
}

- (void)moveUpLineWithRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    DVTAdapter* adapter = [self.factory makeAdapterWithCodeEditor:codeEditor];
    [adapter highlightTextAtRange:range];
    [adapter moveCurrentLineUp];
    [adapter highlightLine:[adapter getLineRangeForSelectedRange]];
}

// we need batch edit for better undo
- (void)extractLocalVariableWithRange:(NSRange)range inTextView:(DVTSourceTextView *)codeEditor
{
    DVTAdapter* adapter = [self.factory makeAdapterWithCodeEditor:codeEditor];
    @try {
        [adapter highlightTextAtRange:range];
        if ([adapter isSelectedRangeInTextViewValid]) {
            NSString *selectedMethod = [adapter getContentAtRange:range];
            [adapter replaceWithPlaceHolderInRange:range];
            NSRange block_start_line = [adapter getBlockStartLine];
            [adapter placeCursorAtLocation:block_start_line.location + block_start_line.length];
            [adapter insertLine:[NSString stringWithFormat:@"<#type#> <#variable#> = %@;", selectedMethod]];
            [adapter insertNewLine];
            [adapter placeCursorAtLocation:block_start_line.location + block_start_line.length];
            [adapter selectNextPlaceholder];
        }
    }
    @catch (NSException *exception) {
        [self showAlertBox:exception];
    }
}

- (void) showAlertBox:(NSException *)exception
{
    NSAlert *alert = [[NSAlert alloc] init];
    [alert setAlertStyle:NSWarningAlertStyle];
    [alert setMessageText:exception.reason];
    [alert runModal];
}
@end
