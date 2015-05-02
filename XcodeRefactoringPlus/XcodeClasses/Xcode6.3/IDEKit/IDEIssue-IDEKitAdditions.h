//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEIssue (IDEKitAdditions) <IDEKeyDrivenNavigableItemRepresentedObject>
+ (BOOL)isCandidateAnnotationRepresentedObject:(id)arg1;
+ (id)defaultImageForIssueType:(int)arg1 ofSize:(unsigned long long)arg2;
- (id)exploredIssue;
- (id)title;
- (id)locations;
- (BOOL)isNoteSeverity;
- (id)childExplorableItems;
- (id)parentExplorableItem;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) NSImage *navigableItem_image;
- (id)navigableItem_subtitle;
@property(readonly) NSString *navigableItem_name;
@property(readonly) id exploreAnnotationRepresentedObject;
@property(readonly) id annotationRepresentedObject;
- (id)fixItImage;
@property(readonly) NSImage *image;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end