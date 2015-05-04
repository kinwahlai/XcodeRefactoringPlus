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

#import "DVTAdapter.h"
#import <AppKit/AppKit.h>
#import <DVTTextStorage.h>
#import <DVTSourceModel.h>
#import <DVTSourceModelItem.h>
#import <DVTSourceCodeLanguage.h>

@implementation DVTAdapter
@synthesize codeEditor;

#define PLACEHOLDER @"<#variable#>"

-(void)highlightLine:(NSRange)linerange
{
    [self highlightTextAtRange:linerange];
}

-(void)highlightTextAtRange:(NSRange)range
{
    [self.codeEditor setSelectedRange:range];
}

-(void)deleteLine
{
    [self.codeEditor deleteToEndOfLine:nil];
}

-(NSRange)getLineRange:(NSRange)range
{
    return [self.codeEditor.string lineRangeForRange:range];
}

- (NSString*) getContentAtRange:(NSRange)range
{
    return [self.codeEditor.string substringWithRange:range];
}

-(NSString *)getLineContentAtRange:(NSRange)linerange
{
    return [self getContentAtRange:linerange];
}

-(void)placeCursorAtLocation:(NSInteger)location
{
    [self.codeEditor setSelectedRange:NSMakeRange(location, 0)];
}

-(void)insertLine:(NSString *)content
{
    [self.codeEditor insertText:content];
}

-(void)moveCurrentLineDown
{
    [self.codeEditor moveCurrentLineDown:nil];
}

-(void)moveCurrentLineUp
{
    [self.codeEditor moveCurrentLineUp:nil];
}

- (NSRange) getLineRangeForSelectedRange
{
    return [self getLineRange:codeEditor.selectedRange];
}

-(BOOL)isSelectedRangeInTextViewValid
{
    DVTTextStorage *storage = self.codeEditor.textStorage;
    if ([storage.language.identifier isEqualToString:@"Xcode.SourceCodeLanguage.Swift"]) {
      //raise
      NSException* swiftException = [NSException
                                  exceptionWithName:@"RefactoringPlusSwiftException"
                                  reason:@"Xcode does not support swift refactoring"
                                  userInfo:NULL];
      @throw swiftException;
    }
  
    DVTSourceModel *model = [storage sourceModel];
    DVTSourceModelItem *selectedItem = [model adjoiningItemAtLocation:codeEditor.selectedRange.location];

    NSRange modelRange = selectedItem.range;

    // assuming [] method doesnt have next item
    DVTSourceModelItem *nextItem = selectedItem.nextItem;

    if (nextItem) {
        modelRange.length += nextItem.range.length;
    }

    if (!NSEqualRanges(modelRange, self.codeEditor.selectedRange)) {
        //raise
        NSException* myException = [NSException
                                    exceptionWithName:@"RefactoringPlusException"
                                    reason:@"Selected text is not a valid method or function."
                                    userInfo:NULL];
        @throw myException;
    }

    return YES;
}

- (NSRange)getBlockStartLine
{
    DVTTextStorage *storage = codeEditor.textStorage;
    DVTSourceModel *model = [storage sourceModel];
    DVTSourceModelItem *aMethodBlock = [model blockItemAtLocation:codeEditor.selectedRange.location];
    return [self getLineRange:NSMakeRange(aMethodBlock.range.location, 0)];
}

- (void) replaceWithPlaceHolderInRange:(NSRange)range
{
    [self replaceInRange:range withString:PLACEHOLDER];
}

- (void) replaceInRange:(NSRange)range withString:(NSString*)replacement
{
    [self.codeEditor shouldChangeTextInRange:range replacementString:replacement];
    [self.codeEditor replaceCharactersInRange:range withString:replacement];
    [self.codeEditor didChangeText];
}

- (void) insertNewLine
{
    [self.codeEditor insertNewline:NULL];
}

-(void)selectNextPlaceholder
{
    [self.codeEditor selectNextPlaceholder:NULL];
}
@end
