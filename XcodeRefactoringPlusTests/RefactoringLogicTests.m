//
//  RefactoringLogicTests.m
//  XcodeRefactoringPlus
//
//  Created by developer on 3/15/14.
//  Copyright (c) 2014 KinWah. All rights reserved.
//

#import <XCTest/XCTest.h>
#import <OCMock.h>
#define MOCKITO_SHORTHAND
#import <OCMockito/OCMockito.h>
#define HC_SHORTHAND
#import <OCHamcrest/OCHamcrest.h>
#define EXP_SHORTHAND
#import <Expecta.h>
#import "RefactoringLogic.h"
#import "DVTKit.h"

// this is to make the mock work
@protocol DVTSourceTextViewProtocol <NSObject>
-(void)setSelectedRange:(NSRange)range;
-(void)deleteToEndOfLine:(id)sender;
@end

@interface RefactoringLogicTests : XCTestCase

@end

@implementation RefactoringLogicTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testDeleteSelectedLineViaDVTSourceTextViewAPI
{
    id dvtTextView = [OCMockObject mockForProtocol:@protocol(DVTSourceTextViewProtocol)];
    RefactoringLogic *rlogic = [[RefactoringLogic alloc] init];
    [[dvtTextView expect] setSelectedRange:NSMakeRange(0, 0)];
    [[dvtTextView expect] deleteToEndOfLine:nil];
    [rlogic deleteLineWithRange:NSMakeRange(0, 0) inTextView:dvtTextView];
    [dvtTextView verify];
}

@end
