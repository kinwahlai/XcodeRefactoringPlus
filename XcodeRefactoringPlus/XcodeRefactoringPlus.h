//
//  XcodeRefactoringPlus.h
//  XcodeRefactoringPlus
//
//  Created by developer on 3/5/14.
//  Copyright (c) 2014 KinWah. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface XcodeRefactoringPlus : NSObject
@property (readonly) NSRange currentLineRange;
@property (readonly) NSString *currentSelectedString;
@property (readonly) NSTextView *codeEditor;
@end