//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSTestResult : NSObject
{
    BOOL passed;
    NSString *keyPath;
    NSDate *date;
    double startTime;
    double endTime;
    NSArray *failureSummaries;
    XCSDevice *_testedDevice;
    XCSIntegrationTestResult *_integrationResult;
    NSMutableArray *_perfMetrics;
}

+ (BOOL)_validateWithIntegrationTestResult:(id)arg1;
+ (id)testResultWithIntegrationTestResult:(id)arg1 device:(id)arg2 keyPath:(id)arg3 date:(id)arg4 startTime:(double)arg5 endTime:(double)arg6 passed:(BOOL)arg7 failureSummaries:(id)arg8;
@property(retain, nonatomic) NSMutableArray *perfMetrics; // @synthesize perfMetrics=_perfMetrics;
@property(nonatomic) __weak XCSIntegrationTestResult *integrationResult; // @synthesize integrationResult=_integrationResult;
@property(retain, nonatomic) XCSDevice *testedDevice; // @synthesize testedDevice=_testedDevice;
@property(retain, nonatomic) NSArray *failureSummaries; // @synthesize failureSummaries;
@property(nonatomic) BOOL passed; // @synthesize passed;
@property(nonatomic) double endTime; // @synthesize endTime;
@property(nonatomic) double startTime; // @synthesize startTime;
@property(retain, nonatomic) NSDate *date; // @synthesize date;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath;
- (void).cxx_destruct;
- (BOOL)_validateWithName:(id)arg1 type:(unsigned long long)arg2 unit:(id)arg3;
- (BOOL)_validateWithDevice:(id)arg1 keyPath:(id)arg2 date:(id)arg3 startTime:(double)arg4 endTime:(double)arg5 passed:(BOOL)arg6 failureSummaries:(id)arg7;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithDevice:(id)arg1 keyPath:(id)arg2 date:(id)arg3 startTime:(double)arg4 endTime:(double)arg5 passed:(BOOL)arg6 failureSummaries:(id)arg7;
- (BOOL)saveWithError:(id *)arg1;
- (id)perfMetricResultWithName:(id)arg1 identifier:(id)arg2 type:(unsigned long long)arg3 unit:(id)arg4 iterations:(id)arg5 baseline:(id)arg6 maxPercentRegression:(double)arg7 maxPercentRelativeStandardDeviation:(double)arg8 hasPassed:(BOOL)arg9;

@end