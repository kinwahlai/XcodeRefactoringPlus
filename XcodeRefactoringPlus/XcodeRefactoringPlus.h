//
//  XcodeRefactoringPlus.h
//  XcodeRefactoringPlus
//
//  Created by developer on 3/5/14.
//  Copyright (c) 2014 KinWah. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface XcodeRefactoringPlus : NSObject
@property (assign) NSRange currentRange;
@property (assign) NSRange currentLineRange;
@property (nonatomic, retain) NSString *currentSelectedString;
@property (nonatomic, retain) NSTextView *codeEditor;
@end