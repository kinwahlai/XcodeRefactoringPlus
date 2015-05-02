//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3TargetTemplateOptionsAssistant : IDETemplateOptionsAssistant <IDECompletionDestinationDelegate>
{
    NSPopUpButton *_destinationPopUp;
    IDECompletionDestinationManager *_destinationManager;
    NSPopUpButton *_targetPopUp;
    Xcode3Target *_selectedTarget;
    NSString *_suggestedProductName;
    NSArray *_associatedTargetAllowableProductTypes;
    BOOL _associatedTargetIsDependent;
    BOOL _associatedTargetIsTargetToBeTested;
    BOOL _associatedTargetNeedsProductBuildPhaseInjection;
    NSString *_associatedTargetPopUpTitle;
    NSString *_associatedTargetPopUpDescription;
    NSMutableDictionary *_prevOptionValuesFromConstraints;
    Xcode3TargetChooserViewController *_blueprintChooser;
}

+ (id)keyPathsForValuesAffectingCanFinish;
@property(retain) Xcode3TargetChooserViewController *blueprintChooser; // @synthesize blueprintChooser=_blueprintChooser;
- (void).cxx_destruct;
- (id)targetWorkspacesForDestinationManager:(id)arg1;
- (void)destinationManagerWorkspaceDidChange:(id)arg1;
- (void)destinationManagerGroupDidChange:(id)arg1;
- (BOOL)destinationManager:(id)arg1 shouldAddItemToMenu:(id)arg2;
- (void)restoreSelectionFromUserDefaults;
- (void)setAssistantContext:(id)arg1;
- (void)takeSelectedTargetFromMenuItem:(id)arg1;
- (void)updateOptionConstraints;
- (void)rebuildTargetPopupIfNeeded;
- (void)updateDefaultPackageName;
- (void)updateClassPrefix;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)alwaysShowFinish;
- (BOOL)canFinish;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (BOOL)validatePackageName:(id)arg1 error:(id *)arg2;
- (void)viewWillUninstall;
- (BOOL)itemIsProject:(id)arg1;
- (id)createControlForOption:(id)arg1;
- (id)additionalOptions;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end