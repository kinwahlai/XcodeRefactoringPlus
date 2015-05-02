//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXClassBrowserModule : PBXProjectModule <PBXTableColumnProvider>
{
    NSSplitView *_splitViewVertical;
    NSSplitView *_splitViewHorizontal;
    PBXExtendedOutlineView *_classesOutlineView;
    PBXExtendedTableView *_membersTableView;
    PBXTableColumnManager *_coColumnManager;
    PBXTableColumnManager *_mtColumnManager;
    NSView *_documentView;
    PBXNavigatorGroup *_navigatorGroup;
    NSMenu *_itemContextualMenu;
    PBXClassBrowserOptionsModule *_optionsModule;
    NSMutableDictionary *_columnDictionary;
    NSMutableArray *_rootClasses;
    NSMapTable *_classToSubclassesMap;
    NSMapTable *_classToMembersMap;
    NSString *_optionsSetName;
    NSDate *_lastActiveTime;
    struct _cbmFlags {
        unsigned int classesNeedReload:1;
        unsigned int membersNeedReload:1;
        unsigned int classesReloading:1;
        unsigned int membersReloading:1;
        unsigned int hasIndex:1;
        unsigned int hasClasses:1;
        unsigned int isBookClick:1;
        unsigned int isClassClick:1;
        unsigned int loadingNewOptions:1;
        unsigned int indexIsUpdating:1;
        unsigned int _reserved:24;
    } _cbmFlags;
}

+ (void)echoStringsForDefinition:(id)arg1;
+ (id)createInstanceWithDefinition:(id)arg1 forProjectDocument:(id)arg2;
+ (void)initialize;
+ (void)setDoubleClickOpensNewClassBrowser:(BOOL)arg1;
+ (BOOL)doubleClickOpensNewClassBrowser;
+ (void)setInstanceMethodColor:(id)arg1;
+ (id)instanceMethodColor;
+ (void)setInstanceVariableColor:(id)arg1;
+ (id)instanceVariableColor;
+ (void)setClassMethodColor:(id)arg1;
+ (id)classMethodColor;
+ (void)setClassVariableColor:(id)arg1;
+ (id)classVariableColor;
+ (void)setProjectClassColor:(id)arg1;
+ (id)projectClassColor;
+ (void)setFrameworkClassColor:(id)arg1;
+ (id)frameworkClassColor;
- (id)moduleToolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarCombinableItemIdentifiers:(id)arg1;
- (id)moduleToolbarDefaultItemIdentifiers;
- (id)moduleToolbarAllowedItemIdentifiers;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (void)toolbarWillAddItem:(id)arg1;
- (void)_rebuildOptionsPopUp;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)takeContentConfigurationFromDictionary:(id)arg1;
- (id)contentConfigurationDictionary;
- (void)takeGeometryConfigurationFromDictionary:(id)arg1;
- (id)geometryConfigurationDictionary;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (id)submenuItem;
- (id)_columnDictionary;
- (id)menuTitleForIdentifier:(id)arg1;
- (void)removeColumnForIdentifier:(id)arg1 fromTable:(id)arg2;
- (id)addColumnForIdentifier:(id)arg1 toTable:(id)arg2;
- (id)_createColumnWithIdentifier:(id)arg1;
- (id)requiredColumnIdentifiers:(id)arg1;
- (id)optionalColumnIdentifiers:(id)arg1;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 handleReturnKey:(id)arg2 changeFocus:(BOOL)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)outlineView:(id)arg1 handleReturnKey:(id)arg2 changeFocus:(BOOL)arg3;
- (id)_attributedStringForMemberSymbol:(id)arg1 andContainerSymbol:(id)arg2;
- (id)_attributesDictionaryWithParagraphStyle;
- (BOOL)_isInheritedMemberSymbol:(id)arg1 forContainerSymbol:(id)arg2;
- (id)_memberSymbolsForSymbol:(id)arg1;
- (id)_attributedStringForContainerSymbol:(id)arg1;
- (id)_subSymbolsForSymbol:(id)arg1;
- (void)_removeUneededSymbolsFromMutableArray:(id)arg1;
- (BOOL)_symbol:(id)arg1 hasSubSymbolsFromFrameworks:(BOOL)arg2;
- (BOOL)_revealReferencesInGroupTree:(id)arg1;
- (void)revealCurrentFileInGroupTree:(id)arg1;
- (void)addToBookmarks:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)optionsSetsPopUpButtonAction:(id)arg1;
- (void)optionsButtonAction:(id)arg1;
- (void)_optionsSheetDidEnd;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)_optionsSetsChanged:(id)arg1;
- (void)_optionsSetChanged:(id)arg1;
- (void)_indexWasRemoved:(id)arg1;
- (void)_indexingDidReloadPersistentIndex:(id)arg1;
- (void)_indexingDidComplete:(id)arg1;
- (void)_indexingDidBegin:(id)arg1;
- (void)_indexIsRunning:(BOOL)arg1;
- (void)update;
- (id)slideOutTabIconImage;
- (long long)expandAndSelectContainerSymbolWithName:(id)arg1 andMemberWithName:(id)arg2;
- (long long)_expandToContainerWithPrefixedName:(id)arg1;
- (long long)_expandToContainerWithPrefixedName:(id)arg1 knownPrefixedNames:(id)arg2;
- (id)_protocolItemString;
- (id)_containerSymbolForPrefixedName:(id)arg1;
- (long long)_restoreExpandedClassNames:(id)arg1 andReturnIndexOfItemWithPrefixedName:(id)arg2;
- (id)_expandedClassNames;
- (id)_containerSymbolPrefixedNameForSymbol:(id)arg1;
- (void)_clickActionFromSender:(id)arg1 inNewWindow:(BOOL)arg2;
- (void)doubleClickAction:(id)arg1;
- (void)singleClickAction:(id)arg1;
- (void)tileOnWindowOfClassBrowser:(id)arg1;
- (id)classBrowserOptionsSet;
- (void)setClassBrowserOptionsSet:(id)arg1;
- (void)_openReferenceForSymbolInNewWindow:(BOOL)arg1 withUsage:(int)arg2;
- (id)bookmarkForSymbol:(id)arg1 withUsage:(int)arg2;
- (void)setDocument:(id)arg1;
- (void)reloadMethods;
- (void)reloadClasses;
- (id)selectedMemberSymbol;
- (id)selectedContainerSymbol;
- (id)selectedSymbol;
- (void)moduleWasDisplayed;
- (id)lastActiveTime;
- (void)becomeActive;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleWindowWillClose:(id)arg1;
- (void)projectDocumentWillChange:(id)arg1;
- (void)setProjectDocument:(id)arg1;
- (BOOL)moduleEnforcesViewMinSize;
- (struct CGSize)viewMinSize;
- (void)finalize;
- (void)dealloc;
- (void)_updateLabel:(id)arg1;
- (void)_setupFileNavigatorView;
- (void)_setupTextColumn:(id)arg1;
- (void)_setupMemberTableView;
- (void)_setupClassOutlineView;
- (void)viewDidLoad;
- (id)initWithModuleNibName:(id)arg1;
- (id)loadModuleWindow;

@end