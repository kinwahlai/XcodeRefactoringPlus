//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXCornerView : PBXImageGestureView
{
    NSCell *_drawCell;
    BOOL _drawEndSeparator;
}

- (BOOL)_drawingEndSeparator;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)fillRect;
- (id)enclosingScrollView;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initDrawingEnd:(BOOL)arg1;

@end