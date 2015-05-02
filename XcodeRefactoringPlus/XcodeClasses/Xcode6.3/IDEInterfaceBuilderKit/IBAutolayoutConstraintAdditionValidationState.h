//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBAutolayoutConstraintAdditionValidationState : NSObject
{
    IBMutableIdentityDictionary *_arbitrationUnitCacheByObject;
    BOOL _canAddExplicitHeightConstraints;
    BOOL _canAddExplicitWidthConstraints;
    BOOL _canAddHorizontalSpacingConstraint;
    BOOL _canAddVerticalSpacingConstraint;
    BOOL _canAddLeadingToSuperviewSpacingConstraints;
    BOOL _canAddTrailingToSuperviewSpacingConstraints;
    BOOL _canAddTopToSuperviewSpacingConstraints;
    BOOL _canAddBottomToSuperviewSpacingConstraints;
    BOOL _canAddEqualHeightsConstraint;
    BOOL _canAddEqualWidthsConstraint;
    BOOL _canAddAspectRatioConstraints;
    BOOL _canAddLeadingToNearestNeighborSpacingConstraints;
    BOOL _canAddTrailingToNearestNeighborSpacingConstraints;
    BOOL _canAddTopToNearestNeighborSpacingConstraints;
    BOOL _canAddBottomToNearestNeighborSpacingConstraints;
    BOOL _canAlignBaselines;
    BOOL _canAlignCenterX;
    BOOL _canAlignCenterY;
    BOOL _canAlignCenterXInContainer;
    BOOL _canAlignCenterYInContainer;
    BOOL _canAlignLeftEdges;
    BOOL _canAlignRightEdges;
    BOOL _canAlignBottomEdges;
    BOOL _canAlignTopEdges;
    NSArray *_selection;
    NSObject<IBIDEAutolayoutItem> *_containingItem;
    IBDocument *_document;
    NSSet *_selectedItems;
    unsigned long long _context;
    NSObject<IBIDEAutolayoutItem> *_sharedConstraintContainerItem;
}

