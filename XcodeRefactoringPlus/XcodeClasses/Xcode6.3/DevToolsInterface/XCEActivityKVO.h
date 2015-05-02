//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCEActivityKVO : XCEActivity
{
    NSObject *_source;
    NSString *_keyPath;
}

@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain, nonatomic) NSObject *source; // @synthesize source=_source;
- (void)dealloc;
- (id)value;
- (void)setValue:(id)arg1;
- (BOOL)supportsValue;
- (void)stopBeingActive;
- (void)startBeingActive;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithSource:(id)arg1 keyPath:(id)arg2 context:(id)arg3;

@end