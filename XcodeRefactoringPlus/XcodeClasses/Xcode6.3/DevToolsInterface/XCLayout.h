//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol XCLayout
- (void)recomputeMinimumSize;
- (struct CGSize)minSize;
- (void)layoutViews:(NSArray *)arg1 inControlView:(XCControlView *)arg2;
- (NSArray *)sortedViewsByLocation:(NSArray *)arg1;
- (NSView *)viewAtLocation:(NSObject *)arg1;
- (NSObject *)locationOfView:(NSView *)arg1;
- (void)removeView:(NSView *)arg1;
- (void)positionView:(NSView *)arg1 atLocation:(NSObject *)arg2 inSuperview:(NSView *)arg3;
- (void)positionView:(NSView *)arg1 atLocation:(NSObject *)arg2;
@end