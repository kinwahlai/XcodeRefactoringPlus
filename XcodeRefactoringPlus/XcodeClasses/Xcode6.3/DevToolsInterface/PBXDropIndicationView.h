//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXDropIndicationView : PBXHeaderBox
{
    BOOL _trackingDrag;
}

- (void)drawRect:(struct CGRect)arg1;
- (BOOL)canBecomeKeyView;
- (BOOL)isOpaque;
- (void)setTrackingDrag:(BOOL)arg1;
- (id)dropIndicatorColor;

@end