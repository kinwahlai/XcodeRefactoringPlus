//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRATextView : NSTextView
{
    BOOL _wasAcceptingMouseEvents;
}

- (void)updateLinkRollovers;
- (void)updateTrackingAreas;
- (void)mouseMoved:(id)arg1;
- (struct CGRect)adjustScroll:(struct CGRect)arg1;
- (BOOL)isEditable;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)_setupTextView;

@end