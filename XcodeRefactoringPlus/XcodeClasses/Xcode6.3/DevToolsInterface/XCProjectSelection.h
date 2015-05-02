//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCProjectSelection : XCSelection
{
    PBXProjectDocument *_projectDocumentNotRetained;
    XCCleanAlert *_cleanAlert;
    XCRenameProjectController *_renameController;
    BOOL _runOrDebugLaunchActionSet;
    long long _lastLaunchAction;
}

+ (id)buildFailureSound;
+ (id)buildSuccessSound;
+ (void)clearSelection:(id)arg1;
+ (void)postSelection:(id)arg1;
- (int)validateMenuItem_convertToObjC2:(id)arg1;
- (void)convertToObjC2:(id)arg1;
- (int)validateToolbarItem_refactorSelection:(id)arg1;
- (void)refactorSelection:(id)arg1;
- (void)_launchSessionFailure:(id)arg1;
- (void)_cleanAllConfirmSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_cleanActiveConfirmSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)_validateActiveExecutable;
- (BOOL)_hasBreakpointsForProject:(id)arg1;
- (void)stopDebugAndRunSessions;
- (void)runActiveExecutableWithExternalProgramConfigID:(id)arg1;
- (void)runExecutable:(id)arg1 withExternalProgramConfigID:(id)arg2;
- (void)buildOperationDidStop:(id)arg1;
- (void)buildOperationDidReportStatus:(id)arg1;
- (void)buildOperationWillStart:(id)arg1;
- (void)buildOperationWasPended:(id)arg1;
- (void)runAlertForUnlaunchableExecutableAtPath:(id)arg1 inWindow:(id)arg2;
- (void)startActiveExecutable;
- (void)startExecutable:(id)arg1;
- (void)buildFileReferences:(id)arg1 inTarget:(id)arg2 configurationName:(id)arg3 buildStyle:(id)arg4 withAction:(id)arg5 activeArchitecture:(id)arg6 overridingBuildSettings:(id)arg7;
- (id)buildTargets:(id)arg1 andDependencies:(BOOL)arg2 withAction:(id)arg3 usingBuildConfiguration:(id)arg4 activeArchitecture:(id)arg5 overridingBuildSettings:(id)arg6 notifyingObject:(id)arg7;
- (void)buildTargets:(id)arg1 withAction:(id)arg2 overridingBuildSettings:(id)arg3;
- (void)buildTargets:(id)arg1 withAction:(id)arg2;
- (void)cleanAllTargetsWithoutAsking;
- (void)cleanAllTargetsForIndexRebuilding;
- (int)validateMenuItem_toggleShowTypeColumn:(id)arg1;
- (void)toggleShowTypeColumn:(id)arg1;
- (int)validateMenuItem_toggleCustomizedDataDisplayEnabled:(id)arg1;
- (void)toggleCustomizedDataDisplayEnabled:(id)arg1;
- (int)validateMenuItem_debugTaskToggleLibgmalloc:(id)arg1;
- (void)debugTaskToggleLibgmalloc:(id)arg1;
- (int)validateMenuItem_debugTaskToggleBreakOnDebugStr:(id)arg1;
- (int)validateMenuItem_debugTaskToggleEnableBreakpoints:(id)arg1;
- (void)debugTaskToggleEnableBreakpoints:(id)arg1;
- (void)debugTaskToggleBreakOnDebugStr:(id)arg1;
- (void)debugTaskToggleStopOnObjcExceptionThrow:(id)arg1;
- (int)validateMenuItem_debugTaskToggleStopOnObjcExceptionThrow:(id)arg1;
- (int)validateMenuItem_debugTaskTogglePowerTips:(id)arg1;
- (void)debugTaskTogglePowerTips:(id)arg1;
- (void)debuggerSwitchLayout:(id)arg1;
- (int)validateMenuItem_debuggerSwitchLayout:(id)arg1;
- (int)validateMenuItem_debugTaskToggleDisassemblyDisplay:(id)arg1;
- (void)debugTaskToggleDisassemblyDisplay:(id)arg1;
- (int)validateMenuItem_debugTaskClearLogs:(id)arg1;
- (void)debugTaskClearLogs:(id)arg1;
- (int)validateMenuItem_debugTaskShowExpressions:(id)arg1;
- (void)debugTaskShowExpressions:(id)arg1;
- (int)validateMenuItem_debugTaskShowConsole:(id)arg1;
- (void)debugTaskShowConsole:(id)arg1;
- (int)validateMenuItem_debugTaskShowSharedLibraries:(id)arg1;
- (void)debugTaskShowSharedLibraries:(id)arg1;
- (int)validWhenNotDebugging;
- (int)validWhenLaunched;
- (int)validateMenuItem_debugTaskSync:(id)arg1;
- (void)debugTaskSync:(id)arg1;
- (int)validateMenuItem_debugTaskNextInstruction:(id)arg1;
- (void)debugTaskNextInstruction:(id)arg1;
- (int)validateMenuItem_debugTaskShowGlobalVariables:(id)arg1;
- (void)debugTaskShowGlobalVariables:(id)arg1;
- (int)validateMenuItem_debugTaskShowHUD:(id)arg1;
- (void)debugTaskShowHUD:(id)arg1;
- (int)validateMenuItem_debugTaskShowMemoryBrowsers:(id)arg1;
- (void)debugTaskShowMemoryBrowsers:(id)arg1;
- (int)validateMenuItem_debugTaskUndoToCheckpoint:(id)arg1;
- (void)debugTaskUndoToCheckpoint:(id)arg1;
- (int)validateMenuItem_debugTaskPreviousThread:(id)arg1;
- (void)debugTaskPreviousThread:(id)arg1;
- (int)validateMenuItem_debugTaskNextThread:(id)arg1;
- (void)debugTaskNextThread:(id)arg1;
- (int)validateMenuItem_debugTaskStepOverInstruction:(id)arg1;
- (void)debugTaskStepOverInstruction:(id)arg1;
- (int)validateMenuItem_debugTaskStepInstruction:(id)arg1;
- (void)debugTaskStepInstruction:(id)arg1;
- (int)validateMenuItem_debugTaskRestart:(id)arg1;
- (void)debugTaskRestart:(id)arg1;
- (int)validateMenuItem_debugTaskStepOut:(id)arg1;
- (void)debugTaskStepOut:(id)arg1;
- (int)validateMenuItem_debugTaskStepInto:(id)arg1;
- (void)debugTaskStepInto:(id)arg1;
- (int)validateMenuItem_debugTaskStepOver:(id)arg1;
- (void)debugTaskStepOver:(id)arg1;
- (int)validateMenuItem_debugTaskContinue:(id)arg1;
- (void)debugTaskContinue:(id)arg1;
- (void)debugTaskPause:(id)arg1;
- (int)validateToolbarItem_debugTaskPause:(id)arg1;
- (int)validateMenuItem_debugTaskPause:(id)arg1;
- (int)validateMenuItem_launchInstruments:(id)arg1;
- (void)launchInstruments:(id)arg1;
- (void)_launchExecutableWithTemplate:(id)arg1;
- (void)_writePlist:(id)arg1 ToFile:(id)arg2;
- (int)validateMenuItem_launchForUIIndexing:(id)arg1;
- (void)launchForUIIndexing:(id)arg1;
- (int)validateMenuItem_launchShark:(id)arg1;
- (void)launchShark:(id)arg1;
- (BOOL)_launchSupportedForPerformanceToolConfigID:(id)arg1;
- (void)_classBrowserOpenNewClassBrowser:(id)arg1;
- (void)_classBrowserOptionsButtonAction:(id)arg1;
- (void)_classBrowserOptionsSetsPopUpButtonAction:(id)arg1;
- (void)previousDetail:(id)arg1;
- (void)nextDetail:(id)arg1;
- (int)validateMenuItem_previousBuildResult:(id)arg1;
- (void)previousBuildResult:(id)arg1;
- (int)validateMenuItem_nextBuildResult:(id)arg1;
- (void)nextBuildResult:(id)arg1;
- (void)showAllFilesSmartGroup:(id)arg1;
- (void)showExecutableSmartGroup:(id)arg1;
- (void)showTargetSmartGroup:(id)arg1;
- (void)showSymbolsSmartGroup:(id)arg1;
- (void)showSCMSmartGroup:(id)arg1;
- (void)showFindSmartGroup:(id)arg1;
- (void)showBookmarksSmartGroup:(id)arg1;
- (int)validateMenuItem_clearBookmarks:(id)arg1;
- (void)clearBookmarks:(id)arg1;
- (int)validateMenuItem_clearVisibleLogs:(id)arg1;
- (void)clearVisibleLogs:(id)arg1;
- (int)validateMenuItem_nextFile:(id)arg1;
- (void)nextFile:(id)arg1;
- (int)validateMenuItem_previousFile:(id)arg1;
- (void)previousFile:(id)arg1;
- (int)validateMenuItem_nextBookmark:(id)arg1;
- (void)nextBookmark:(id)arg1;
- (int)validateMenuItem_previousBookmark:(id)arg1;
- (void)previousBookmark:(id)arg1;
- (int)validateMenuItem_goOffline:(id)arg1;
- (void)goOffline:(id)arg1;
- (int)validateMenuItem_goOnline:(id)arg1;
- (void)goOnline:(id)arg1;
- (void)configureSCM:(id)arg1;
- (int)validateMenuItem_startAPIDocFind:(id)arg1;
- (void)startAPIDocFind:(id)arg1;
- (int)validateMenuItem_showResearchAssistantInTextView:(id)arg1;
- (void)showResearchAssistantInTextView:(id)arg1;
- (int)validateMenuItem_startFullTextDocFind:(id)arg1;
- (void)startFullTextDocFind:(id)arg1;
- (int)validateMenuItem_searchLibraryForString:(id)arg1;
- (void)searchLibraryForString:(id)arg1;
- (BOOL)_textIsSelected;
- (int)validateToolbarItem_showBinderWindow:(id)arg1;
- (void)showBinderWindow:(id)arg1;
- (int)validateMenuItem_showWindowBar:(id)arg1;
- (void)showBreakpoints:(id)arg1;
- (void)showResearchAssistant:(id)arg1;
- (void)showDocumentationWindow:(id)arg1;
- (void)showDetail:(id)arg1;
- (void)showWindowBar:(id)arg1;
- (void)showRunLog:(id)arg1;
- (void)showConsole:(id)arg1;
- (void)showDebugger:(id)arg1;
- (void)showClassBrowser:(id)arg1;
- (void)makeSnapshotFromMainMenu:(id)arg1;
- (void)makeSnapshot:(id)arg1;
- (void)showSnapshots:(id)arg1;
- (void)showSCM:(id)arg1;
- (void)showBuildResults:(id)arg1;
- (void)showProject:(id)arg1;
- (int)validateMenuItem_getInfo:(id)arg1;
- (void)getInfo:(id)arg1;
- (void)showInspector:(id)arg1;
- (BOOL)_setSearchStringForFind;
- (int)validateMenuItem_startRegexFind:(id)arg1;
- (void)startRegexFind:(id)arg1;
- (int)validateMenuItem_startTextFind:(id)arg1;
- (void)startTextFind:(id)arg1;
- (void)_addCPPThrowCatchBreakpointSheetDidEndWithReturnCode:(long long)arg1 string:(id)arg2 contextInfo:(void *)arg3;
- (void)addCPPThrowCatchBreakpoint:(id)arg1;
- (void)_addSymbolicBreakpointSheetDidEndWithReturnCode:(long long)arg1 string:(id)arg2 contextInfo:(void *)arg3;
- (void)addSymbolicBreakpoint:(id)arg1;
- (int)validateMenuItem_addDebugExpression:(id)arg1;
- (void)addDebugExpression:(id)arg1;
- (int)validateMenuItem_showFindTab:(id)arg1;
- (void)showFindTab:(id)arg1;
- (void)showAnimationViewer:(id)arg1;
- (int)validateMenuItem_stopGoSession:(id)arg1;
- (void)stopGoSession:(id)arg1;
- (int)validateMenuItem_stopDebugSession:(id)arg1;
- (void)stopDebugSession:(id)arg1;
- (int)validateMenuItem_stopRunSession:(id)arg1;
- (void)stopRunSession:(id)arg1;
- (int)validateMenuItem_toggleGoBreakpointsOn:(id)arg1;
- (void)toggleGoBreakpointsOn:(id)arg1;
- (int)validateToolbarItem_toggleGoToolbar:(id)arg1;
- (int)validateToolbarItem_stopGoSession:(id)arg1;
- (void)_validateToolbarItem_toggleGoToolbar:(id)arg1;
- (int)validateMenuItem_toggleGo:(id)arg1;
- (int)validateToolbarItem_debugTaskAttachActiveExecutable:(id)arg1;
- (void)debugTaskAttachActiveExecutable:(id)arg1;
- (int)validateMenuItem_debugTaskAttach:(id)arg1;
- (void)debugTaskAttach:(id)arg1;
- (void)debugTaskAttachPID:(id)arg1;
- (void)toggleGo:(id)arg1;
- (void)toggleGoToolbar:(id)arg1;
- (int)validateMenuItem_toggleGoBreakpointsOff:(id)arg1;
- (void)toggleGoBreakpointsOff:(id)arg1;
- (int)validateMenuItem_stopCurrentBuild:(id)arg1;
- (void)stopCurrentBuild:(id)arg1;
- (int)validateMenuItem_cleanAllTargetsBuild:(id)arg1;
- (void)cleanAllTargetsBuild:(id)arg1;
- (int)validateMenuItem_cleanBuild:(id)arg1;
- (void)cleanBuild:(id)arg1;
- (void)cleanTargets:(id)arg1;
- (int)validateToolbarItem_buildAndGoToolbar:(id)arg1;
- (void)buildAndGoToolbar:(id)arg1;
- (int)validateMenuItem_buildAndGoBreakpointsOff:(id)arg1;
- (void)buildAndGoBreakpointsOff:(id)arg1;
- (int)validateMenuItem_buildAndGoBreakpointsOn:(id)arg1;
- (void)buildAndGoBreakpointsOn:(id)arg1;
- (void)buildAndDebugTargets:(id)arg1;
- (int)validateMenuItem_buildAndGo:(id)arg1;
- (void)buildAndGo:(id)arg1;
- (void)buildAndGoTargets:(id)arg1 withPostBuildAction:(long long)arg2;
- (int)validateMenuItem_buildAndArchive:(id)arg1;
- (void)buildAndArchive:(id)arg1;
- (int)validateMenuItem_buildAndAnalyze:(id)arg1;
- (void)buildAndAnalyze:(id)arg1;
- (int)validateMenuItem_toggleBuild:(id)arg1;
- (void)toggleBuild:(id)arg1;
- (id)_debugTask;
- (void)closeProject:(id)arg1;
- (int)validateMenuItem_toggleDockableViewBorders:(id)arg1;
- (void)toggleDockableViewBorders:(id)arg1;
- (int)validateMenuItem_editActiveExecutable:(id)arg1;
- (void)editActiveExecutable:(id)arg1;
- (int)validateMenuItem_editActiveTarget:(id)arg1;
- (void)editActiveTarget:(id)arg1;
- (int)validateMenuItem_renameProject:(id)arg1;
- (void)renameProject:(id)arg1;
- (void)_renameProjectSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)editProject:(id)arg1;
- (id)project;
- (id)projectDocument;
- (void)_projectWillClose:(id)arg1;
- (id)initWithProjectDocument:(id)arg1;

@end