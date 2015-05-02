//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEPlaygroundExecutionSession : DVTOperation
{
    struct SBDebugger _debugger;
    struct SBTarget _target;
    struct SBProcess _process;
    struct SBBroadcaster _broadcaster;
    BOOL _executingPlaygroundSource;
    unsigned long long _executingPlaygroundSourceGeneration;
    BOOL _didCancelExpr;
    BOOL _askedToTerminate;
    BOOL _didSendAsyncInterrupt;
    BOOL _playgroundSourceWasExecuted;
    BOOL _shouldContinuePastExecutionBreakpoint;
    BOOL _hasPendingStopFromFromExprFailure;
    BOOL _shouldWaitToExecutePlaygroundSource;
    BOOL _shouldExecutePlaygroundSource;
    BOOL _hasPendingStopFromExecutePlaygroundBreakpoint;
    BOOL _hasPendingStopFromAttaching;
    BOOL _hasPendingStopFromExecutionWillFinishBreakpoint;
    BOOL _didCallPlaygroundExecutionWillFinishBlock;
    BOOL _playgroundListenerDidConnect;
    CDUnknownBlockType _pendingUndesignationCallbackBlock;
    NSObject<OS_dispatch_queue> *_pendingUndesignationCallbackQueue;
    DVTDispatchLock *_lifeCycleLock;
    NSObject<OS_dispatch_queue> *_playgroundDataHandlerQueue;
    DVTPlaygroundCommunicationListener *_playgroundListener;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_sessionThreadID;
    DVTNotificationToken *_consoleOutputNotificationToken;
    DVTNotificationToken *_consoleInputNotificationToken;
    DVTObservingToken *_consoleAdaptorFinishedObservationToken;
    BOOL _ignoreConsoleAdaptorNotifications;
    DVTObservingToken *_canFinishObservationToken;
    DVTPerformanceMetric *_executionPerformanceMetric;
    NSMutableArray *_pendingPlaygroundResults;
    NSMutableArray *_playgroundErrors;
    CDUnknownBlockType _launcher;
    BOOL _playgroundListenerConnectionIsOpen;
    BOOL _playgroundListenerSerializationInProgress;
    BOOL _consoleAdaptorIsOpen;
    int _internalState;
    unsigned long long _state;
    IDEPlaygroundPreparationParameters *_preparationParameters;
    NSError *_serializationError;
    DVTFilePath *_serializedPlaygroundDataPath;
    IDEConsoleAdaptor *_targetConsoleAdaptor;
    DVTFilePath *_inProgressSerializationFilePath;
    IDEPlaygroundExecutionParameters *_executionParameters;
    CDUnknownBlockType _reportConsoleItemBlock;
    CDUnknownBlockType _executionWillFinishBlock;
    CDUnknownBlockType _handlePlaygroundDataBlock;
    struct SBThread _executionBreakpointThread;
}

+ (id)keyPathsForValuesAffectingCanFinishExecution;
+ (id)playgroundExecutionPerformanceLogAspect;
+ (id)playgroundExecutionLogAspect;
+ (void)initialize;
@property(copy) CDUnknownBlockType handlePlaygroundDataBlock; // @synthesize handlePlaygroundDataBlock=_handlePlaygroundDataBlock;
@property(copy) CDUnknownBlockType executionWillFinishBlock; // @synthesize executionWillFinishBlock=_executionWillFinishBlock;
@property(copy) CDUnknownBlockType reportConsoleItemBlock; // @synthesize reportConsoleItemBlock=_reportConsoleItemBlock;
@property(retain) IDEPlaygroundExecutionParameters *executionParameters; // @synthesize executionParameters=_executionParameters;
@property(readonly) DVTFilePath *inProgressSerializationFilePath; // @synthesize inProgressSerializationFilePath=_inProgressSerializationFilePath;
@property(nonatomic) struct SBThread *executionBreakpointThread; // @synthesize executionBreakpointThread=_executionBreakpointThread;
@property BOOL consoleAdaptorIsOpen; // @synthesize consoleAdaptorIsOpen=_consoleAdaptorIsOpen;
@property BOOL playgroundListenerSerializationInProgress; // @synthesize playgroundListenerSerializationInProgress=_playgroundListenerSerializationInProgress;
@property BOOL playgroundListenerConnectionIsOpen; // @synthesize playgroundListenerConnectionIsOpen=_playgroundListenerConnectionIsOpen;
@property(retain) IDEConsoleAdaptor *targetConsoleAdaptor; // @synthesize targetConsoleAdaptor=_targetConsoleAdaptor;
@property int internalState; // @synthesize internalState=_internalState;
@property(retain) DVTFilePath *serializedPlaygroundDataPath; // @synthesize serializedPlaygroundDataPath=_serializedPlaygroundDataPath;
@property(retain) NSError *serializationError; // @synthesize serializationError=_serializationError;
@property(readonly) IDEPlaygroundPreparationParameters *preparationParameters; // @synthesize preparationParameters=_preparationParameters;
@property unsigned long long state; // @synthesize state=_state;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)destroyDebugger;
- (void)_stopListeningForPlaygroundInput;
- (void)_interruptExecutingPlaygroundSource;
- (void)cancel;
- (BOOL)canFinishExecution;
- (void)undesignateSessionWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)designateSessionForExecutionParameters:(id)arg1;
- (BOOL)playgroundExecutionWillFinishBreakpointHitOnThread:(struct SBThread *)arg1 location:(struct SBBreakpointLocation *)arg2;
- (void)_executePlaygroundSource;
- (BOOL)executePlaygroundBreakpointHitOnThread:(struct SBThread *)arg1 location:(struct SBBreakpointLocation *)arg2;
- (_Bool)shouldCancelExpressionEvaluationForPhase:(int)arg1;
- (void)_terminateProcess;
- (BOOL)handleInternalSessionEvent:(unsigned int)arg1;
- (BOOL)handleProcessEvent:(unsigned int)arg1;
- (void *)listenForEvents;
- (void)main;
- (unsigned long long)attachToProcessWithPID:(int)arg1 target:(struct SBTarget)arg2 process:(struct SBProcess *)arg3 withError:(id *)arg4;
- (unsigned long long)launchProcessAtPath:(id)arg1 target:(struct SBTarget)arg2 process:(struct SBProcess *)arg3 socketPath:(id)arg4 terminal:(id)arg5 withError:(id *)arg6;
- (id)_setupConsoleAdaptor;
- (void)_hookUpRealDataHandlingBlocks;
- (void)_flushPendingDataFromPreparation;
- (void)_setupPreparationDataHandlingBlocks;
- (void)_handleError:(id)arg1;
- (id)_generateSerializationFilePathWithError:(id *)arg1;
- (id)initWithPreparationParameters:(id)arg1 outOfBandLauncher:(CDUnknownBlockType)arg2;

@end