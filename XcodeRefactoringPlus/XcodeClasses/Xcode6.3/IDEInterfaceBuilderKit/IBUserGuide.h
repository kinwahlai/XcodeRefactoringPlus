//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUserGuide : IBAbstractUserGuide <NSCoding, IBDocumentArchiving>
{
    BOOL _dragging;
    IBLayoutGuideDrawingHandler *_layoutGuideDrawingHandler;
    NSView *_view;
    unsigned long long _affinity;
    double _location;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(nonatomic) double location; // @synthesize location=_location;
@property(nonatomic) unsigned long long affinity; // @synthesize affinity=_affinity;
@property(retain) NSView *view; // @synthesize view=_view;
@property(retain, nonatomic) IBLayoutGuideDrawingHandler *layoutGuideDrawingHandler; // @synthesize layoutGuideDrawingHandler=_layoutGuideDrawingHandler;
- (void).cxx_destruct;
- (void)invalidate;
- (void)drawOffsetIndicatorsView:(id)arg1;
- (void)drawLineInView:(id)arg1;
- (struct CGRect)maxTipRectInView:(id)arg1;
- (struct CGRect)minTipRectInView:(id)arg1;
- (struct CGRect)placementTipRectInView:(id)arg1;
- (struct CGSize)tipSizeInView:(id)arg1;
- (id)maxTip;
- (id)minTip;
- (id)attributedTip:(id)arg1;
- (double)reportedDistanceFromMaxEdge;
- (double)reportedDistanceFromMinEdge;
- (void)trackWithLeftMouseDownEvent:(id)arg1 inDocument:(id)arg2;
- (struct CGRect)hitTestingRectInView:(id)arg1;
- (void)updateWithLocationFromPoint:(struct CGPoint)arg1 andAffinity:(unsigned long long)arg2 inView:(id)arg3 inDocument:(id)arg4;
@property(readonly, copy) NSString *description;
- (BOOL)isVisible;
- (struct CGPoint)endInView:(id)arg1;
- (struct CGPoint)startInView:(id)arg1;
- (void)setDragging:(BOOL)arg1;
- (CDStruct_f6143a38)lineInView:(id)arg1;
- (id)document;
- (BOOL)isVertical;
- (struct CGRect)containerAreaInView:(id)arg1;
- (id)overlayView;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1 location:(double)arg2 andAffinity:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end