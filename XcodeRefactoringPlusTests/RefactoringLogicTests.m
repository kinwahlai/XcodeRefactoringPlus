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
-(NSString*)string;
-(void)insertText:(NSString*)value;
@end

@interface RefactoringLogicTests : XCTestCase
{
    id dvtTextView;
    RefactoringLogic *rlogic;
    NSString *multilines;
}
@end

@implementation RefactoringLogicTests

- (void)setUp
{
    [super setUp];
    dvtTextView = [OCMockObject mockForProtocol:@protocol(DVTSourceTextViewProtocol)];
    rlogic = [[RefactoringLogic alloc] init];
    multilines = @"# Uncomment this line to define a global platform for your project\n\
platform :osx, \"10.8\"\n\
\n\
target \"XcodeRefactoringPlus\" do\n\
\n\
end\n\
\n\
target \"XcodeRefactoringPlusTests\" do\n\
pod 'OCMock', '~> 2.2.3'\n\
pod 'Expecta', '~> 0.2.3'\n\
end";
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testDeleteSelectedLine
{
    [[dvtTextView stub] setSelectedRange:NSMakeRange(0, 0)];
    [[dvtTextView expect] deleteToEndOfLine:nil];
    [rlogic deleteLineWithRange:NSMakeRange(0, 0) inTextView:dvtTextView];
    [dvtTextView verify];
}

- (void)testDuplicateSelectedLine {
    [[[dvtTextView stub] andReturn:multilines] string];
    [[dvtTextView stub] setSelectedRange:NSMakeRange(67, 0)];
    [[dvtTextView expect] insertText:OCMOCK_ANY];
    [rlogic duplicateLineWithRange:NSMakeRange(0, 0) inTextView:dvtTextView];
    [dvtTextView verify];
}
@end
