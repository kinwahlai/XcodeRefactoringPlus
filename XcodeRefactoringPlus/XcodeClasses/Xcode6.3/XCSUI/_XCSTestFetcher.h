//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _XCSTestFetcher : NSObject
{
    NSOperationQueue *_fetchQueue;
    NSObject<OS_dispatch_semaphore> *_fetchSemaphore;
}

+ (id)sharedTestFetcher;
- (void).cxx_destruct;
- (void)fetchTestsForPlaceholder:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end