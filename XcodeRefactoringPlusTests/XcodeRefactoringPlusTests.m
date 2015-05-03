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
#import <objc/objc-api.h>

#import <XCTest/XCTest.h>
#import <AppKit/AppKit.h>
#import "XcodeRefactoringPlus.h"
#import <OCMock.h>
#define EXP_SHORTHAND
#import <Expecta.h>
#import <Swizzlean/Swizzlean.h>
#import "RefactoringLogic.h"

OBJC_EXPORT Class loadClassFromDVTFramework(NSString *className)
{
    /**
     * Another way of loading the private framework
     * NSBundle *dvtF = [NSBundle bundleWithPath:@"/Applications/Xcode.app/Contents/SharedFrameworks/DVTFoundation.framework"];
     * [dvtF load];
     * NSBundle *dvt = [NSBundle bundleWithPath:@"/Applications/Xcode.app/Contents/SharedFrameworks/DVTKit.framework"];
     * [dvt load];
     **/
    void* handleDVTFoundation = dlopen("/Applications/Xcode.app/Contents/SharedFrameworks/DVTFoundation.framework/Versions/Current/DVTFoundation", RTLD_NOW);
    void* handleDVTKit = dlopen("/Applications/Xcode.app/Contents/SharedFrameworks/DVTKit.framework/Versions/Current/DVTKit", RTLD_NOW);
    Class targetClass = NSClassFromString(className);
    dlclose(handleDVTFoundation);
    dlclose(handleDVTKit);
    return targetClass;
}

@interface XcodeRefactoringPlus (UnderTest)
-(void)deleteLine;
-(void)duplicateLine;
-(void)moveLineDown;
-(void)moveLineUp;
-(void)extractLocalVariable;
-(void)inlineLocalVariable;
-(NSResponder *)getFirstResponder;
@end

@implementation XcodeRefactoringPlus (UnderTest)
-(NSResponder *)getFirstResponder
{
    Class dvtSourceTextView = loadClassFromDVTFramework(@"DVTSourceTextView");
    id textView = [OCMockObject mockForClass:dvtSourceTextView];
    [[[textView stub] andReturnValue:[NSValue valueWithRange:NSMakeRange(0, 0)]] selectedRange];
    return textView;
}

@end

@interface XcodeRefactoringPlusTests : XCTestCase
@end

@implementation XcodeRefactoringPlusTests
{
    XcodeRefactoringPlus *myplugin;
    id refactoringLogic;
}
- (void)setUp
{
    [super setUp];
    refactoringLogic = [OCMockObject mockForClass:[RefactoringLogic class]];
    myplugin = [[XcodeRefactoringPlus alloc] initWithLogic:refactoringLogic];
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testDeleteLine
{
    [[refactoringLogic expect] deleteLineWithRange:NSMakeRange(0, 0) inTextView:OCMOCK_ANY];
    expect(^{[myplugin deleteLine];}).toNot.raiseAny();
    [refactoringLogic verify];
}

- (void)testDuplicateLine
{
    [[refactoringLogic expect] duplicateLineWithRange:NSMakeRange(0, 0) inTextView:OCMOCK_ANY];
    expect(^{[myplugin duplicateLine];}).toNot.raiseAny();
    [refactoringLogic verify];
}

- (void)testMoveLineDown
{
    [[refactoringLogic expect] moveDownLineWithRange:NSMakeRange(0, 0) inTextView:OCMOCK_ANY];
    expect(^{[myplugin moveLineDown];}).toNot.raiseAny();
    [refactoringLogic verify];
}

- (void)testMoveLineUp
{
    [[refactoringLogic expect] moveUpLineWithRange:NSMakeRange(0, 0) inTextView:OCMOCK_ANY];
    expect(^{[myplugin moveLineUp];}).toNot.raiseAny();
    [refactoringLogic verify];
}

- (void)testExtractLocalVariable
{
    [[refactoringLogic expect] extractLocalVariableWithRange:NSMakeRange(0, 0) inTextView:OCMOCK_ANY];
    expect(^{[myplugin extractLocalVariable];}).toNot.raiseAny();
    [refactoringLogic verify];
}

- (void)testInlineLocalVariable
{
    [[refactoringLogic expect] inlineLocalVariableWithRange:NSMakeRange(0, 0) inTextView:OCMOCK_ANY];
    expect(^{[myplugin inlineLocalVariable];}).toNot.raiseAny();
    [refactoringLogic verify];
}
@end
