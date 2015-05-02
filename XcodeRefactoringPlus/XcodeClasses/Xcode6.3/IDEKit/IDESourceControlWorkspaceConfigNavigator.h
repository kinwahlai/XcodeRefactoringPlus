//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlWorkspaceConfigNavigator : IDEViewController
{
    DVTOutlineView *_outlineView;
    NSArray *_selectedObjects;
    NSArray *_workingTrees;
    NSArray *_missingConfigurations;
    NSMutableArray *_currentItems;
    id _finishedUpgradingObserverToken;
}

@property(readonly) NSArray *selectedObjects; // @synthesize selectedObjects=_selectedObjects;
@property(readonly) DVTOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)doubleClickAction:(id)arg1;
@property NSArray *missingConfigurations;
@property NSArray *workingTrees;
- (void)viewDidInstall;

@end