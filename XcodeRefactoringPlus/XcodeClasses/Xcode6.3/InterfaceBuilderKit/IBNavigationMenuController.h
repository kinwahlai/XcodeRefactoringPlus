//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBNavigationMenuController : NSObject <NSMenuDelegate>
{
    IBDocument *document;
    struct __CFDictionary *highlightedItemsTable;
}

- (void)selectionMenuItemWasClicked:(id)arg1;
- (id)menuForObjects:(id)arg1;
- (void)updateMenuItem:(id)arg1 forObject:(id)arg2;
- (id)menuItemAttributedTitleForObject:(id)arg1 highlighted:(BOOL)arg2;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (long long)numberOfItemsInMenu:(id)arg1;
- (id)representedObjectOfSuperMenuItemForMenu:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)menuDidClose:(id)arg1;
- (id)document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end