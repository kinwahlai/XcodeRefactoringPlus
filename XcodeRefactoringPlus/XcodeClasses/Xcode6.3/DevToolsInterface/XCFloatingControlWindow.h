//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCFloatingControlWindow : NSWindow
{
    BOOL _canBecomeKey;
    NSWindow *_contextWindow;
}

- (void)displayContextRect:(struct CGRect)arg1;
- (id)contextWindow;
- (BOOL)wantsScrollWheelEvent:(id)arg1;
- (BOOL)canBecomeKeyWindow;
- (void)setCanBecomeKey:(BOOL)arg1;
- (id)rootWindow;
- (void)resetChildChain;
- (void)printChildren:(long long)arg1;
- (void)close;

@end