//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEDocumentStructureViewController : IDEViewController <SKEOutlineViewDelegate, NSOutlineViewDataSource>
{
    SKEDocumentNavigableItem *_entitiesTopLevelItem;
    SKEDocumentNavigableItem *_sceneGraphTopLevelItem;
    NSString *_filterString;
    DVTNotificationToken *_selectionToken;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    DVTGradientImagePopUpButton *_actionPopUpButton;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_deleteButton;
    SKEOutlineView *_outlineView;
    DVTBorderedView *_borderedView;
    DVTSearchField *_searchField;
    IDEControlGroup *_controlGroup;
    BOOL _isObservingDocument;
    SKEDocumentViewController *_documentEditorViewController;
}

@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain, nonatomic) SKEDocumentViewController *documentEditorViewController; // @synthesize documentEditorViewController=_documentEditorViewController;
- (void).cxx_destruct;
- (void)removeNodePropertyParticleSystem:(id)arg1;
- (void)addNodePropertyParticleSystem:(id)arg1;
- (void)removeNodePropertyCamera:(id)arg1;
- (void)addNodePropertyCamera:(id)arg1;
- (void)removeNodePropertyLight:(id)arg1;
- (void)addNodePropertyLight:(id)arg1;
- (void)flattenNode:(id)arg1;
- (void)duplicateNode:(id)arg1;
- (void)deleteNode:(id)arg1;
- (void)addNewChildNode:(id)arg1;
- (void)showNodeContextualMenuForInitialEvent:(id)arg1;
- (id)contextualMenuForMemberWrapper:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)targetNodeForActionSender:(id)arg1 withFallbackIfNoSelection:(id)arg2;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isHeaderItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)filteredChildrenOfItem:(id)arg1;
- (BOOL)itemShouldAppearInFilteredOutline:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)groupWasInvalidated:(id)arg1;
- (void)unregisterForForSceneGraphInvalidationNotifications;
- (void)registerForSceneGraphInvalidationNotifications;
- (id)groupInvalidationNotificationNames;
- (void)outlineViewSelectionDidChange;
- (void)selectLocations:(id)arg1;
- (id)libraryNavigableItemForLocation:(id)arg1;
- (id)sceneGraphNavigableItemForLocation:(id)arg1;
- (id)navigableItemForLocation:(id)arg1 inNavigables:(id)arg2;
- (id)document;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)configureSearchField;
- (void)configureBorderedView;
- (void)configureActionMenu;
- (void)configureControlGroup;
- (void)configureOutlineView;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end