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
    [codeEditor setSelectedRange:range];
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
}

- (void)moveUpLineWithRange:(NSRange)range inTextView:(DVTSourceTextView*)codeEditor
{
    [codeEditor setSelectedRange:range];
    [codeEditor moveCurrentLineUp:nil];
}

- (void) showMessageBox:(NSString *)text
{
    NSAlert *alert = [[NSAlert alloc] init];
    
    [alert setMessageText:text];
    [alert runModal];
}
@end
