//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHISegmentedView : IBHIView
{
    NSMutableArray *segments;
}

+ (id)classNameForHICoder;
- (void)setNumberOfSegments:(int)arg1;
- (int)numberOfSegments;
- (void)setSegments:(id)arg1;
- (id)segments;
- (struct _NSRect)rectForSegment:(id)arg1;
- (void)customizeView:(struct OpaqueControlRef *)arg1;
- (struct OpaqueControlRef *)createViewInWindow:(struct OpaqueWindowPtr *)arg1 withFrame:(struct CGRect)arg2;
- (BOOL)supportsControlSize:(unsigned short)arg1;
- (void)buildDesignTimeCodingDescription:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct _NSRect)arg1;

@end