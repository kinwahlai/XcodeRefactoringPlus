//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCNSProcList : NSObject
{
    NSLock *procLock;
    NSMapTable *procs;
    BOOL appsOnly;
    BOOL ownedOnly;
    float interval;
    NSTimer *timer;
}

- (id)procInfoWithPID:(int)arg1;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2 withContext:(void *)arg3;
- (id)newestProcInfoWithName:(id)arg1;
- (id)newestProcInfo;
- (id)allIconImages;
- (id)allPathNames;
- (id)allNames;
- (id)allPIDs;
- (id)allTasks;
- (id)allProcInfos;
- (unsigned long long)count;
- (float)autoUpdateInterval;
- (void)setAutoUpdateInterval:(float)arg1;
- (void)setAutoUpdateInterval:(float)arg1 withMode:(id)arg2;
- (BOOL)appsOnly;
- (void)setAppsOnly:(BOOL)arg1;
- (BOOL)ownedOnly:(BOOL)arg1;
- (void)setOwnedOnly:(BOOL)arg1;
- (BOOL)update;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end