//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSTestPerfMetric (IDESharedTestModelObjects) <IDESharedTests_PerfMetric>
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_baselineIdentifier;
@property(readonly, nonatomic) NSArray *ide_sharedTests_iterations;
@property(readonly, nonatomic) NSNumber *ide_sharedTests_maxPercentRelativeStandardDeviation;
@property(readonly, nonatomic) double ide_sharedTests_maxPercentImprovement;
@property(readonly, nonatomic) NSNumber *ide_sharedTests_maxPercentRegression;
@property(readonly, nonatomic) NSNumber *ide_sharedTests_baseline;
@property(readonly, nonatomic) double ide_sharedTests_rsd;
@property(readonly, nonatomic) double ide_sharedTests_max;
@property(readonly, nonatomic) double ide_sharedTests_min;
@property(readonly, nonatomic) double ide_sharedTests_avg;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_unit;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_perfMetricIdentifier;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end