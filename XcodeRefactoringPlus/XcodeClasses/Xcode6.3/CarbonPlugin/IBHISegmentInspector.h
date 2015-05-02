//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHISegmentInspector : IBHIInspector
{
    NSTextField *titleTextField;
    NSTextField *valueTextField;
    NSPopUpButton *selectionBehaviorPopUp;
    IBHICommandSelector *commandSelector;
    NSButton *enabledCheckBox;
    NSButton *sendCommandToUserFocusedCheckBox;
    NSButton *autoWidthCheckBox;
    NSTextField *widthTextField;
    IBHIResourceSelector *resourceSelector;
}

- (void)bindResourceSelectorWidget:(id)arg1 toKeyPath:(id)arg2 ofType:(int)arg3;
- (void)awakeFromNib;

@end