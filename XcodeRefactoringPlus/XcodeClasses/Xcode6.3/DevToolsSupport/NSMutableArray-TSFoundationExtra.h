//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSMutableArray (TSFoundationExtra)
- (void)moveObjectsFromIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)moveObjectsFromIndices:(unsigned long long *)arg1 numIndices:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)correctlyRemoveObjectsFromIndices:(unsigned long long *)arg1 numIndices:(unsigned long long)arg2;
- (void)addObjectsFromArrayIfAbsent:(id)arg1;
- (void)addObjectIfAbsent:(id)arg1;
@end