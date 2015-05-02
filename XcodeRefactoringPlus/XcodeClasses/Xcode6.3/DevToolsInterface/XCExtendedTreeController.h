//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCExtendedTreeController : NSTreeController
{
    struct {
        unsigned int delegateListensForChanges:1;
        unsigned int enableDragAndDrop:1;
        unsigned int delegateRegistersPasteboardTypes:1;
        unsigned int delegateHandlesDrags:1;
        unsigned int delegateHandlesDrops:1;
        unsigned int delegateModifiesNewObject:1;
        unsigned int delegateProvidesInitialColumnToEdit:1;
        unsigned int delegateHandlesNumberOfChildrenOfItem:1;
        unsigned int delegateHandlesOutlineValues:1;
        unsigned int delegateDeclaresPasteboardTypes:1;
        unsigned int delegateWantsNotificationOfTreeChanges:1;
        unsigned int delegateWantsToModifySortDescriptors:1;
        unsigned int delegateHandlesRowDrawing:1;
        unsigned int delegateHandlesAllowingItemSelection:1;
        unsigned int delegateHandlesProvidingItemCells:1;
        unsigned int delegateWantsNotificationOfColumnEditingStarting:1;
        unsigned int delegateWantsToOverrideColumnEndEditing:1;
        unsigned int delegateAllowsIntraOutlineDrags:1;
        unsigned int delegateHandlesPastes:1;
        unsigned int delegateWantsToModifyDrops:1;
        unsigned int enableAddingItemsToPasteboard:1;
        unsigned int delegateHandlesItemDeletion:1;
        unsigned int delegateHandlesGroupStyleDrawing:1;
        unsigned int delegateIndicatesCellTracking:1;
        unsigned int delegateWantsToRearrangeObjects:1;
        unsigned int delegateHandlesReturningChildren:1;
        unsigned int delegateHandlesItemExpansion:1;
        unsigned int delegateHandlesSettingOutlineValues:1;
        unsigned int delegateControlsItemEditing:1;
        unsigned int _RESERVED_:6;
    } _etcFlags;
    PBXExtendedOutlineView *_outlineView;
    id _delegate;
}

- (void)outlineView:(id)arg1 deleteItems:(id)arg2;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 createItemsFromPasteboard:(id)arg2;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)registerPasteboardTypes;
- (void)outlineView:(id)arg1 willEndEditingColumn:(long long)arg2 row:(long long)arg3 textMovement:(unsigned long long)arg4;
- (void)outlineView:(id)arg1 didStartEditingColumn:(long long)arg2 row:(long long)arg3;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (void)outlineView:(id)arg1 drawRow:(long long)arg2 clipRect:(struct CGRect)arg3;
- (BOOL)outlineView:(id)arg1 shouldOverrideRowDrawingForRow:(long long)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)setSortDescriptors:(id)arg1;
- (void)rearrangeObjects;
- (void)remove:(id)arg1;
- (void)addChild:(id)arg1;
- (void)add:(id)arg1;
- (void)insert:(id)arg1;
- (void)editNewlyCreatedObject;
- (void)editNewlyCreatedObjectUsingColumn:(id)arg1;
- (void)selectNewlyCreatedObject;
- (id)newObject;
- (void)_notifyOfAnyContentChange;
- (void)setPutItemsOnPasteboard:(BOOL)arg1;
- (BOOL)putItemsOnPasteboard;
- (void)setAllowSameOutlineDrops:(BOOL)arg1;
- (BOOL)allowSameOutlineDrops;
- (void)setDragAndDropEnabled:(BOOL)arg1;
- (BOOL)dragAndDropEnabled;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_examineDelegate;

@end