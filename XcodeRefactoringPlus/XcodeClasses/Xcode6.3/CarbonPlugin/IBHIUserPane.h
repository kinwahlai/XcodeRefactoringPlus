//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHIUserPane : IBHIView
{
    unsigned long featureBits;
}

- (void)setFeatureBits:(unsigned long)arg1;
- (unsigned long)featureBits;
- (void)drawRect:(struct _NSRect)arg1;
- (BOOL)isInTabView;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)customizeView:(struct OpaqueControlRef *)arg1;
- (struct OpaqueControlRef *)createViewInWindow:(struct OpaqueWindowPtr *)arg1 withFrame:(struct CGRect)arg2;
- (BOOL)supportsControlSize:(unsigned short)arg1;
- (void)buildDesignTimeCodingDescription:(id)arg1;

@end