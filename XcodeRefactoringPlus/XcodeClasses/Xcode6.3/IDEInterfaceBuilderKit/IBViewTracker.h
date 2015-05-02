//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBViewTracker : NSObject
{
    NSEvent *currentResizingEvent;
    long long initialKnob;
    BOOL trackingIsHorzFlipped;
    BOOL trackingIsVertFlipped;
    BOOL showsGuides;
    BOOL snapsToGuides;
    BOOL growsFromCenter;
    BOOL showsTrackingKnob;
    NSArray *layoutManagers;
    IBViewEditorCanvasFrameController *frameController;
    NSView *trackedView;
    id measurementTarget;
    CDUnknownBlockType willTrackHandler;
    CDUnknownBlockType didTrackHandler;
    NSNumber *forceBoundsIndicatorValue;
    IBAutolayoutFrameDecider *frameDecider;
}

+ (void)setAutolayoutLiveResizingStrategyMask:(unsigned long long)arg1;
+ (unsigned long long)autolayoutLiveResizingStrategyMask;
+ (void)setAutolayoutLiveResizingEnableStrategyMask:(BOOL)arg1;
+ (BOOL)autolayoutLiveResizingEnableStrategyMask;
+ (void)setAppliesAutoResizingRulesWhileResizing:(BOOL)arg1;
+ (BOOL)appliesAutoResizingRulesWhileResizing;
+ (void)initialize;
@property(readonly) IBAutolayoutFrameDecider *frameDecider; // @synthesize frameDecider;
@property(copy) NSNumber *forceBoundsIndicatorValue; // @synthesize forceBoundsIndicatorValue;
@property BOOL showsTrackingKnob; // @synthesize showsTrackingKnob;
@property(copy) CDUnknownBlockType didTrackHandler; // @synthesize didTrackHandler;
@property(copy) CDUnknownBlockType willTrackHandler; // @synthesize willTrackHandler;
@property BOOL growsFromCenter; // @synthesize growsFromCenter;
@property BOOL snapsToGuides; // @synthesize snapsToGuides;
@property BOOL showsGuides; // @synthesize showsGuides;
@property(readonly) id measurementTarget; // @synthesize measurementTarget;
@property(readonly) NSView *trackedView; // @synthesize trackedView;
@property(readonly) IBViewEditorCanvasFrameController *frameController; // @synthesize frameController;
@property(copy) NSArray *layoutManagers; // @synthesize layoutManagers;
- (void).cxx_destruct;
- (void)trackWithEvent:(id)arg1;
- (BOOL)needsFrameDeciderForView:(id)arg1 withStrategy:(CDStruct_7ddbbeae)arg2;
- (BOOL)doesConstraint:(id)arg1 affectSiblingOrAncestorOfView:(id)arg2;
- (BOOL)doesConstraint:(id)arg1 affectDescendantsOfView:(id)arg2;
- (void)propagateLayoutGuideMatchesToTrackedView:(id)arg1 layoutManager:(id)arg2;
- (void)clearGuides;
- (void)displayGuides;
- (id)layoutFrameAfterApplyingLayoutGuides:(struct CGRect)arg1;
- (void)placeSubviewForAutolayoutDocumentApplyingConstraintsInLayoutFrame:(struct CGRect)arg1;
- (void)placeSubviewInFrame:(struct CGRect)arg1 event:(id)arg2;
- (BOOL)shouldConsiderSelectionEdge:(unsigned long long)arg1 toSiblingEdge:(unsigned long long)arg2 guideFromSelection:(id)arg3 toView:(id)arg4 coordinateSpaceView:(id)arg5;
- (BOOL)isEdge:(unsigned long long)arg1 ofAncestor:(id)arg2 fixedDuringResizeOfSubview:(id)arg3 fromKnob:(long long)arg4;
- (BOOL)isEdge:(unsigned long long)arg1 ofSubview:(id)arg2 fixedInPositionOnWindowDuringResizeFromKnob:(long long)arg3;
- (BOOL)isDistanceFromSubviewEdge:(unsigned long long)arg1 ofSubview:(id)arg2 toSameEdgeOfSuperviewChangingOneToOneWithKnob:(long long)arg3;
- (struct CGRect)snapToGuidedLayoutFrame:(struct CGRect)arg1 originalLayoutFrame:(struct CGRect)arg2;
- (void)resumeAutoResizingSubviews:(id)arg1;
- (id)stopAutoResizingSubviews;
- (BOOL)shouldPinEditorCanvasFrameForResizing;
- (BOOL)shouldAutoResizeSubviewsGivenEvent:(id)arg1;
- (BOOL)shouldApplyAutoResizingRulesWhileResizing;
- (BOOL)shouldSizeUsingFrameDeciderForEvent:(id)arg1;
- (id)generateFrameDeciderForPlacingSubviewInFrameWithStrategy:(CDStruct_7ddbbeae)arg1;
- (CDStruct_7ddbbeae)frameDeciderStrategyFromEvent:(id)arg1;
- (void)pushTrackingIndicators;
- (long long)effectiveKnobInSpaceOfView:(id)arg1;
- (long long)initialKnobInSpaceOfView:(id)arg1;
- (id)canvasView;
- (id)editorCanvasFrame;
- (id)overlayDrawingHandler;
- (id)overlayView;
@property(readonly) IBDocument *document;
- (id)initWithTrackedView:(id)arg1 measurementTarget:(id)arg2 frameController:(id)arg3 knob:(long long)arg4;

@end