//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XDShapedGraphic : XDGraphic
{
    XDShape *_shape;
}

+ (struct CGSize)_defaultMinSize;
+ (void)initialize;
- (struct CGRect)textContainer:(id)arg1 lineFragmentRectForProposedRect:(struct CGRect)arg2 sweepDirection:(unsigned long long)arg3 movementDirection:(unsigned long long)arg4 remainingRect:(struct CGRect *)arg5;
- (id)strokePath;
- (id)fillPath;
- (id)shape;
- (void)setShape:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end