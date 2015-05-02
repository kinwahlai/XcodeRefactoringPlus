//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBMutableBijectiveDictionary : NSMutableDictionary <NSCoding>
{
    DVTMapTable *keyToObjectMap;
    DVTMapTable *objectToKeyMap;
}

- (void).cxx_destruct;
- (id)keyEnumerator;
- (id)keyForObject:(id)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (void)removeKeyForObject:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (void)_IBMutableBijectiveDictionary_commonInitWithCapacity:(unsigned long long)arg1;

@end