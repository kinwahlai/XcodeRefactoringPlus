//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXSourceFileEditor : PBXTextFileEditor
{
    NSMutableArray *_ipMarkers;
    NSMutableArray *_breakpointMarkers;
    NSMutableArray *_problemMarkers;
    NSMutableArray *_unresolvedProblemMarkers;
    BOOL _allBPMarkersValid;
    double _previousTextContainerUsedHeight;
    BOOL _docCanHaveBreakpoints;
    BOOL _canCompileFile;
    BOOL _canFixAndContinueFile;
    BOOL _canPreprocessFile;
    BOOL _canDisassembleFile;
    BOOL _waitingForPreprocessNotice;
    BOOL _waitingForDisassemblyNotice;
}

- (void)_checkDataTipEvent:(id)arg1;
- (void)setFileNavigator:(id)arg1;
- (void)setScrollerMarkers;
- (void)setMarkers;
- (void)_recreateProblemMarkers:(id)arg1;
- (void)buildActivityNotification:(id)arg1;
- (void)cleanNotification:(id)arg1;
- (void)_clearproblemMarkers;
- (void)_updateproblemMarkers;
- (void)_updateProblemMarkersAndSet:(BOOL)arg1;
- (BOOL)_addBuildMessageInfo:(id)arg1 useUnresolved:(BOOL)arg2;
- (void)_computeproblemMarkers;
- (void)_updateUnresolvedMarkers;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)disassemblyDidEnd:(id)arg1;
- (void)disassembleCurrentFile:(id)arg1;
- (BOOL)canDisassembleCurrentFile;
- (void)preprocessingDidEnd:(id)arg1;
- (void)preprocessCurrentFile:(id)arg1;
- (BOOL)canPreprocessCurrentFile;
- (void)compileCurrentFile:(id)arg1;
- (BOOL)canCompileCurrentFile;
- (void)startFileRefBuildOperationForEditedFileUsingAction:(id)arg1;
- (BOOL)activeTargetIsNativeAndContainsFileRef:(id)arg1;
- (BOOL)activeTargetIsNativeAndContainsCurrentFile;
- (void)_parseSourceFile:(id)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (void)textView:(id)arg1 layoutManager:(id)arg2 didLayoutGlyphsUpToCharacterIndex:(unsigned long long)arg3;
- (void)rulerView:(id)arg1 handleMouseDown:(id)arg2;
- (double)rulerView:(id)arg1 willAddMarker:(id)arg2 atLocation:(double)arg3;
- (void)rulerView:(id)arg1 didRemoveMarker:(id)arg2;
- (double)rulerView:(id)arg1 willMoveMarker:(id)arg2 toLocation:(double)arg3;
- (void)_projectItemsDidChange:(id)arg1;
- (void)_instructionPointerDidChange:(id)arg1;
- (void)_removeInstructionPointerMarkers:(id)arg1;
- (id)scannerItemNameForLineNumber:(unsigned long long)arg1;
- (void)_addBreakpointAtPoint:(struct CGPoint)arg1;
- (BOOL)_revealBreakpointsInBreakpointsTask:(id)arg1;
- (void)revealInBreakpointsAction:(id)arg1;
- (void)toggleEnableBreakpointMarkerAction:(id)arg1;
- (void)continueToHereAtPoint:(struct CGPoint)arg1;
- (void)continueToHereAction:(id)arg1;
- (void)addAndEditBreakpoint:(id)arg1;
- (void)addTemplateBreakpoint:(id)arg1;
- (void)_addBreakpointTemplate:(id)arg1;
- (void)toggleAddBreakpointMarkerAction:(id)arg1;
- (void)_updateInstructionPointerMarkers;
- (double)_adjustedMarkerLocationForIP:(id)arg1 paragraphRect:(struct CGRect *)arg2;
- (void)_updateInstructionPointerAfterFixAndContinue:(id)arg1;
- (void)_clearInstructionPointerMarkers;
- (void)_highlightInstructionPointers:(BOOL)arg1;
- (void)_highlightLineForInstructionPointerMaker:(id)arg1;
- (void)_unHighlightLineForInstructionPointerMaker:(id)arg1;
- (void)_clearBreakpointMarkers;
- (void)_updateBreakpointMarkersAndSet:(BOOL)arg1;
- (void)_updateBreakpointMarkers;
- (void)_computeBreakpointMarkers;
- (BOOL)validateLocalMenuItem:(id)arg1;
- (BOOL)previousBuildResult;
- (void)previousBuildResult:(id)arg1;
- (BOOL)nextBuildResult;
- (void)nextBuildResult:(id)arg1;
- (void)setNeedsDisplayForCharacterRange:(struct _NSRange)arg1;
- (void)setDocument:(id)arg1;
- (void)updateMarkersRespectingGutterVisibility;
- (void)fileNavigatorDidChangeProjectDocument:(id)arg1;
- (void)replaceFileDocument:(id)arg1;
- (id)buildFileForReference:(id)arg1;
- (id)_sourceFileDocument;
- (void)resetEditorColors:(id)arg1;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)dealloc;
- (id)initWithFileDocument:(id)arg1;

@end