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
#import <AppKit/AppKit.h>
#import "XcodeRefactoringPlus.h"

#define EXP_SHORTHAND
#import <Expecta.h>
#import <Swizzlean/Swizzlean.h>

@interface XcodeRefactoringPlus (UnderTest)
-(void)deleteLine;
-(void)duplicateLine;
-(void)moveLineDown;
-(void)moveLineUp;
-(void)selectionDidChange:(NSNotification *)notification;
@end

@interface XcodeRefactoringPlusTests : XCTestCase
@end

@implementation XcodeRefactoringPlusTests
{
    XcodeRefactoringPlus *myplugin;
    NSTextView *textView;
    NSString *multilines;
    NSString *multilinesFromFile;
}
- (void)setUp
{
    [super setUp];
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
    myplugin = [[XcodeRefactoringPlus alloc] init];
    textView = [[NSTextView alloc] init];
    [textView setString:multilines];
    // this part of code is to simulate the text view behavior
    Swizzlean *swizzle = [[Swizzlean alloc] initWithClassToSwizzle:[NSTextView class]];
    [swizzle swizzleInstanceMethod:@selector(setSelectedRange:) withReplacementImplementation:^(NSTextView *_self, NSRange value) {
        [_self setSelectedRanges:@[[NSValue valueWithRange:value]]];
        [myplugin selectionDidChange:[NSNotification notificationWithName:NSTextViewDidChangeSelectionNotification object:_self]];
    }];

}

- (void)tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testTextSelectionSuccessful
{
    [textView setSelectedRange:NSMakeRange(67, 8)];
    expect(myplugin.currentSelectedString).notTo.beNil();
    expect(myplugin.currentSelectedString).to.equal(@"platform :osx, \"10.8\"\n");
    expect([textView.string componentsSeparatedByString:@"\n"]).to.haveCountOf(11);
}

- (void) testGettingTheCorrectLineRangeForSelectedText
{
    [textView setSelectedRange:NSMakeRange(90, 3)];
    expect(myplugin.currentLineRange.location).to.equal(90);
    expect(myplugin.currentLineRange.length).to.equal(33);
}

- (void) testGettingTheCorrectLineRangeForMultiline {
    [textView setSelectedRange:NSMakeRange(67, 25)];
    expect(myplugin.currentLineRange.location).to.equal(67);
    expect(myplugin.currentLineRange.length).to.equal(56);
}

- (void)testDuplicateSingleLineWhereSelectedTextIs;
{
    [textView setSelectedRange:NSMakeRange(67, 8)];
    [myplugin duplicateLine];
    // ensure that current selected range has updated
    expect(myplugin.currentLineRange.location).to.equal(89);
    expect(myplugin.currentLineRange.length).to.equal(22);
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(12);
    expect(splitted[1]).to.equal(@"platform :osx, \"10.8\"");
    expect(splitted[2]).to.equal(@"platform :osx, \"10.8\"");
}

- (void)testDuplicate2Lines;
{
    [textView setSelectedRange:NSMakeRange(90, 35)];
    [myplugin duplicateLine];
    expect(myplugin.currentLineRange.location).to.equal(128);
    expect(myplugin.currentLineRange.length).to.equal(38);
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(14);
    expect(splitted[3]).to.equal(@"target \"XcodeRefactoringPlus\" do");
    expect(splitted[4]).to.equal(@"");
    expect(splitted[5]).to.equal(@"end");
    expect(splitted[6]).to.equal(@"target \"XcodeRefactoringPlus\" do");
    expect(splitted[7]).to.equal(@"");
    expect(splitted[8]).to.equal(@"end");
}

- (void) testDeleteSingleLine
{
    [textView setSelectedRange:NSMakeRange(67, 0)];
    [myplugin deleteLine];
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(10);
    expect([textView.string componentsSeparatedByString:@"\n"]).notTo.contain(@"platform :osx, \"10.8\"");
}

- (void) testDelete2Lines
{
    [textView setSelectedRange:NSMakeRange(90, 34)];
    [myplugin deleteLine];
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(9);
    expect([textView.string componentsSeparatedByString:@"\n"]).notTo.contain(@"target \"XcodeRefactoringPlus\" do");
}

- (void)testMoveSingleLine1LineDown
{
    [textView setSelectedRange:NSMakeRange(0, 0)];
    [myplugin moveLineDown];
    expect(myplugin.currentLineRange.location).to.equal(22);
    expect(myplugin.currentLineRange.length).to.equal(67);
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(11);
    expect(splitted[0]).to.equal(@"platform :osx, \"10.8\"");
    expect(splitted[1]).to.equal(@"# Uncomment this line to define a global platform for your project");
}

