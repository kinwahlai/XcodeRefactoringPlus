//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface iCloudScrollView : NSScrollView
{
    struct CGSize _fittingSize;
    struct CGSize _intrinsicSize;
    BOOL _intrinsicSizeIsInvalid;
}

- (void)scrollWheel:(id)arg1;
- (void)tile;
- (void)updateConstraints;
- (struct CGSize)fittingSize;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;

@end