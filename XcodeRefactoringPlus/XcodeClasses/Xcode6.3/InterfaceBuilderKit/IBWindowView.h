//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBWindowView : NSView
{
    NSWindow *windowToMimic;
}

- (void)drawRect:(struct CGRect)arg1;
- (id)windowShadow;
- (void)sizeToFit;
- (double)shadowOutset;
- (id)windowToMimic;
- (void)setWindowToMimic:(id)arg1;
- (void)dealloc;

@end