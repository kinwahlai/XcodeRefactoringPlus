//
//  DVTAdapter.h
//  XcodeRefactoringPlus
//
//  Created by Kin Wah Lai on 6/8/14.
//  Copyright (c) 2014 KinWah. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DVTSourceTextView;

@interface DVTAdapter : NSObject
@property DVTSourceTextView* codeEditor;
- (void) highlightLine:(NSRange)linerange;
- (void) highlightTextAtRange:(NSRange)range;
- (void) deleteLine;
- (NSRange) getLineRange:(NSRange)range;
- (NSString*) getLineContentAtRange:(NSRange)linerange;
- (void) placeCursorAtLocation:(NSInteger)location;
- (void) insertLine:(NSString*)content;
- (void) moveCurrentLineDown;
- (void) moveCurrentLineUp;
- (NSRange) getLineRangeForSelectedRange;
- (BOOL) isSelectedRangeInTextViewValid;
- (NSString*) getContentAtRange:(NSRange)range;
- (void) replaceWithPlaceHolderInRange:(NSRange)range;
- (NSRange) getBlockStartLine;
- (void) insertNewLine;
- (void) selectNextPlaceholder;
@end
