//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBStructureAreaDockLabelContainer : DVTLayoutView_ML
{
    IBMutableIdentityDictionary *installedLabels;
    IBMutableIdentityDictionary *previouslyInstalledLabels;
    NSView *labelLayoutToken;
}

- (void).cxx_destruct;
- (void)layoutBottomUp;
- (void)uninstallDockLabel:(id)arg1;
- (void)installDockLabel:(id)arg1 withFrameLocator:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end