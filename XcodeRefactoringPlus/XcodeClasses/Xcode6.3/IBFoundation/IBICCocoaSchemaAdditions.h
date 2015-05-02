//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICCocoaSchemaAdditions : NSObject <IBICSchemaProvider>
{
    IBICPlatform *_universalPlatform;
    IBICPlatform *_OSXPlatform;
    IBICIdiom *_universalIdiom;
    IBICIdiom *_macIdiom;
    IBICScale *_oneXScale;
    IBICScale *_twoXScale;
    IBICSize *_size16;
    IBICSize *_size32;
    IBICSize *_size128;
    IBICSize *_size256;
    IBICSize *_size512;
    IBICFileType *_pngFileType;
    IBICFileType *_jpegFileType;
    IBICFileType *_pdfFileType;
}

- (void).cxx_destruct;
- (void)registerAppIconSetSlots:(id)arg1;
- (void)registerIconSetSlots:(id)arg1;
- (void)registerImageSetSlots:(id)arg1;
- (void)registerSlotComponents:(id)arg1;
- (void)captureExistingComponents:(id)arg1;
- (void)registerSchemaComponents:(id)arg1;
- (double)precedence;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end