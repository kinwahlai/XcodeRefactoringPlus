//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _IDESharedTestsTestTableCellView : NSTableCellView <IDETestsInTestableObserver>
{
    IDETest *_jumpToTest;
    NSButton *_jumpButton;
    id <IDESharedTests_Test> _test;
    id <IDESharedTests_TestGroup> _testGroup;
}

@property(retain) id <IDESharedTests_TestGroup> testGroup; // @synthesize testGroup=_testGroup;
@property(retain) id <IDESharedTests_Test> test; // @synthesize test=_test;
@property __weak NSButton *jumpButton; // @synthesize jumpButton=_jumpButton;
- (void).cxx_destruct;
- (void)testsChanged:(id)arg1;
- (void)workspaceReferencedTestablesChanged;
- (void)testablesChanged:(id)arg1;
- (void)jumpToTestSourceCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end