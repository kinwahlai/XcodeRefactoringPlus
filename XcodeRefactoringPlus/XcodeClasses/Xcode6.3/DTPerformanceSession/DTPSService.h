//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTPSService : DTXService
{
    NSString *_serviceID;
    NSNumber *_serviceVersion;
    DTPSInstrument *_parentInstrument;
    DTXConnection *_helperConnection;
    NSString *_serializedMessagePath;
}

@property(readonly, retain, nonatomic) NSString *serializedMessagePath; // @synthesize serializedMessagePath=_serializedMessagePath;
@property(retain, nonatomic) NSNumber *serviceVersion; // @synthesize serviceVersion=_serviceVersion;
- (void).cxx_destruct;
- (BOOL)waitUntilComplete:(id *)arg1;
- (void)messageReceived:(id)arg1;
- (void)_helperConnectionError;
- (void)dealloc;
- (id)initWithChannel:(id)arg1 ID:(id)arg2 version:(long long)arg3 parent:(id)arg4;
- (BOOL)usesTap;

@end