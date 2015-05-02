//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEIndexQPManager : NSObject
{
    IDEIndex *_index;
    NSObject<OS_dispatch_queue> *_qp_queue;
    NSMutableArray *_masterBlocks;
    NSMutableArray *_recentQueryProviders;
    NSTimer *_purgeTimer;
}

+ (void)initialize;
@property(readonly, nonatomic) IDEIndex *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)_logRecents;
- (void)_cancelPurgeTimer;
- (void)_purgeTimeout:(id)arg1;
- (void)_scheduleQPPurge;
- (void)_addQueryProviderToRecents:(id)arg1 highPriority:(BOOL)arg2;
- (void)purgeQPsUsingPCH:(id)arg1;
- (void)purgeAllQPs;
- (id)queryProviderForFile:(id)arg1 highPriority:(BOOL)arg2;
- (void)dealloc;
- (id)initWithIndex:(id)arg1;

@end