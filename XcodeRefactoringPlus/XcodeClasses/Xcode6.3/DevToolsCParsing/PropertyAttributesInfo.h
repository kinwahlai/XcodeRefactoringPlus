//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PropertyAttributesInfo : NSObject
{
    NSString *_getterName;
    SourceLocation *_getterNameLocation;
    NSString *_setterName;
    SourceLocation *_setterNameLocation;
    NSString *_ivarName;
    BOOL _hasIvar;
    BOOL _isReadOnly;
}

- (id)description;
- (void)addIvar:(const char *)arg1;
- (void)addSetter:(const char *)arg1 location:(id)arg2;
- (void)addGetter:(const char *)arg1 location:(id)arg2;
- (id)ivarName;
- (id)setterNameLocation;
- (id)setterName;
- (id)getterNameLocation;
- (id)getterName;
- (void)setHasIvar;
- (BOOL)hasIvar;
- (void)setIsReadOnly;
- (BOOL)isReadOnly;
- (void)dealloc;

@end