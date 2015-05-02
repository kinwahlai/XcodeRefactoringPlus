//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKObjectLibraryController : IDELibraryController
{
    NSMutableArray *_objectsForSKLibrary;
    NSMutableArray *_userObjectsForSKLibrary;
    BOOL _allowObjectLibrary;
}

- (void).cxx_destruct;
- (id)editorViewControllerForAsset:(id)arg1;
- (BOOL)canRemoveAsset:(id)arg1;
- (BOOL)canEditAsset:(id)arg1;
- (void)userDidEditAsset:(id)arg1;
- (BOOL)removeAssets:(id)arg1 error:(id *)arg2;
- (BOOL)createAsset:(id *)arg1 forLibrarySourceWithIdentifier:(id *)arg2 fromPasteboard:(id)arg3;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (BOOL)canCreateAssetsFromPasteboard:(id)arg1 targetingLibrarySourceIdentifier:(id *)arg2;
- (id)readableAssetPasteboardTypes;
- (void)libraryDidLoad;
- (id)createLibraryAssetForNode:(id)arg1 title:(id)arg2 subTitle:(id)arg3 summary:(id)arg4 image:(id)arg5 withUDID:(id)arg6;
- (id)createLibraryAssetForNode:(id)arg1 title:(id)arg2 subTitle:(id)arg3 summary:(id)arg4 image:(id)arg5;
- (void)activeEditorDocumentDidChange:(id)arg1;
- (void)populateObjectLibrary;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end