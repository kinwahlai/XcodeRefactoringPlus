//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHIUserPaneInspector : IBBoundInspector
{
    NSButton *supportsGhostingCheckBox;
    NSButton *supportsEmbeddingCheckBox;
    NSButton *supportsFocusCheckBox;
    NSButton *wantsIdleCheckBox;
    NSButton *wantsActiveCheckBox;
    NSButton *handlesTrackingCheckBox;
    NSButton *supportsDataAccessCheckBox;
    NSButton *hasSpecialBackgroundCheckBox;
    NSButton *getsFocusOnClickCheckBox;
    NSButton *supportsCalcBestRectCheckBox;
    NSButton *supportsLiveFeedbackCheckBox;
    NSButton *hasRadioBehaviorCheckBox;
    NSButton *supportsDragAndDropCheckBox;
    NSButton *autoTogglesCheckBox;
    NSButton *supportsGetRegionCheckBox;
    NSButton *supportsFlatteningCheckBox;
    NSButton *supportsSetCursorCheckBox;
    NSButton *supportsContextualMenusCheckBox;
    NSButton *supportsClickActivationCheckBox;
}

- (void)awakeFromNib;

@end