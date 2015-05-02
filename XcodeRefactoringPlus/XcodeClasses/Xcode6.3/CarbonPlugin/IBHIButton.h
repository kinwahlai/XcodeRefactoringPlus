//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHIButton : IBHIView
{
    int iconPosition;
    int buttonType;
    NSString *title;
    int contentResID;
    int contentType;
}

+ (id)supportedContentTypes;
- (void)setContentType:(int)arg1;
- (int)contentType;
- (void)customizeView:(struct OpaqueControlRef *)arg1;
- (struct OpaqueControlRef *)createViewInWindow:(struct OpaqueWindowPtr *)arg1 withFrame:(struct CGRect)arg2;
- (void)setIconPosition:(int)arg1;
- (int)iconPosition;
- (void)setContentResID:(int)arg1;
- (int)contentResID;
- (void)setButtonType:(int)arg1;
- (int)buttonType;
- (void)setTitle:(id)arg1;
- (id)title;
- (BOOL)supportsControlSize:(unsigned short)arg1;
- (void)buildDesignTimeCodingDescription:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct _NSRect)arg1;

@end