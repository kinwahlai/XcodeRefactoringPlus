//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDENavBar : DVTLayoutView_ML <DVTInvalidation>
{
    DVTBorderedView *_pathBorderedView;
    IDEPathControl *_pathControl;
    IDEControlGroup *_leftControlGroup;
    IDEControlGroup *_rightControlGroup;
    int _borderSides;
    BOOL _isGrouped;
}

+ (id)inactiveTextColorForGradientStyle:(int)arg1;
+ (id)textColorForGradientStyle:(int)arg1;
+ (id)interiorHighlightColorForGradientStyle:(int)arg1;
+ (id)inactiveInteriorBorderColorForGradientStyle:(int)arg1;
+ (id)interiorBorderColorForGradientStyle:(int)arg1;
+ (id)inactiveBackgroundGradientForGradientStyle:(int)arg1;
+ (id)backgroundGradientForGradientStyle:(int)arg1;
+ (id)inactiveBorderColorForGradientStyle:(int)arg1;
+ (id)borderColorForGradientStyle:(int)arg1;
+ (void)initialize;
@property BOOL isGrouped; // @synthesize isGrouped=_isGrouped;
@property(retain) IDEControlGroup *rightControlGroup; // @synthesize rightControlGroup=_rightControlGroup;
@property(retain) IDEPathControl *pathControl; // @synthesize pathControl=_pathControl;
@property(retain) IDEControlGroup *leftControlGroup; // @synthesize leftControlGroup=_leftControlGroup;
@property(nonatomic) int borderSides; // @synthesize borderSides=_borderSides;
- (void).cxx_destruct;
- (void)refreshColorsForXcode5UI:(BOOL)arg1;
- (void)_updateFocusStyleForGradientStyle:(int)arg1;
- (void)makeUnfocusedStyle;
- (void)makeFocusedStyle;
- (struct CGRect)grabRect;
- (void)primitiveInvalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_controlGroupDidChange:(id)arg1;
- (void)_IDENavBarSharedInit;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)_updateBorderSidesForSubviews;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end