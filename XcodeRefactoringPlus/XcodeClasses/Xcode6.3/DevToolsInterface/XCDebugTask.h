//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol XCDebugTask <PBXTrackableDebugTask>
- (BOOL)isLibgmallocEnabled;
- (BOOL)isDebugStrEnabled;
- (void)debugTaskToggledMenuBreakpoint:(XCMenuBreakpointController *)arg1 toState:(BOOL)arg2;
- (BOOL)isDebugging;
- (void)debugTaskShowHUD;
- (void)debugTaskSetCurrentStopOnDebuggerDebugStrState;
- (void)debugTaskToggleEnableBreakpoints:(BOOL)arg1;
- (void)debugTaskToggleDisassemblyDisplay:(long long)arg1;
- (void)debugTaskClearLogs:(id)arg1;
- (void)debugTaskShowSharedLibraries:(id)arg1;
- (void)debugTaskShowMemoryBrowsers:(id)arg1;
- (void)debugTaskShowGlobalVariables:(id)arg1;
- (void)debugTaskShowExpressions:(id)arg1;
- (void)debugTaskShowConsole:(id)arg1;
- (BOOL)toggleShowTypeColumnIsValid;
- (void)toggleShowTypeColumn:(id)arg1;
- (BOOL)isCustomizedDataDisplayEnabled;
- (void)toggleCustomizedDataDisplayEnabled:(id)arg1;
- (BOOL)debugTaskSyncIsValid;
- (void)debugTaskSync;
- (BOOL)debugTaskUndoToCheckpointIsValid;
- (void)debugTaskUndoToCheckpoint;
- (BOOL)debugTaskNextInstructionIsValid;
- (void)debugTaskNextInstruction;
- (void)debugTaskContinueToCallSymbol:(NSString *)arg1 inFile:(NSString *)arg2 lineNumber:(unsigned long long)arg3;
- (void)debugTaskContinueToSymbol:(NSString *)arg1;
- (void)debugTaskExecUntilToFile:(NSString *)arg1 lineNumber:(unsigned long long)arg2;
- (void)debugTaskContinueToFile:(NSString *)arg1 lineNumber:(unsigned long long)arg2;
- (BOOL)debugTaskStepInstructionIsValid;
- (void)debugTaskStepInstruction;
- (BOOL)debugTaskRestartIsValid;
- (void)debugTaskRestart;
- (BOOL)debugTaskPreviousThreadIsValid;
- (void)debugTaskPreviousThread;
- (BOOL)debugTaskNextThreadIsValid;
- (void)debugTaskNextThread;
- (BOOL)debugTaskStepOutIsValid;
- (void)debugTaskStepOut;
- (BOOL)debugTaskStepIntoIsValid;
- (void)debugTaskStepInto;
- (BOOL)debugTaskStepOverIsValid;
- (void)debugTaskStepOver;
- (BOOL)debugTaskContinueIsValid;
- (void)debugTaskContinue;
- (BOOL)debugTaskPauseIsValid;
- (void)debugTaskPause;
@end