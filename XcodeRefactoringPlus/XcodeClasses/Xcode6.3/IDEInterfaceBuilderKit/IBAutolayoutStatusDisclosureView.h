//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBAutolayoutStatusDisclosureView : NSView
{
    CDUnknownBlockType _clickHandler;
}

@property(copy, nonatomic) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (id)makeBackingLayer;
- (id)_disclosureImageWithInitialSizeHint:(struct CGRect)arg1;
- (BOOL)wantsUpdateLayer;

@end