//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYExperimentResultsGenerator : NSObject
{
    struct unique_ptr<GPUTools::RunningStatistics<unsigned long long>, std::__1::default_delete<GPUTools::RunningStatistics<unsigned long long>>> _frameTimeStatistics;
    DYExperimentOverrideEnable *_experiment;
    DYFunctionPlayer *_functionPlayer;
    unsigned long long _startGlobalTime;
    unsigned long long _frameTimeStart;
    unsigned long long _frameTimeEnd;
    unsigned long long _frameTime;
    unsigned int _prevFileFunctionIndex;
    unsigned int _iteration;
    BOOL _isDone;
}

@property(readonly, nonatomic) BOOL isDone; // @synthesize isDone=_isDone;
@property(nonatomic) __weak DYFunctionPlayer *functionPlayer; // @synthesize functionPlayer=_functionPlayer;
@property(readonly, nonatomic) DYExperimentOverrideEnable *experiment; // @synthesize experiment=_experiment;
@property(readonly, nonatomic) unsigned int prevFileFunctionIndex; // @synthesize prevFileFunctionIndex=_prevFileFunctionIndex;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)terminateExperiment;
- (BOOL)shouldTerminateExperiment;
- (void)onPlatformFunctionEnd;
- (void)onGraphicsFunctionEnd;
- (void)onFrameEnd;
- (void)onFrameStart;
- (void)endIteration;
- (void)beginIteration:(unsigned int)arg1;
- (void)stopTiming;
- (void)startTiming;
- (void)end;
- (void)begin;
- (void)dealloc;
- (id)initWithExperiment:(id)arg1;
- (id)init;

@end