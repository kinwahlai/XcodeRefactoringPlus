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
- (void)deleteLineWithRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    NSRange fullLine = [codeEditor.string lineRangeForRange:range];
    [codeEditor setSelectedRange:fullLine];
    [codeEditor deleteToEndOfLine:nil];
}

- (void)duplicateLineWithRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    NSRange fullLine = [codeEditor.string lineRangeForRange:range];
    NSString *lineContent = [codeEditor.string substringWithRange:fullLine];
    [codeEditor setSelectedRange:NSMakeRange(fullLine.location + fullLine.length, 0)];
    [codeEditor insertText:lineContent];
    [codeEditor setSelectedRange:NSMakeRange(fullLine.location + fullLine.length, fullLine.length)];
}

- (void)moveDownLineWithRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    [codeEditor setSelectedRange:range];
    [codeEditor moveCurrentLineDown:nil];
    [codeEditor setSelectedRange:[codeEditor.string lineRangeForRange:codeEditor.selectedRange]];
}

- (void)moveUpLineWithRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    [codeEditor setSelectedRange:range];
    [codeEditor moveCurrentLineUp:nil];
    [codeEditor setSelectedRange:[codeEditor.string lineRangeForRange:codeEditor.selectedRange]];
}

- (void)extractLocalVariableWithRange:(NSRange)range inTextView:(DVTSourceTextView *)codeEditor
{
    [codeEditor setSelectedRange:range];
    
    @try {
        if ([self isSelectedRangeInTextViewValid:codeEditor]) {
            NSString *selectedMethod = [codeEditor.string substringWithRange:codeEditor.selectedRange];
            [codeEditor replaceCharactersInRange:codeEditor.selectedRange withString:@"<#variable#>"];
            NSRange block_start_line = [self getBlockStartLine:codeEditor];
            [codeEditor setSelectedRange:NSMakeRange(block_start_line.location + block_start_line.length, 0)];
            [codeEditor insertText:[NSString stringWithFormat:@"<#type#> <#variable#> = %@;", selectedMethod]];
            [codeEditor insertNewline:NULL];
            [codeEditor setSelectedRange:NSMakeRange(block_start_line.location + block_start_line.length, 0)];
        }
    }
    @catch (NSException *exception) {
        [self showAlertBox:exception];
    }
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

- (void) showAlertBox:(NSException *)exception
{
    NSAlert *alert = [[NSAlert alloc] init];
    [alert setAlertStyle:NSWarningAlertStyle];
    [alert setMessageText:exception.reason];
    [alert runModal];
}
@end
