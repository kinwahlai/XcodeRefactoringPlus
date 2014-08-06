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

@implementation RefactoringLogic
- (instancetype)initWithAdapterFactory:(id<DVTAdapterFactory>)factory
{
    self = [super init];
    if (self) {
        self.factory = factory;
    }
    return self;
}
- (NSRange) getLineRangeForSelectedRangeInTextView:(DVTSourceTextView*)codeEditor
{
    return [self getLineRange:codeEditor.selectedRange inTextView:codeEditor];
}

- (NSRange) getLineRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    return [codeEditor.string lineRangeForRange:range];
}

- (void) highlightLine:(NSRange)linerange inTextView:(DVTSourceTextView*)codeEditor
{
    [self highlightTextAtRange:linerange inTextView:codeEditor];
}

- (void) highlightTextAtRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    [codeEditor setSelectedRange:range];
}

- (void) deleteLineInTextView:(DVTSourceTextView*)codeEditor
{
    [codeEditor deleteToEndOfLine:nil];
}

- (NSString*) getContentAtRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    return [codeEditor.string substringWithRange:range];
}


- (NSString*) getLineContentAtRange:(NSRange)linerange inTextView:(DVTSourceTextView*)codeEditor
{
    return [self getContentAtRange:linerange inTextView:codeEditor];
}

- (void) placeCursorAtLocation:(NSInteger)location inTextView:(DVTSourceTextView*)codeEditor
{
    [codeEditor setSelectedRange:NSMakeRange(location, 0)];
}

- (void) insertLine:(NSString*)content inTextView:(DVTSourceTextView*)codeEditor
{
    [codeEditor insertText:content];
}

- (void) insertNewLineInTextView:(DVTSourceTextView*)codeEditor
{
    [codeEditor insertNewline:NULL];
}

- (void) moveCurrentLineDownInTextView:(DVTSourceTextView*)codeEditor
{
    [codeEditor moveCurrentLineDown:nil];
}

- (void) moveCurrentLineUpInTextView:(DVTSourceTextView*)codeEditor
{
    [codeEditor moveCurrentLineUp:nil];
}

- (void) replaceWithPlaceHolderInRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    [codeEditor replaceCharactersInRange:range withString:@"<#variable#>"];
}

- (NSRange)getBlockStartLine:(DVTSourceTextView *)codeEditor
{
    DVTTextStorage *storage = codeEditor.textStorage;
    DVTSourceModel *model = [storage sourceModel];
    DVTSourceModelItem *aMethodBlock = [model blockItemAtLocation:codeEditor.selectedRange.location];
    return [codeEditor.string lineRangeForRange:NSMakeRange(aMethodBlock.range.location, 0)];
}

- (BOOL) isSelectedRangeInTextViewValid:(DVTSourceTextView *)codeEditor
{
    DVTTextStorage *storage = codeEditor.textStorage;
    DVTSourceModel *model = [storage sourceModel];
    DVTSourceModelItem *selectedItem = [model adjoiningItemAtLocation:codeEditor.selectedRange.location];
    
    NSRange modelRange = selectedItem.range;
    
    // assuming [] method doesnt have next item
    DVTSourceModelItem *nextItem = selectedItem.nextItem;
    
    if (nextItem) {
        modelRange.length += nextItem.range.length;
    }
    
    if (!NSEqualRanges(modelRange, codeEditor.selectedRange)) {
        //raise
        NSException* myException = [NSException
                                    exceptionWithName:@"RefactoringPlusException"
                                    reason:@"Selected text is not a valid method or function."
                                    userInfo:NULL];
        @throw myException;
    }
    
    return YES;
}

// interface to xcoderefactoringplus class
- (void)deleteLineWithRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    [self highlightLine:[self getLineRange:range inTextView:codeEditor] inTextView:codeEditor];
    [self deleteLineInTextView:codeEditor];
}

- (void)duplicateLineWithRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    NSRange linerange = [self getLineRange:range inTextView:codeEditor];
    NSString *lineContent = [self getLineContentAtRange:linerange inTextView:codeEditor];
    [self placeCursorAtLocation:linerange.location + linerange.length inTextView:codeEditor];
    [self insertLine:lineContent inTextView:codeEditor];
    [self highlightLine:NSMakeRange(linerange.location + linerange.length, linerange.length) inTextView:codeEditor];
}

- (void)moveDownLineWithRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
//    [self placeCursorAtLocation:range.location inTextView:codeEditor];
    [self highlightTextAtRange:range inTextView:codeEditor];
    [self moveCurrentLineDownInTextView:codeEditor];
    [self highlightLine:[self getLineRangeForSelectedRangeInTextView:codeEditor] inTextView:codeEditor];
}

- (void)moveUpLineWithRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
//    [self placeCursorAtLocation:range.location inTextView:codeEditor];
    [self highlightTextAtRange:range inTextView:codeEditor];
    [self moveCurrentLineUpInTextView:codeEditor];
    [self highlightLine:[self getLineRangeForSelectedRangeInTextView:codeEditor] inTextView:codeEditor];
}

// we need batch edit for better undo
- (void)extractLocalVariableWithRange:(NSRange)range inTextView:(DVTSourceTextView *)codeEditor
{
    [self highlightTextAtRange:range inTextView:codeEditor];
    
    @try {
        if ([self isSelectedRangeInTextViewValid:codeEditor]) {
            NSString *selectedMethod = [self getContentAtRange:range inTextView:codeEditor];
            [self replaceWithPlaceHolderInRange:range inTextView:codeEditor];
            NSRange block_start_line = [self getBlockStartLine:codeEditor];
            [self placeCursorAtLocation:block_start_line.location + block_start_line.length inTextView:codeEditor];
            [self insertLine:[NSString stringWithFormat:@"<#type#> <#variable#> = %@;", selectedMethod] inTextView:codeEditor];
            [self insertNewLineInTextView:codeEditor];
            [self placeCursorAtLocation:block_start_line.location + block_start_line.length inTextView:codeEditor];
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
