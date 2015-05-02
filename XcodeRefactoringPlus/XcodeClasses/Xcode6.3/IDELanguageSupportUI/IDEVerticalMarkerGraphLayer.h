//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEVerticalMarkerGraphLayer : DVTAbstractGraphLayer
{
    BOOL _shouldDraw;
    double _xPosition;
    NSColor *_markerColor;
}

@property BOOL shouldDraw; // @synthesize shouldDraw=_shouldDraw;
@property(retain) NSColor *markerColor; // @synthesize markerColor=_markerColor;
@property double xPosition; // @synthesize xPosition=_xPosition;
- (void).cxx_destruct;
- (struct CGRect)_markerRectForVisibleGraphBounds:(struct _DVTGraphBounds)arg1;
- (void)drawLayerWithVisibleBounds:(struct _DVTGraphBounds)arg1;
- (id)initWithGraph:(id)arg1;

@end