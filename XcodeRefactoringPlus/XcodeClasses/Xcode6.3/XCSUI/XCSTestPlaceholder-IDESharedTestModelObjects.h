//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSTestPlaceholder (IDESharedTestModelObjects) <IDESharedTests_Test>
+ (id)keyPathsForValuesAffectingIDE_SharedTests_TestRuns;
- (id)ide_sharedTests_testedDevice;
@property(readonly, copy, nonatomic) NSArray *ide_sharedTests_testRuns;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_missingBaselineInfo;
@property(readonly, nonatomic) NSImage *ide_sharedTests_statusImage;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_UUID;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_testClassName;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_testName;
- (void)fetchTestsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL ide_sharedTests_passed;
@property(readonly, nonatomic) BOOL ide_sharedTests_fetchesTestRunsLazily;
@property(readonly, copy, nonatomic) NSArray *ide_sharedTests_perfMetrics;
@property(retain) NSArray *fetchedPerfMetrics;
@property(retain) NSNumber *fetchingInProgress;
@property(retain) NSArray *fetchedTests;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end