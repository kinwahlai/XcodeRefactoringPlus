//
//  DVTAdapter.m
//  XcodeRefactoringPlus
//
//  Created by Kin Wah Lai on 6/8/14.
//  Copyright (c) 2014 KinWah. All rights reserved.
//

#import "DVTAdapter.h"
#import <AppKit/AppKit.h>
#import "DVTKit.h"

@implementation DVTAdapter
@synthesize codeEditor;

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
    [self.codeEditor replaceCharactersInRange:range withString:@"<#variable#>"];
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
