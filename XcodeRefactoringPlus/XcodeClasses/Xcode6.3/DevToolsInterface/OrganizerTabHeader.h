//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface OrganizerTabHeader : NSView
{
    OrganizerTabView *tabView;
    struct CGRect *_layoutCache;
    BOOL _needsLayout;
    NSTabViewItem *_pressedTab;
}

@property OrganizerTabView *tabView; // @synthesize tabView;
- (void)mouseDown:(id)arg1;
- (void)_windowChangedKeyState;
- (id)tabViewItemAtPoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTabLabels;
- (void)_rotateCoordsForDrawLabelInRect:(struct CGRect *)arg1;
- (void)drawUnselectedTabs;
- (void)drawSelectedTab;
- (id)tabSeperatorForTabRect:(struct CGRect)arg1;
- (id)tabOutlineForTabRect:(struct CGRect)arg1;
- (void)drawContentShadow;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_layoutIfNeeded;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (id)pressedTabColor;
- (id)unselectedTabColor;
- (id)selectedTabSeperatorColor;
- (id)selectedTabColor;
- (id)headerColor;
- (id)contentShadow;
- (id)labelCell;
- (void)setNeedsLayout;
- (void)dealloc;

@end