- (void)testMoveSingleLine2LinesDown
{
    [textView setSelectedRange:NSMakeRange(167, 0)];
    [myplugin moveLineDown];
    expect(myplugin.currentLineRange.location).to.equal(193);
    expect(myplugin.currentLineRange.length).to.equal(25);
    [myplugin moveLineDown];
    expect(myplugin.currentLineRange.location).to.equal(197);
    expect(myplugin.currentLineRange.length).to.equal(25);
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(12);
    expect(splitted[8]).to.equal(@"pod 'Expecta', '~> 0.2.3'");
    expect(splitted[9]).to.equal(@"end");
    expect(splitted[10]).to.equal(@"pod 'OCMock', '~> 2.2.3'");
}

- (void)testMoveMultiline2LineDown
{
    [textView setSelectedRange:NSMakeRange(130, 45)];
    [myplugin moveLineDown];
    expect(myplugin.currentLineRange.location).to.equal(155);
    expect(myplugin.currentLineRange.length).to.equal(63);
    expect(myplugin.currentSelectedString).to.startWith(@"target \"XcodeRefactoringPlusTests\" do\n");
    [myplugin moveLineDown];
    expect(myplugin.currentLineRange.location).to.equal(159);
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(12);
    expect(splitted[9]).to.equal(@"target \"XcodeRefactoringPlusTests\" do");
    expect(splitted[10]).to.equal(@"pod 'OCMock', '~> 2.2.3'");
}

- (void)testMoveSingleLine1LineUp
{
    [textView setSelectedRange:NSMakeRange(192, 0)];
    [myplugin moveLineUp];
    expect(myplugin.currentLineRange.location).to.equal(167);
    expect(myplugin.currentLineRange.length).to.equal(26);
    expect(myplugin.currentSelectedString).to.startWith(@"pod 'Expecta'");
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(11);
    expect(splitted[8]).to.equal(@"pod 'Expecta', '~> 0.2.3'");
    expect(splitted[9]).to.equal(@"pod 'OCMock', '~> 2.2.3'");
}

- (void)testMoveSingleLine2LinesUp
{
    [textView setSelectedRange:NSMakeRange(192, 0)];
    [myplugin moveLineUp];
    expect(myplugin.currentLineRange.location).to.equal(167);
    expect(myplugin.currentLineRange.length).to.equal(26);
    [myplugin moveLineUp];
    expect(myplugin.currentLineRange.location).to.equal(129);
    expect(myplugin.currentSelectedString).to.startWith(@"pod 'Expecta'");
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(11);
    expect(splitted[8]).to.equal(@"target \"XcodeRefactoringPlusTests\" do");
    expect(splitted[9]).to.equal(@"pod 'OCMock', '~> 2.2.3'");
}

- (void)testMoveMultiLine2LinesUp
{
    [textView setSelectedRange:NSMakeRange(167, 30)];
    [myplugin moveLineUp];
    expect(myplugin.currentLineRange.location).to.equal(129);
    expect(myplugin.currentLineRange.length).to.equal(51);
    [myplugin moveLineUp];
    expect(myplugin.currentLineRange.location).to.equal(128);
    expect(myplugin.currentSelectedString).to.startWith(@"pod 'OCMock'");
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(11);
    expect(splitted[6]).to.equal(@"pod 'OCMock', '~> 2.2.3'");
    expect(splitted[7]).to.equal(@"pod 'Expecta', '~> 0.2.3'");
}

- (void)testMoveLastLineDownButNoNewLineAdded
{
    [textView setSelectedRange:NSMakeRange(0, 0)];
    [myplugin moveLineUp];
    expect(myplugin.currentLineRange.location).to.equal(0);
    expect(myplugin.currentLineRange.length).to.equal(67);
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(11);
    expect(splitted[0]).to.equal(@"# Uncomment this line to define a global platform for your project");
}

- (void)testMoveFirstLineUpButNoNewLineAdded
{
    [textView setSelectedRange:NSMakeRange(218, 0)];
    [myplugin moveLineDown];
    expect(myplugin.currentLineRange.location).to.equal(219);
    expect(myplugin.currentLineRange.length).to.equal(3);
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    NSLog(@"%@",splitted);
    expect(splitted).to.haveCountOf(11);
    expect(splitted[10]).to.equal(@"end");
}
@end
