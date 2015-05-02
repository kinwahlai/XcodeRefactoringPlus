//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEToyboxDomainItemGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSMutableArray *_toyboxItems;
    DVTMapTable *_workspaceToItemMapTable;
    DVTMapTable *_workspaceToInvalidationObserverTable;
}

+ (id)sharedItemGroup;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) NSString *navigableItem_name;
- (id)itemForFileURL:(id)arg1 inWorkspace:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableToyboxItems; // @dynamic mutableToyboxItems;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(copy) NSArray *toyboxItems; // @dynamic toyboxItems;

@end