//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXSmartGroupDataSource : NSObject <XCSelectionSource>
{
    PBXProjectModule *_owningModule;
    PBXProject *_projectNotRetained;
    PBXSmartGroup *_owningSmartGroupNotRetained;
}

- (double)widthOfString:(id)arg1 inFont:(id)arg2;
- (void)editSelection:(id)arg1;
- (id)keyTabView;
- (id)windowOfSelection;
- (BOOL)wantsToRetainFocusDuringSelection;
- (BOOL)openInSeparateEditorOrWithFinder;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (id)xcSelection;
- (BOOL)restore;
- (void)save;
- (id)configurationIdentifier;
- (void)selectCurrentDetail:(id)arg1;
- (void)previousDetail:(id)arg1;
- (void)nextDetail:(id)arg1;
- (void)applySelection:(id)arg1;
- (id)currentSelection;
- (id)pathForItem:(id)arg1;
- (id)selectedProjectItemPaths;
- (id)selectedProjectItems;
- (id)summary;
- (id)status;
- (BOOL)addCornerView:(id)arg1;
- (void)removeCornerView;
- (id)iconImage;
- (BOOL)isConnected;
- (void)disconnect;
- (id)detailView;
- (void)refresh;
- (void)showDetailFor:(id)arg1;
- (void)clearProject;
- (id)project;
- (id)workspace;
- (id)sourceControlManager;
- (id)owningModule;
- (id)owningSmartGroup;
- (id)initWithOwningModule:(id)arg1;
- (id)initWithOwningModule:(id)arg1 smartGroup:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end