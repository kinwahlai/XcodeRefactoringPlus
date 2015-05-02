//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBNinePartImage : NSObject
{
    NSImage *edgeImages[8];
    NSImage *centerImage;
    struct CGRect imageCenterPartRect;
}

+ (id)ninePartImageWithCenterPixelOfImage:(id)arg1;
- (void).cxx_destruct;
- (BOOL)canBeDrawnAtSize:(struct CGSize)arg1;
- (struct CGSize)minimumSize;
- (void)writeOutDebugImages;
- (void)drawInRect:(struct CGRect)arg1 unflip:(BOOL)arg2 drawCenterComponent:(BOOL)arg3;
- (id)initWithImage:(id)arg1 center:(struct CGRect)arg2;

@end