@property(readonly) NSObject<IBIDEAutolayoutItem> *sharedConstraintContainerItem; // @synthesize sharedConstraintContainerItem=_sharedConstraintContainerItem;
@property(readonly) BOOL canAlignTopEdges; // @synthesize canAlignTopEdges=_canAlignTopEdges;
@property(readonly) BOOL canAlignBottomEdges; // @synthesize canAlignBottomEdges=_canAlignBottomEdges;
@property(readonly) BOOL canAlignRightEdges; // @synthesize canAlignRightEdges=_canAlignRightEdges;
@property(readonly) BOOL canAlignLeftEdges; // @synthesize canAlignLeftEdges=_canAlignLeftEdges;
@property(readonly) BOOL canAlignCenterYInContainer; // @synthesize canAlignCenterYInContainer=_canAlignCenterYInContainer;
@property(readonly) BOOL canAlignCenterXInContainer; // @synthesize canAlignCenterXInContainer=_canAlignCenterXInContainer;
@property(readonly) BOOL canAlignCenterY; // @synthesize canAlignCenterY=_canAlignCenterY;
@property(readonly) BOOL canAlignCenterX; // @synthesize canAlignCenterX=_canAlignCenterX;
@property(readonly) BOOL canAlignBaselines; // @synthesize canAlignBaselines=_canAlignBaselines;
@property(readonly) BOOL canAddBottomToNearestNeighborSpacingConstraints; // @synthesize canAddBottomToNearestNeighborSpacingConstraints=_canAddBottomToNearestNeighborSpacingConstraints;
@property(readonly) BOOL canAddTopToNearestNeighborSpacingConstraints; // @synthesize canAddTopToNearestNeighborSpacingConstraints=_canAddTopToNearestNeighborSpacingConstraints;
@property(readonly) BOOL canAddTrailingToNearestNeighborSpacingConstraints; // @synthesize canAddTrailingToNearestNeighborSpacingConstraints=_canAddTrailingToNearestNeighborSpacingConstraints;
@property(readonly) BOOL canAddLeadingToNearestNeighborSpacingConstraints; // @synthesize canAddLeadingToNearestNeighborSpacingConstraints=_canAddLeadingToNearestNeighborSpacingConstraints;
@property(readonly) BOOL canAddAspectRatioConstraints; // @synthesize canAddAspectRatioConstraints=_canAddAspectRatioConstraints;
@property(readonly) BOOL canAddEqualWidthsConstraint; // @synthesize canAddEqualWidthsConstraint=_canAddEqualWidthsConstraint;
@property(readonly) BOOL canAddEqualHeightsConstraint; // @synthesize canAddEqualHeightsConstraint=_canAddEqualHeightsConstraint;
@property(readonly) BOOL canAddBottomToSuperviewSpacingConstraints; // @synthesize canAddBottomToSuperviewSpacingConstraints=_canAddBottomToSuperviewSpacingConstraints;
@property(readonly) BOOL canAddTopToSuperviewSpacingConstraints; // @synthesize canAddTopToSuperviewSpacingConstraints=_canAddTopToSuperviewSpacingConstraints;
@property(readonly) BOOL canAddTrailingToSuperviewSpacingConstraints; // @synthesize canAddTrailingToSuperviewSpacingConstraints=_canAddTrailingToSuperviewSpacingConstraints;
@property(readonly) BOOL canAddLeadingToSuperviewSpacingConstraints; // @synthesize canAddLeadingToSuperviewSpacingConstraints=_canAddLeadingToSuperviewSpacingConstraints;
@property(readonly) BOOL canAddVerticalSpacingConstraint; // @synthesize canAddVerticalSpacingConstraint=_canAddVerticalSpacingConstraint;
@property(readonly) BOOL canAddHorizontalSpacingConstraint; // @synthesize canAddHorizontalSpacingConstraint=_canAddHorizontalSpacingConstraint;
@property(readonly) BOOL canAddExplicitWidthConstraints; // @synthesize canAddExplicitWidthConstraints=_canAddExplicitWidthConstraints;
@property(readonly) BOOL canAddExplicitHeightConstraints; // @synthesize canAddExplicitHeightConstraints=_canAddExplicitHeightConstraints;
@property(readonly) unsigned long long context; // @synthesize context=_context;
@property(readonly, copy) NSSet *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(readonly) IBDocument *document; // @synthesize document=_document;
@property(readonly) NSObject<IBIDEAutolayoutItem> *containingItem; // @synthesize containingItem=_containingItem;
@property(copy, nonatomic) NSArray *selection; // @synthesize selection=_selection;
- (void).cxx_destruct;
- (BOOL)canAddConstraintsForActionSelector:(SEL)arg1;
- (BOOL)isKnownConstraintAdditionActionSelector:(SEL)arg1;
- (void)_updateValidationState;
- (id)nearestNeighborConstraintsForAttribute:(unsigned long long)arg1 marginRelativeToContainer:(BOOL)arg2 useExistingConstant:(BOOL)arg3;
- (void)_updateNearestNeighborConstraintsValidationState;
- (id)centerInContainerAlignmentConstraintsForAttribute:(unsigned long long)arg1 useExistingConstant:(BOOL)arg2;
- (void)_updateCenterInContainerAlignmentConstraintsValidationState;
- (id)baselineAlignmentConstraintsUsingExistingConstant:(BOOL)arg1;
- (void)_updateBaselineAlignmentConstraintsValidationState;
- (id)edgeOrCenterAlignmentConstraintsForAttribute:(unsigned long long)arg1 useExistingConstant:(BOOL)arg2;
- (void)_updateEdgeOrCenterAlignmentConstraintsValidationState;
- (id)aspectRatioConstraints;
- (void)_updateAspectRatioConstraintsValidationState;
- (id)equalSizingConstraintsForAttribute:(unsigned long long)arg1 useExistingConstant:(BOOL)arg2;
- (void)_updateEqualSizeConstraintsValidationState;
- (id)edgeConstraintsForAttribute:(unsigned long long)arg1 useExistingConstant:(BOOL)arg2;
- (void)_updateEdgeConstraintsValidationState;
- (id)spacingConstraintForOrientation:(unsigned long long)arg1 useExistingConstant:(BOOL)arg2;
- (void)_updateSpacingConstraintsValidationState;
- (id)absoluteSizingConstraintsForAttribute:(unsigned long long)arg1;
- (void)_updateAbsoluteConstraintsValidationState;
- (id)debugDescription;
@property(readonly) BOOL canAddAnyConstraintsAmongSelection;
@property(readonly) BOOL canAddAnyConstraintsToContainer;
@property(readonly) BOOL canAddAnyConstraints;
- (BOOL)_objectsShareArbitrationUnit:(id)arg1;
- (id)initWithDocument:(id)arg1 containingItem:(id)arg2 context:(unsigned long long)arg3;

@end