//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHIMenuItemInspector : IBBoundInspector
{
    NSButton *enabledCheckBox;
    NSButton *checkedCheckBox;
    NSButton *submenuParentChoosableCheckBox;
    NSButton *dynamicCheckBox;
    NSButton *notPreviousAlternateCheckBox;
    NSButton *hiddenCheckBox;
    NSButton *ignoreMetaCheckBox;
    NSButton *sectionHeaderCheckBox;
    NSButton *customDrawCheckBox;
    NSButton *autoRepeatCheckBox;
    NSButton *autoDisableCheckBox;
    NSButton *updateSingleItemCheckBox;
    NSButton *includeInCmdKeyMatchingCheckBox;
    NSTextField *titleTextField;
    IBKeyEquivalentEntryField *keyEquivalentEntryField;
    IBHICommandSelector *commandSelector;
}

- (void)clearKeyEquivalent:(id)arg1;
- (void)setKeyEquivalent:(id)arg1;
- (void)refresh;
- (void)awakeFromNib;

@end