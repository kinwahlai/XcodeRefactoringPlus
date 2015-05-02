//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEMaterialPropertiesInspector : IDEInspectorViewController <NSOutlineViewDataSource, NSOutlineViewDelegate, SKEContentsPickerPopUpButtonDataSource>
{
    NSOutlineView *_outlineView;
}

- (void).cxx_destruct;
- (void)DVTFilePathFieldCell:(id)arg1 chooserSelectedPath:(id)arg2;
- (id)suggestedImagesForContentsPicker:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)relayoutDetailsView:(id)arg1;
- (void)contentsChanged:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (double)preferredContentViewHeight;
- (id)material;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end