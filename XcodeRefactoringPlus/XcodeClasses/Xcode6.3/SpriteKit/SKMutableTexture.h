//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKMutableTexture : SKTexture
{
    struct __IOSurface *_ioSurface;
    BOOL _ioSurfaceBacked;
    struct CGSize _textureSize;
    void *_pixelData;
    unsigned long long _pixelDataLength;
    int _pixelFormat;
}

+ (id)mutableTextureWithSize:(struct CGSize)arg1;
- (id).cxx_construct;
- (void)dealloc;
- (id)description;
- (void)load;
- (void)modifyPixelDataWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithSize:(struct CGSize)arg1 pixelFormat:(int)arg2;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 ioSurfaceBacked:(BOOL)arg2 pixelFormat:(int)arg3;

@end