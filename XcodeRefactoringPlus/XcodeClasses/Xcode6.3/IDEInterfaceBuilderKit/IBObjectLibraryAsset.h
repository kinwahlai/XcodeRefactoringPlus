//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBObjectLibraryAsset : NSView <IBDocumentArchiving, NSCoding>
{
    NSArray *_cachedPasteboardObjects;
    BOOL _hasCreatedContent;
    NSString *_nibName;
    NSString *_representedObjectClassName;
    NSString *_label;
    NSString *_subtitle;
    NSString *_briefDescription;
    NSAttributedString *_fullDescription;
    NSString *_initialCategoryPath;
    NSArray *_filterableNames;
    long long _animationScalingMode;
    NSString *_assetIdentifier;
    IBObjectLibraryAssetProvider *_assetProvider;
    IBTargetRuntime *_targetRuntime;
    Class _documentClass;
    long long _minimumRequiredRuntimeOSVersion;
    id _representedObject;
    NSView *_draggedView;
}

@property(retain, nonatomic) NSView *draggedView; // @synthesize draggedView=_draggedView;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property long long minimumRequiredRuntimeOSVersion; // @synthesize minimumRequiredRuntimeOSVersion=_minimumRequiredRuntimeOSVersion;
@property(retain) Class documentClass; // @synthesize documentClass=_documentClass;
@property(retain) IBTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(retain) IBObjectLibraryAssetProvider *assetProvider; // @synthesize assetProvider=_assetProvider;
@property(copy) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
@property long long animationScalingMode; // @synthesize animationScalingMode=_animationScalingMode;
@property(copy) NSArray *filterableNames; // @synthesize filterableNames=_filterableNames;
@property(copy) NSString *initialCategoryPath; // @synthesize initialCategoryPath=_initialCategoryPath;
@property(copy) NSAttributedString *fullDescription; // @synthesize fullDescription=_fullDescription;
@property(copy) NSString *briefDescription; // @synthesize briefDescription=_briefDescription;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy) NSString *label; // @synthesize label=_label;
@property(copy) NSString *representedObjectClassName; // @synthesize representedObjectClassName=_representedObjectClassName;
@property(copy) NSString *nibName; // @synthesize nibName=_nibName;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (id)objectContainerCopyViaSerialization;
- (id)objectContainer;
- (id)pasteboardObjects;
@property(readonly, copy) NSString *description;
@property(readonly) NSView *effectiveDraggedView;
@property(readonly) NSView *effectiveDraggableView;
@property(readonly) id effectiveRepresentedObject;
@property(readonly) NSString *effectiveAssetIdentifier;
- (BOOL)inspectorShouldShowMinimumRequiredRuntimeOSVersion;
- (void)createContentIfNeeded;
- (id)instantiateObjectForRole:(long long)arg1;
- (void)didCreateContent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)ibInspectedMinimumRequiredRuntimeOSVersionOptionValues;
- (id)ibInspectedMinimumRequiredRuntimeOSVersionOptionTitles;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibTypeNameForDefaultLabel;
- (id)ibDesignableContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end