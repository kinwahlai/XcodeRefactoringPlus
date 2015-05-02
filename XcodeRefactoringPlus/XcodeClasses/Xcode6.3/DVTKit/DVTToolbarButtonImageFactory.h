//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTToolbarButtonImageFactory : NSObject
{
    struct CGSize _sizeWithoutHighlight;
    NSImage *_templateImageForButton;
    struct CGSize _size;
}

+ (id)imageFactoryWithToolbarSize:(struct CGSize)arg1;
@property(retain, nonatomic) NSImage *templateImageForButton; // @synthesize templateImageForButton=_templateImageForButton;
@property(readonly) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)_buttonImageWithRect:(struct CGRect)arg1 gradient:(id)arg2 innerShadow:(id)arg3;
- (void)_drawButtonImageInRect:(struct CGRect)arg1 withGradient:(id)arg2 innerShadow:(id)arg3;
- (id)_inactiveOrDisabledInnerShadow;
- (id)_activeAlternateInnerShadow;
- (id)_activeInnerShadow;
- (id)imageInsetDisabled;
- (id)imageAlternatePressed;
- (id)imageAlternate;
- (id)_pressedImageForImage:(id)arg1 tintAlpha:(double)arg2;
- (id)imagePressed;
- (id)imageNatural;
- (struct CGSize)sizeWithoutHighlight;
- (struct CGRect)rectWithHighlight;
- (struct CGRect)naturalRect;
- (id)initWithSize:(struct CGSize)arg1;

@end