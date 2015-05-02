//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGLLDBQueue : DBGQueue <DBGLLDBInvalidation>
{
    struct SBQueue _lldbQueue;
    unsigned long long _numPendingBlocks;
    BOOL _derivedPendingBlocks;
    BOOL _markedForInvalidationFromTheSessionThread;
}

@property BOOL markedForInvalidationFromTheSessionThread; // @synthesize markedForInvalidationFromTheSessionThread=_markedForInvalidationFromTheSessionThread;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)invalidateOldPendingBlocksThreads:(id)arg1;
- (unsigned long long)numberOfPendingBlocks;
- (id)pendingBlocksThreads;
- (id)lldbSession;
- (id)initWithParentProcess:(id)arg1 lldbQueue:(struct SBQueue)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end