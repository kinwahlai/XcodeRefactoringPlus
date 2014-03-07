//
//  XcodeRefactoringPlusTests.m
//  XcodeRefactoringPlusTests
//
//  Created by developer on 3/6/14.
//  Copyright (c) 2014 KinWah. All rights reserved.
//

#import <XCTest/XCTest.h>
#import <AppKit/AppKit.h>
#import "XcodeRefactoringPlus.h"

#define EXP_SHORTHAND
#import <Expecta.h>

@class DVTSourceTextView;

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
    NSNotification *notification;
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
    notification = [NSNotification notificationWithName:NSTextViewDidChangeSelectionNotification object:textView];
}

- (void)tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testTextSelectionSuccessful
{
    [textView setString:multilines];
    [textView setSelectedRange:NSMakeRange(67, 8)];
    [myplugin selectionDidChange:notification];
    expect(myplugin.currentSelectedString).notTo.beNil();
    expect(myplugin.currentSelectedString).to.equal(@"platform :osx, \"10.8\"\n");
    expect([textView.string componentsSeparatedByString:@"\n"]).to.haveCountOf(11);
}

- (void) testGettingTheCorrectLineRangeForSelectedText {
    [textView setString:multilines];
    [textView setSelectedRange:NSMakeRange(90, 3)];
    [myplugin selectionDidChange:notification];
    expect(myplugin.currentLineRange.location).to.equal(90);
    expect(myplugin.currentLineRange.length).to.equal(33);
}

- (void) testGettingTheCorrectLineRangeForMultiline {
    [textView setString:multilines];
    [textView setSelectedRange:NSMakeRange(67, 25)];
    [myplugin selectionDidChange:notification];
    expect(myplugin.currentLineRange.location).to.equal(67);
    expect(myplugin.currentLineRange.length).to.equal(56);
}

- (void)testDuplicateSingleLineWhereSelectedTextIs;
{
    [textView setString:multilines];
    [textView setSelectedRange:NSMakeRange(67, 8)];
    [myplugin selectionDidChange:notification];
    [myplugin duplicateLine];
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(12);
    expect(splitted[1]).to.equal(@"platform :osx, \"10.8\"");
    expect(splitted[2]).to.equal(@"platform :osx, \"10.8\"");
}

- (void)testDuplicateSingleLineWhereTheCursorIs;
{
    [textView setString:multilines];
    [textView setSelectedRange:NSMakeRange(67, 0)];
    [myplugin selectionDidChange:notification];
    [myplugin duplicateLine];
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(12);
    expect(splitted[1]).to.equal(@"platform :osx, \"10.8\"");
    expect(splitted[2]).to.equal(@"platform :osx, \"10.8\"");
}

- (void)testDuplicate2Lines;
{
    [textView setString:multilines];
    [textView setSelectedRange:NSMakeRange(90, 35)];
    [myplugin selectionDidChange:notification];
    [myplugin duplicateLine];
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(14);
    expect(splitted[3]).to.equal(@"target \"XcodeRefactoringPlus\" do");
    expect(splitted[4]).to.equal(@"");
    expect(splitted[5]).to.equal(@"end");
    expect(splitted[6]).to.equal(@"target \"XcodeRefactoringPlus\" do");
    expect(splitted[7]).to.equal(@"");
    expect(splitted[8]).to.equal(@"end");
}

- (void) testDeleteSingleLine {
    [textView setString:multilines];
    [textView setSelectedRange:NSMakeRange(67, 0)];
    [myplugin selectionDidChange:notification];
    [myplugin deleteLine];
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(10);
    expect([textView.string componentsSeparatedByString:@"\n"]).notTo.contain(@"platform :osx, \"10.8\"");
}

- (void) testDelete2Lines {
    [textView setString:multilines];
    [textView setSelectedRange:NSMakeRange(90, 34)];
    [myplugin selectionDidChange:notification];
    [myplugin deleteLine];
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(9);
    expect([textView.string componentsSeparatedByString:@"\n"]).notTo.contain(@"target \"XcodeRefactoringPlus\" do");
}

- (void)testMove1LineDown
{
    [textView setString:multilines];
    [textView setSelectedRange:NSMakeRange(0, 30)];
    [myplugin selectionDidChange:notification];
    [myplugin moveLineDown];
    expect(myplugin.currentRange.location).to.equal(22);
    expect(myplugin.currentSelectedString).to.startWith(@"# Uncomment");
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(11);
    expect(splitted[0]).to.equal(@"platform :osx, \"10.8\"");
    expect(splitted[1]).to.equal(@"# Uncomment this line to define a global platform for your project");
}

- (void)testMove2LineDown
{
    [textView setString:multilines];
    [textView setSelectedRange:NSMakeRange(167, 0)];
    [myplugin selectionDidChange:notification];
    [myplugin moveLineDown];
    expect(myplugin.currentRange.location).to.equal(193);
    expect(myplugin.currentSelectedString).to.startWith(@"pod 'OCMock'");
    [myplugin moveLineDown];
    expect(myplugin.currentRange.location).to.equal(193);
    expect(myplugin.currentSelectedString).to.startWith(@"endpod 'OCMock'");
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(11);
    expect(splitted[8]).to.equal(@"pod 'Expecta', '~> 0.2.3'");
    expect(splitted[9]).to.equal(@"endpod 'OCMock', '~> 2.2.3'");
}

- (void)testMove1LineUp
{
    [textView setString:multilines];
    [textView setSelectedRange:NSMakeRange(192, 0)];
    [myplugin selectionDidChange:notification];
    [myplugin moveLineUp];
    expect(myplugin.currentRange.location).to.equal(167);
    expect(myplugin.currentSelectedString).to.startWith(@"pod 'Expecta'");
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(11);
    expect(splitted[8]).to.equal(@"pod 'Expecta', '~> 0.2.3'");
    expect(splitted[9]).to.equal(@"pod 'OCMock', '~> 2.2.3'");
}
- (void)testMove2LineUp
{
    [textView setString:multilines];
    [textView setSelectedRange:NSMakeRange(192, 0)];
    [myplugin selectionDidChange:notification];
    [myplugin moveLineUp];
    [myplugin moveLineUp];
    expect(myplugin.currentRange.location).to.equal(129);
    expect(myplugin.currentSelectedString).to.startWith(@"pod 'Expecta'");
    NSArray *splitted = [textView.string componentsSeparatedByString:@"\n"];
    expect(splitted).to.haveCountOf(11);
    expect(splitted[8]).to.equal(@"target \"XcodeRefactoringPlusTests\" do");
    expect(splitted[9]).to.equal(@"pod 'OCMock', '~> 2.2.3'");
}

// moving multiline accoss the editor seems to have problem
// moving up is not reliable, guess it is something to do with the newline thingy

@end
