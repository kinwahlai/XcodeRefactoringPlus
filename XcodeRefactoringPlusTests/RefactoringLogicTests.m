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

@interface RefactoringLogicUnderTest : RefactoringLogic
@property BOOL isValidFunc;
@property BOOL isAlertShowed;
@end

@implementation RefactoringLogicUnderTest
- (instancetype)initForTest
{
    self = [super init];
    if (self) {
        self.isValidFunc = YES;
        self.isAlertShowed = NO;
    }
    return self;
}
- (NSRange)getBlockStartLine:(DVTSourceTextView *)codeEditor {
    return NSMakeRange(0, 0);
}
- (BOOL) isSelectedRangeInTextViewValid:(DVTSourceTextView *)codeEditor {
    if (!self.isValidFunc) {
        NSException* myException = [NSException
                                    exceptionWithName:@"RefactoringPlusException"
                                    reason:@"Selected text is not a valid method or function."
                                    userInfo:NULL];
        @throw myException;
    }
    return self.isValidFunc;
}
- (void) showAlertBox:(NSException *)exception
{
    self.isAlertShowed = YES;
}
@end

@interface RefactoringLogicTests : XCTestCase
{
    id dvtTextView;
    id dvtTextStorage;
    RefactoringLogicUnderTest *rlogic;
    NSString *multilines;
    Class dvtSourceTextViewClass;
    Class dvtTextStorageClass;
    NSString *aClass;
}
@end

@implementation RefactoringLogicTests

// This loading the framework and get the class is to allow us to mock the class
- (void)loadDVTFrameworkAndClass
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
    dvtSourceTextViewClass = NSClassFromString(@"DVTSourceTextView");
    dvtTextStorageClass = NSClassFromString(@"DVTTextStorage");
    dlclose(handleDVTFoundation);
    dlclose(handleDVTKit);
}

- (void)setUp
{
    [super setUp];
    
    [self loadDVTFrameworkAndClass];
    
    dvtTextView = [OCMockObject mockForClass:dvtSourceTextViewClass];
    dvtTextStorage = [OCMockObject mockForClass:dvtTextStorageClass];
    rlogic = [[RefactoringLogicUnderTest alloc] initForTest];
    
    multilines = [NSString stringWithContentsOfFile:getTestFile(@"FileForLineManipuationTest.text") encoding:NSUTF8StringEncoding error:NULL];
    aClass = [NSString stringWithContentsOfFile:getTestFile(@"ClassForRefactoring.m") encoding:NSUTF8StringEncoding error:NULL];
    
    [[[dvtTextView stub] andReturn:multilines] string];
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
    [[dvtTextView expect] setSelectedRange:NSMakeRange(0, 67)];
    [[dvtTextView expect] deleteToEndOfLine:nil];
    [rlogic deleteLineWithRange:NSMakeRange(0, 0) inTextView:dvtTextView];
    [dvtTextView verify];
}

- (void)testDuplicateSelectedLine
{
    [[dvtTextView expect] setSelectedRange:NSMakeRange(67, 0)];
    [[dvtTextView expect] setSelectedRange:NSMakeRange(67, 67)]; // to highlight the duplicated line
    [[dvtTextView expect] insertText:OCMOCK_ANY];
    [rlogic duplicateLineWithRange:NSMakeRange(0, 0) inTextView:dvtTextView];
    [dvtTextView verify];
}

- (void)testMoveSelectedLineDown
{
    [[dvtTextView expect] setSelectedRange:NSMakeRange(0, 0)];
    [[dvtTextView expect] moveCurrentLineDown:[OCMArg isNil]];
    [[[dvtTextView expect] andReturnValue:[NSValue valueWithRange:NSMakeRange(22, 0)]] selectedRange];
    [[dvtTextView expect] setSelectedRange:NSMakeRange(0, 67)];
    [rlogic moveDownLineWithRange:NSMakeRange(0, 0) inTextView:dvtTextView];
    [dvtTextView verify];
}

- (void)testMoveSelectedLineUp
{
    [[dvtTextView expect] setSelectedRange:NSMakeRange(0, 0)];
    [[dvtTextView expect] moveCurrentLineUp:[OCMArg isNil]];
    [[[dvtTextView expect] andReturnValue:[NSValue valueWithRange:NSMakeRange(22, 0)]] selectedRange];
    [[dvtTextView expect] setSelectedRange:NSMakeRange(0, 67)];
    [rlogic moveUpLineWithRange:NSMakeRange(0, 0) inTextView:dvtTextView];
    [dvtTextView verify];
}

- (void)testExtractToLocalVariableIfValidFunc
{
    // this line is actually to reset the mock ;-)
    [dvtTextView init];
    NSRange rangeToTest = NSMakeRange(246, 38);

    [[[dvtTextView stub] andReturn:aClass] string];
    [[[dvtTextView stub] andReturnValue:[NSValue valueWithRange:rangeToTest]] selectedRange];
    
    [[dvtTextView expect] setSelectedRange:rangeToTest];
    [[dvtTextView expect] replaceCharactersInRange:rangeToTest withString:@"<#variable#>"];
    [[dvtTextView expect] setSelectedRange:NSMakeRange(0, 0)];
    [[dvtTextView expect] insertText:OCMOCK_ANY];
    [[dvtTextView expect] insertNewline:NULL];
    [[dvtTextView expect] setSelectedRange:NSMakeRange(0, 0)];
    
    [rlogic extractLocalVariableWithRange:rangeToTest inTextView:dvtTextView];
    [dvtTextView verify];
}

-(void)testShowAlertIfInvalidFuncWhenExtractToLocalVariable
{
    rlogic.isValidFunc = NO;
    NSRange rangeToTest = NSMakeRange(0, 0);
    [[dvtTextView expect] setSelectedRange:rangeToTest];
    [rlogic extractLocalVariableWithRange:rangeToTest inTextView:dvtTextView];
    [dvtTextView verify];
    XCTAssertEqual(YES, rlogic.isAlertShowed);
}
@end
