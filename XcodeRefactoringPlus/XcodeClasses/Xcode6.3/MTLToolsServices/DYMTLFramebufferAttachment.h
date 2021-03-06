//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYMTLFramebufferAttachment : NSObject
{
    unsigned int _attachmentIndex;
    unsigned long long _textureID;
    unsigned long long _level;
    unsigned long long _slice;
    unsigned long long _depthPlane;
    unsigned long long _resolveTextureID;
    unsigned long long _resolveLevel;
    unsigned long long _resolveSlice;
    unsigned long long _resolveDepthPlane;
    unsigned long long _loadAction;
    unsigned long long _storeAction;
}

@property(readonly, nonatomic) unsigned long long storeAction; // @synthesize storeAction=_storeAction;
@property(readonly, nonatomic) unsigned long long loadAction; // @synthesize loadAction=_loadAction;
@property(readonly, nonatomic) unsigned long long resolveDepthPlane; // @synthesize resolveDepthPlane=_resolveDepthPlane;
@property(readonly, nonatomic) unsigned long long resolveSlice; // @synthesize resolveSlice=_resolveSlice;
@property(readonly, nonatomic) unsigned long long resolveLevel; // @synthesize resolveLevel=_resolveLevel;
@property(readonly, nonatomic) unsigned long long resolveTextureID; // @synthesize resolveTextureID=_resolveTextureID;
@property(readonly, nonatomic) unsigned long long depthPlane; // @synthesize depthPlane=_depthPlane;
@property(readonly, nonatomic) unsigned long long slice; // @synthesize slice=_slice;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, nonatomic) unsigned long long textureID; // @synthesize textureID=_textureID;
@property(readonly, nonatomic) unsigned int attachmentIndex; // @synthesize attachmentIndex=_attachmentIndex;
- (id)initWithTextureID:(unsigned long long)arg1 attachmentIndex:(unsigned int)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4 depthPlane:(unsigned long long)arg5 resolveTextureID:(unsigned long long)arg6 resolveLevel:(unsigned long long)arg7 resolveSlice:(unsigned long long)arg8 resolveDepthPlane:(unsigned long long)arg9 loadAction:(unsigned long long)arg10 storeAction:(unsigned long long)arg11;
- (id)init;

@end