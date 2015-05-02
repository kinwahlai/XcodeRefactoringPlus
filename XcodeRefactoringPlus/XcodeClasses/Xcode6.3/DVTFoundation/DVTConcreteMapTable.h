//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTConcreteMapTable : DVTMapTable
{
    struct DVTSlice keys;
    struct DVTSlice values;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long keyOptions;
    unsigned long long valueOptions;
    unsigned long long mutations;
    int growLock;
    _Bool shouldRehash;
}

- (id)allValues;
- (id)allKeys;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)getKeys:(const void **)arg1 values:(const void **)arg2;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (void)removeAllItems;
- (void)removeObjectForKey:(id)arg1;
- (void)rehash;
- (unsigned long long)rehashAround:(unsigned long long)arg1;
- (void)replaceItem:(const void *)arg1 forExistingKey:(const void *)arg2;
- (BOOL)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)assign:(unsigned long long)arg1 key:(const void *)arg2 value:(const void *)arg3 isNew:(BOOL)arg4;
- (void)grow;
- (id)dump;
- (BOOL)containsKeys:(const void **)arg1 values:(const void **)arg2 count:(unsigned long long)arg3;
- (unsigned long long)count;
- (id)valuePointerFunctions;
- (id)keyPointerFunctions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3;
- (id)initWithKeyOptions:(int)arg1 valueOptions:(int)arg2 capacity:(unsigned long long)arg3;
- (id)copy;
- (void)_setBackingStore;
- (void)_initBlock;
- (void)zeroPairedEntries;
- (void)checkCount:(const char *)arg1;
- (unsigned long long)realCount;
- (void)raiseCountUnderflowException;
- (id)init;

@end