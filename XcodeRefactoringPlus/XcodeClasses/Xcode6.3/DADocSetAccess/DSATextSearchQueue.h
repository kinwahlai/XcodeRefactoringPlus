//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DSATextSearchQueue : NSObject
{
    NSMutableDictionary *_searchForDocSet;
    NSMutableArray *_searchQueue;
    NSMutableArray *_searchResults;
    BOOL _currentSearchCanceled;
}

+ (id)_mungeQueryString:(id)arg1 forMatchType:(unsigned long long)arg2;
+ (BOOL)_looksLikeSearchKitQuery:(id)arg1;
+ (id)sharedQueue;
- (void).cxx_destruct;
- (id)searchForText:(id)arg1 inNodes:(id)arg2 inDocSet:(id)arg3 withMatchType:(unsigned long long)arg4;
- (id)_searchTermLists:(id)arg1 inDocSet:(id)arg2 forQuery:(id)arg3 withMatchType:(unsigned long long)arg4 allowCancel:(BOOL)arg5;
- (id)_searchFullTextIndex:(id)arg1;
- (void)invalidateSearchesOfDocSet:(id)arg1;
- (void)cancelSearchWithDelegate:(id)arg1 contextInfo:(void *)arg2;
- (BOOL)addQueuedQuery:(id)arg1 inDocSets:(id)arg2 withMatchType:(unsigned long long)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
- (BOOL)addQueuedQuery:(id)arg1 inNodes:(id)arg2 inDocSet:(id)arg3 withMatchType:(unsigned long long)arg4 delegate:(id)arg5 contextInfo:(void *)arg6;
- (BOOL)_addQueuedQuery:(id)arg1 inNodes:(id)arg2 inDocSets:(id)arg3 withMatchType:(unsigned long long)arg4 usingSingularDelegateMethod:(BOOL)arg5 delegate:(id)arg6 contextInfo:(void *)arg7;
- (void)processResults:(id)arg1;
- (void)startSearch;
- (void)removeSearchObjectForDocSet:(id)arg1;
- (id)searchObjectForDocSet:(id)arg1;
- (id)init;

@end