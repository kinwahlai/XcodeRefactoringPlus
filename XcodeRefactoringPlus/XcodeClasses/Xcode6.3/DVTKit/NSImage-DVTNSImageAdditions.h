//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSImage (DVTNSImageAdditions)
+ (id)dvt_imageWithSize:(struct CGSize)arg1 scaleFactors:(id)arg2 flipped:(BOOL)arg3 fromCommands:(CDUnknownBlockType)arg4;
+ (id)dvt_imageWithSize:(struct CGSize)arg1 flipped:(BOOL)arg2 forRenderingIntoContext:(id)arg3 fromCommands:(CDUnknownBlockType)arg4;
+ (id)dvt_imageWithSize:(struct CGSize)arg1 scaleFactors:(id)arg2 flipped:(BOOL)arg3 forRenderingIntoContext:(id)arg4 fromCommands:(CDUnknownBlockType)arg5;
+ (id)dvt_imageWithSize:(struct CGSize)arg1 fromCommands:(CDUnknownBlockType)arg2;
+ (id)dvt_imageWithSize:(struct CGSize)arg1 flipped:(BOOL)arg2 fromCommands:(CDUnknownBlockType)arg3;
+ (id)dvt_imageWithPDFDrawingWithSize:(struct CGSize)arg1 andCommands:(CDUnknownBlockType)arg2;
+ (id)dvt_cachedImageForApplicationBundleIdentifier:(id)arg1;
+ (BOOL)dvt_isTemplateName:(id)arg1;
+ (id)dvt_cachedImageByReferencingFilePath:(id)arg1;
+ (id)dvt_cachedImageForFilePath:(id)arg1 variant:(id)arg2 creatingIfNecessary:(CDUnknownBlockType)arg3;
+ (id)dvt_cachedImageNamed:(id)arg1 fromBundleForExtension:(id)arg2;
+ (id)dvt_cachedImageNamed:(id)arg1 fromBundleForClass:(Class)arg2;
+ (id)dvt_cachedImageNamed:(id)arg1 fromBundle:(id)arg2;
+ (id)dvt_cachedImageNamed:(id)arg1 isTemplate:(BOOL)arg2 fromBundle:(id)arg3;
+ (id)dvt_cachedImageNamed:(id)arg1 ofSquareSize:(double)arg2 fromBundle:(id)arg3;
+ (id)dvt_cachedImageNamed:(id)arg1 ofSquareSize:(double)arg2 isTemplate:(BOOL)arg3 fromBundle:(id)arg4;
+ (id)dvt_cachedImageNamed:(id)arg1 ofSize:(struct CGSize)arg2 fromBundle:(id)arg3;
+ (id)dvt_cachedImageNamed:(id)arg1 ofSize:(struct CGSize)arg2 isTemplate:(BOOL)arg3 fromBundle:(id)arg4;
+ (id)_dvt_cachedImageNamed:(id)arg1 ofSize:(struct CGSize)arg2 isTemplate:(BOOL)arg3 fromBundle:(id)arg4;
+ (id)_dvt_cachedImageNamed:(id)arg1 isTemplate:(BOOL)arg2 withFallback:(id)arg3 checkingNamedNSImages:(BOOL)arg4 fromBundle:(id)arg5;
+ (id)dvt_cachedImageWithKey:(id)arg1 creationBlock:(CDUnknownBlockType)arg2;
- (void)dvt_associateCopiedAlternateImageWithOriginal:(id)arg1;
- (id)dvt_nonPDFImage_workaroundForProblem14522929;
- (id)dvt_cachedVariantForKey:(id)arg1 variantImageGenerator:(CDUnknownBlockType)arg2;
- (id)dvt_deriveSubsidiaryImageOfSize:(struct CGSize)arg1;
- (id)dvt_cachedWhiteImageFromTemplate;
- (id)dvt_deriveWhiteImageFromTemplate;
- (id)dvt_cachedInactiveAlternateImageFromTemplate;
- (id)_dvt_deriveInactiveAlternateImageFromTemplate;
- (id)dvt_cachedAlternateImageFromTemplate;
- (id)_dvt_deriveAlternateImageFromTemplate;
- (void)dvt_drawInnerShadow:(id)arg1 inRect:(struct CGRect)arg2;
- (void)dvt_drawInRect:(struct CGRect)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3 unflip:(BOOL)arg4;
- (id)dvt_copyReferencingCachedOriginal;
- (void)_dvt_associateOriginal:(id)arg1;
- (id)_dvt_cachedOriginal;
- (id)_debugAnnotation;
@end