//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBStoryboardStructureViewController : IBStructureViewController
{
    IBSearchFieldPositionBorderView *_borderedView;
    DVTSearchField *_filterField;
    IBStoryboardNavigationOutlineViewController *_documentOutlineViewController;
    NSLayoutConstraint *_barHeightConstraint;
    NSLayoutConstraint *_filterFieldHeightConstraint;
    NSNumber *_lastKnownOutlineViewWidth;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentFilterFieldWantingDocumentOutlineViewController;
@property(copy) NSNumber *lastKnownOutlineViewWidth; // @synthesize lastKnownOutlineViewWidth=_lastKnownOutlineViewWidth;
@property __weak NSLayoutConstraint *filterFieldHeightConstraint; // @synthesize filterFieldHeightConstraint=_filterFieldHeightConstraint;
@property __weak NSLayoutConstraint *barHeightConstraint; // @synthesize barHeightConstraint=_barHeightConstraint;
@property(retain) IBStoryboardNavigationOutlineViewController *documentOutlineViewController; // @synthesize documentOutlineViewController=_documentOutlineViewController;
@property(retain) DVTSearchField *filterField; // @synthesize filterField=_filterField;
@property(retain) IBSearchFieldPositionBorderView *borderedView; // @synthesize borderedView=_borderedView;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)structureAreaExpansionPreferencesKey;
- (void)topLevelObjectsChanged;
- (void)selectionProviderDidBecomeActive:(id)arg1;
- (id)selectionProviderForRevealingMembers:(id)arg1;
- (void)toggleStructureArea:(id)arg1;
- (double)constrainContentWidthAndChangeModesIfNeeded:(double)arg1;
- (double)outlineViewWidth;
- (id)storyboardCanvasViewController;
- (double)maximumContentWidth;
- (double)minimumContentWidth;
- (double)contentWidth;
- (id)highlightProviders;
- (id)stateSavingIdentifier;
@property(readonly) id currentFilterFieldWantingDocumentOutlineViewController;
- (void)setDrawsWithActiveLook:(BOOL)arg1;
- (void)setCurrentStructureProvider:(id)arg1;
@property(nonatomic, getter=isShowingStructureArea) BOOL showingStructureArea;
- (id)_lastStructureSelectionProvider;
- (BOOL)supportsTogglingStructureArea;
- (void)editorInstalled;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (void)loadView;
- (void)populateStructureAreaStructureProviders:(id)arg1;
- (void)makeAndPopulateSelectionProviders:(id)arg1;

@end