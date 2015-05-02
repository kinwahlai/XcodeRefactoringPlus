//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGUIBezierPathDecoder : NSObject
{
    BOOL _usesEvenOddFillRule;
    int _lineCapStyle;
    int _lineJoinStyle;
    NSData *_cgPathData;
    double _lineWidth;
    double _miterLimit;
    double _flatness;
    NSArray *_lineDashPattern;
    double _lineDashPhase;
}

@property double lineDashPhase; // @synthesize lineDashPhase=_lineDashPhase;
@property(retain) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property BOOL usesEvenOddFillRule; // @synthesize usesEvenOddFillRule=_usesEvenOddFillRule;
@property double flatness; // @synthesize flatness=_flatness;
@property double miterLimit; // @synthesize miterLimit=_miterLimit;
@property int lineJoinStyle; // @synthesize lineJoinStyle=_lineJoinStyle;
@property int lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain) NSData *cgPathData; // @synthesize cgPathData=_cgPathData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;

@end