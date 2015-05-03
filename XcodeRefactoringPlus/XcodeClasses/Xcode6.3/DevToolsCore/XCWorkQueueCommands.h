//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol XCWorkQueueCommands <NSObject>
- (XCBuildCommandResultsPostprocessor *)instantiatedCommandResultsPostprocessor;
- (id)instantiatedCommandOutputParserWithLogSectionRecorder:(XCBuildLogSectionRecorder *)arg1;
- (NSString *)descriptionForWorkQueueLog;
- (NSArray *)subprocessCommandLineForProcessing;
- (NSData *)predictiveProcessingValiditySignature;
- (NSString *)predictiveProcessingInputFilePath;
- (NSString *)predictiveProcessingCandidateFilePath;
- (void)setWorkQueueCommandTag:(unsigned long long)arg1;
- (unsigned long long)workQueueCommandTag;
- (void)setSoftError:(BOOL)arg1;
- (BOOL)softError;
- (void)commandInvocationDidEnd:(XCWorkQueueCommandInvocation *)arg1 successfully:(BOOL)arg2;
- (void)commandInvocation:(XCWorkQueueCommandInvocation *)arg1 didEmitBytes:(const char *)arg2 length:(unsigned long long)arg3;
- (void)commandInvocationWillStart:(XCWorkQueueCommandInvocation *)arg1;
- (XCWorkQueueCommandInvocation *)createStartedCommandInvocationInSlot:(unsigned long long)arg1 ofWorkQueueOperation:(XCWorkQueueOperation *)arg2;
- (void)decrementWaitCountsOfDependingNodes;
- (void)incrementWaitCountsOfDependingNodes;
- (void)decrementWaitCount;
- (void)incrementWaitCount;
- (unsigned long long)waitCount;
- (void)rerunCommand;
- (void)didDeactivateInWorkQueue:(XCWorkQueue *)arg1 didCompleteSuccessfully:(BOOL)arg2;
- (void)willActivateInWorkQueue:(XCWorkQueue *)arg1;
- (NSArray *)ruleInfo;
- (unsigned long long)phaseNumber;
- (BOOL)isBlockedOnInputOrOutputFileLocks;
- (BOOL)outputFilesHaveBeenUpdated;
- (BOOL)isReadyForProcessing;
- (void)addCommandIdentToBuildStateStoreDependencyList;
- (void)propagateCachedOutputs;
- (BOOL)shouldPropagateCachedOutputs;
- (BOOL)hasCachedOutputs;
- (unsigned long long)estimatedMemoryUse;
- (void)setEstimatedMemoryUse:(unsigned long long)arg1;
- (XCWorkQueue *)workQueue;
- (void)willBeRemovedFromWorkQueue:(XCWorkQueue *)arg1;
- (void)wasAddedToWorkQueue:(XCWorkQueue *)arg1;
@end