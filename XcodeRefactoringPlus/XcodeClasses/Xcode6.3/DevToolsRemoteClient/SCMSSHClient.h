//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCMSSHClient : NSObject
{
}

+ (BOOL)getPermissionToAddCertificate:(id)arg1;
+ (BOOL)getPermissionToAddHostKey:(id)arg1;
+ (BOOL)getPermissionToRetrievePasswordForHost:(id)arg1 user:(id)arg2 port:(long long *)arg3;
+ (void)_connectionDidDie:(id)arg1;
+ (BOOL)_connectIfNecessary;
+ (id)_serverProxy;

@end