//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEAssetCatalogDocument : IDEEditorDocument
{
    SKEAssetCatalog *_assetCatalog;
}

- (void).cxx_destruct;
@property BOOL usePVRTCIfAvailable;
@property BOOL interleaveGeometrySources;
@property BOOL forceYUp;
- (BOOL)writeSettings;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end