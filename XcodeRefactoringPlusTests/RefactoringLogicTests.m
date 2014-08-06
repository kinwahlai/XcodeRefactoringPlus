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

#import <dlfcn.h>

#import <XCTest/XCTest.h>
#import <OCMock.h>
#define EXP_SHORTHAND
#import <Expecta.h>
#import "RefactoringLogic.h"
#import "DVTKit.h"
#import "DVTAdapterFactory.h"

@interface FakeAdapterFactory : NSObject  <DVTAdapterFactory>
@property DVTAdapter* adapter;
@end

@implementation FakeAdapterFactory
- (instancetype)initWithAdapter:(DVTAdapter*)adapter
{
    self = [super init];
    if (self) {
        self.adapter = adapter;
    }
    return self;
}
-(DVTAdapter*)makeAdapterWithCodeEditor:(DVTSourceTextView *)codeEditor
{
    [self.adapter setCodeEditor:codeEditor];
    return self.adapter;
}
@end

@interface RefactoringLogicTests : XCTestCase
{
    RefactoringLogic *rlogic;
    FakeAdapterFactory *fakeFactory;
    id fakeAdapter;
}
@end

@implementation RefactoringLogicTests
- (void)setUp
{
    [super setUp];
    
    fakeAdapter = [OCMockObject mockForClass:[DVTAdapter class]];
    fakeFactory = [[FakeAdapterFactory alloc] initWithAdapter:fakeAdapter];
    [[fakeAdapter expect] setCodeEditor:OCMOCK_ANY];
    rlogic = [[RefactoringLogic alloc] initWithAdapterFactory:fakeFactory];
}

NSString* getTestFile(NSString* testFile)
{
    return [[@__FILE__ stringByDeletingLastPathComponent] stringByAppendingPathComponent:testFile];
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testDeleteSelectedLine
{
    [[[fakeAdapter expect] andReturnValue:[NSValue valueWithRange:NSMakeRange(0, 67)]] getLineRange:NSMakeRange(0, 0)];
    [[fakeAdapter expect] highlightLine:NSMakeRange(0, 67)];
    [[fakeAdapter expect] deleteLine];
    
    [rlogic deleteLineWithRange:NSMakeRange(0, 0) inTextView:OCMOCK_ANY];
    [fakeAdapter verify];
}

- (void)testDuplicateSelectedLine
{
    [[[fakeAdapter expect] andReturnValue:[NSValue valueWithRange:NSMakeRange(67, 22)]] getLineRange:NSMakeRange(67, 0)];
    [[[fakeAdapter expect] andReturn:@"platform :osx, \"10.8\""] getLineContentAtRange:NSMakeRange(67, 22)];
    [[fakeAdapter expect] placeCursorAtLocation:89];
    [[fakeAdapter expect] insertLine:@"platform :osx, \"10.8\""];
    [[fakeAdapter expect] highlightLine:NSMakeRange(89, 22)];
    
    [rlogic duplicateLineWithRange:NSMakeRange(67, 0) inTextView:OCMOCK_ANY];
    [fakeAdapter verify];
}

- (void)testMoveSelectedLineDown
{
    [[fakeAdapter expect] highlightTextAtRange:NSMakeRange(0, 67)];
    [[fakeAdapter expect] moveCurrentLineDown];
    [[[fakeAdapter expect] andReturnValue:[NSValue valueWithRange:NSMakeRange(22, 67)]] getLineRangeForSelectedRange];
     [[fakeAdapter expect] highlightLine:NSMakeRange(22, 67)];
    [rlogic moveDownLineWithRange:NSMakeRange(0, 67) inTextView:OCMOCK_ANY];
    [fakeAdapter verify];
}

- (void)testMoveSelectedLineUp
{
    [[fakeAdapter expect] highlightTextAtRange:NSMakeRange(89, 22)];
    [[fakeAdapter expect] moveCurrentLineUp];
    [[[fakeAdapter expect] andReturnValue:[NSValue valueWithRange:NSMakeRange(0, 22)]] getLineRangeForSelectedRange];
    [[fakeAdapter expect] highlightLine:NSMakeRange(0, 22)];
    [rlogic moveUpLineWithRange:NSMakeRange(89, 22) inTextView:OCMOCK_ANY];
    [fakeAdapter verify];
}

- (void)testExtractToLocalVariableIfValidFunc
{
    
    NSRange rangeToTest = NSMakeRange(246, 38);
    [[fakeAdapter expect] highlightTextAtRange:rangeToTest];
    [[[fakeAdapter expect] andReturnValue:[NSNumber numberWithBool:YES]] isSelectedRangeInTextViewValid];
    [[[fakeAdapter expect] andReturn:@"[NSString stringWithFormat:@\"%d\",1234]"] getContentAtRange:rangeToTest];
    [[fakeAdapter expect] replaceWithPlaceHolderInRange:rangeToTest];
    [[[fakeAdapter expect] andReturnValue:[NSValue valueWithRange:NSMakeRange(100, 0)]] getBlockStartLine];
    [[fakeAdapter expect] placeCursorAtLocation:100];
    [[fakeAdapter expect] insertLine:@"<#type#> <#variable#> = [NSString stringWithFormat:@\"%d\",1234];"];
    [[fakeAdapter expect] insertNewLine];
    [[fakeAdapter expect] placeCursorAtLocation:100];
    [[fakeAdapter expect] selectNextPlaceholder];
    
    [rlogic extractLocalVariableWithRange:rangeToTest inTextView:OCMOCK_ANY];
    [fakeAdapter verify];
}

-(void)testShowAlertIfInvalidFuncWhenExtractToLocalVariable
{
    NSRange rangeToTest = NSMakeRange(0, 0);
    [[fakeAdapter expect] highlightTextAtRange:rangeToTest];
    [[[fakeAdapter expect] andReturnValue:[NSNumber numberWithBool:NO]] isSelectedRangeInTextViewValid];
    [rlogic extractLocalVariableWithRange:rangeToTest inTextView:OCMOCK_ANY];
    [fakeAdapter verify];
}
@end
