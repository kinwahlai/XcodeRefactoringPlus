//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRemoteVolunteer : XCDistributedBuildHost
{
}

+ (id)distributedBuildHostWithSpec:(id)arg1;
- (void)setBonjourServiceName:(id)arg1;
- (id)bonjourServiceName;
- (id)statusString;
- (id)description;
- (BOOL)hasCompiler:(id)arg1;
- (BOOL)isCompatibleHost;
- (id)compilerVersionStrings;
- (void)setIsReachable:(BOOL)arg1;
- (id)initWithHostSpec:(id)arg1;

@end