//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSSet (IBSetAdditions)
+ (id)setByFlatteningGraph:(id)arg1 withSelector:(SEL)arg2;
+ (id)emptySet;
- (id)setByMapping:(SEL)arg1 onObject:(id)arg2;
- (id)setByMapping:(SEL)arg1 withObject:(id)arg2;
- (id)setByMapping:(SEL)arg1;
- (id)setByMappingBlock:(CDUnknownBlockType)arg1;
- (id)setByRemovingObject:(id)arg1;
- (id)setByAddingObject:(id)arg1;
- (id)setByAddingObjects:(id)arg1;
- (id)setByRemovingObjects:(id)arg1;
- (id)objectsOfClasses:(id)arg1;
- (id)objectsOfClass:(Class)arg1;
- (id)keepIf:(SEL)arg1 withObject:(id)arg2;
- (id)keepIf:(SEL)arg1;
- (id)setByKeepingIf:(CDUnknownBlockType)arg1;
- (long long)countOf:(SEL)arg1 onObject:(id)arg2;
- (long long)countOf:(SEL)arg1 withObject:(id)arg2;
- (long long)countOf:(SEL)arg1;
- (id)setByUnioningSets:(id)arg1;
- (id)setByUnioningSet:(id)arg1;
- (id)setByIntersectingSet:(id)arg1;
- (id)setBySubtractingSet:(id)arg1;
- (void)makeReceiver:(id)arg1 performSelector:(SEL)arg2;
- (void)makeObjectsPerformMutatingSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeObjectsPerformMutatingSelector:(SEL)arg1;
- (id)uniqueObjects;
- (BOOL)isAnyObject:(id)arg1;
- (BOOL)isEveryObject:(id)arg1;
- (id)onlyObject;
@end