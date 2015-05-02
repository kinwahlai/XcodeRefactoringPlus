//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSlatePopUpButton : IBSlateBezierButton
{
    NSMenu *menu;
    long long lastSelectedIndex;
    BOOL pullsDown;
    NSColor *menuTextColor;
    NSColor *menuBackgroundColor;
    NSColor *highlightedMenuTextColor;
    NSColor *highlightedMenuBackgroundColor;
    BOOL menuExtendsToLeft;
    BOOL showsStateImages;
    double maximumMenuWidth;
    Class labelViewClass;
}

- (void)setMaximumMenuWidth:(double)arg1;
- (double)maximumMenuWidth;
- (void)setMenuExtendsToLeft:(BOOL)arg1;
- (BOOL)menuExtendsToLeft;
- (void)setShowsStateImages:(BOOL)arg1;
- (BOOL)showsStateImages;
- (void)setHighlightedMenuBackgroundColor:(id)arg1;
- (id)highlightedMenuBackgroundColor;
- (void)setHighlightedMenuTextColor:(id)arg1;
- (id)highlightedMenuTextColor;
- (void)setMenuBackgroundColor:(id)arg1;
- (id)menuBackgroundColor;
- (void)setMenuTextColor:(id)arg1;
- (id)menuTextColor;
- (BOOL)pullsDown;
- (void)setPullsDown:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)fireActionWithEvent:(id)arg1;
- (void)popUpMenuWithEvent:(id)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (id)selectedItem;
- (id)menu;
- (void)setLabelViewClass:(Class)arg1;
- (Class)labelViewClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end