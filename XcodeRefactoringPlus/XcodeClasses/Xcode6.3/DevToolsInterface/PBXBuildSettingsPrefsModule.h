//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXBuildSettingsPrefsModule : PBXPreferencesPaneModule
{
    NSMatrix *separateBuildFilesRadio;
    NSMatrix *separateProductsRadio;
    NSTextField *buildFilesLocationTextField;
    NSButton *buildFilesLocationSetButton;
    NSTextField *productsLocationTextField;
    NSButton *productsLocationSetButton;
    NSPopUpButton *savePolicyPopUp;
    NSPopUpButton *closeBuilderPolicyPopUp;
    NSPopUpButton *openBuilderPolicyPopUp;
    NSButton *continueAfterErrorsCheckbox;
    NSButton *enablePredictiveCompilationCheckbox;
    PBXCompletionManager *_completionManager;
}

- (void)popUpAction:(id)arg1;
- (void)setProductsLocationAction:(id)arg1;
- (void)_setProductDirSheetDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (void)setBuildFilesLocationAction:(id)arg1;
- (void)_setBuildFilesDirSheetDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (void)checkboxAction:(id)arg1;
- (void)textFieldAction:(id)arg1;
- (void)radioAction:(id)arg1;
- (void)initializeFromDefaults;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)_updateEnabledState:(id)arg1;
- (void)saveChanges;
- (void)viewDidLoad;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)dealloc;
- (struct CGSize)minModuleSize;

@end