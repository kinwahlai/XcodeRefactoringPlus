//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSIntegration : XCSObject
{
    BOOL _running;
    struct NSArray *_devices;
    NSArray *_perfMetricNames;
    NSDictionary *_testHierarchy;
    NSArray *_perfMetricKeyPaths;
    NSMutableArray *_internalTargets;
}

+ (id)sortIntegrations:(id)arg1 newestFirst:(BOOL)arg2;
+ (id)integrationWithBot:(id)arg1 shouldClean:(BOOL)arg2 devices:(struct NSArray *)arg3 error:(id *)arg4;
+ (id)integrationWithBot:(id)arg1 shouldClean:(BOOL)arg2 error:(id *)arg3;
+ (id)integrationWithBot:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSMutableArray *internalTargets; // @synthesize internalTargets=_internalTargets;
@property(retain, nonatomic) NSArray *perfMetricKeyPaths; // @synthesize perfMetricKeyPaths=_perfMetricKeyPaths;
@property(retain, nonatomic) NSDictionary *testHierarchy; // @synthesize testHierarchy=_testHierarchy;
@property(retain, nonatomic) NSArray *perfMetricNames; // @synthesize perfMetricNames=_perfMetricNames;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
- (void).cxx_destruct;
- (id)triggersToExecuteForPhase:(unsigned long long)arg1;
- (BOOL)_hasTestWithKeyPathPerfMetrics:(id)arg1;
- (id)_testedDeviceWithIdentifier:(id)arg1;
- (void)_instantiateTestClassFamily;
- (BOOL)_validateWithValue:(id)arg1 forProperty:(id)arg2 withDevice:(id)arg3 atKeyPath:(id)arg4 error:(id *)arg5;
- (BOOL)_validateIntegrationWithBot:(id)arg1 testedDevices:(struct NSArray *)arg2 number:(id)arg3 queuedDate:(id)arg4 startedTime:(id)arg5 endedTime:(id)arg6 currentStep:(long long)arg7 result:(long long)arg8 revisionBlueprint:(id)arg9 tags:(id)arg10 testHierarchy:(id)arg11 perfMetricNames:(id)arg12 perfMetricKeyPaths:(id)arg13 anID:(id)arg14 aTinyID:(id)arg15 docType:(id)arg16 error:(id *)arg17;
- (id)patchRepresentation;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initIntegrationWithBot:(id)arg1 shouldClean:(BOOL)arg2 devices:(struct NSArray *)arg3 number:(id)arg4 queuedDate:(id)arg5 startedTime:(id)arg6 endedTime:(id)arg7 currentStep:(long long)arg8 result:(long long)arg9 successStreak:(unsigned long long)arg10 buildResultSummary:(id)arg11 revisionBlueprint:(id)arg12 assets:(id)arg13 assetsPruned:(BOOL)arg14 tags:(id)arg15 testHierarchy:(id)arg16 perfMetricNames:(id)arg17 perfMetricKeyPaths:(id)arg18 anID:(id)arg19 aRev:(id)arg20 aTinyID:(id)arg21 docType:(id)arg22 error:(id *)arg23;
@property(readonly, nonatomic) NSURL *productInstallationURL;
- (BOOL)isFlagged;
@property(nonatomic) NSSet *tags; // @dynamic tags;
- (long long)statusForDeviceIdentifier:(id)arg1;
- (void)setDeviceFilter:(id)arg1;
@property(readonly, nonatomic) NSArray *targets;

// Remaining properties
@property(nonatomic) XCSIntegrationAssets *assets; // @dynamic assets;
@property(nonatomic) BOOL assetsPruned; // @dynamic assetsPruned;
@property(nonatomic) XCSBot *bot; // @dynamic bot;
@property(nonatomic) XCSBuildResultSummary *buildResultSummary; // @dynamic buildResultSummary;
@property(nonatomic) long long currentStep; // @dynamic currentStep;
@property(nonatomic) NSDate *endedTime; // @dynamic endedTime;
@property(nonatomic) unsigned long long number; // @dynamic number;
@property(nonatomic) NSDate *queuedDate; // @dynamic queuedDate;
@property(nonatomic) long long result; // @dynamic result;
@property(nonatomic) XCSBotSCMBlueprint *revisionBlueprint; // @dynamic revisionBlueprint;
@property(nonatomic) BOOL shouldClean; // @dynamic shouldClean;
@property(nonatomic) NSDate *startedTime; // @dynamic startedTime;
@property(nonatomic) unsigned long long successStreak; // @dynamic successStreak;

@end