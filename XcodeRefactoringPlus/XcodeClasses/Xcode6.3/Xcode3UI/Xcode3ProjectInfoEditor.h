//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3ProjectInfoEditor : IDEViewController <Xcode3SourceListItemEditor, NSTableViewDelegate, NSTableViewDataSource, NSOutlineViewDelegate, NSOutlineViewDataSource, IDECapsuleListViewDataSource>
{
    Xcode3ProjectEditor *_projectEditor;
    id <IDEBlueprint> _inspectedBlueprint;
    PBXProject *_pbxProject;
    NSArray *_localizations;
    NSMutableDictionary *_localizationFileCount;
    NSTimer *_localizationReloadTimer;
    NSView *_noTargetsLozengeHolder;
    DVTLozengeTextField *_noTargetsLozengeTextField;
    BOOL _noTargetsFound;
    BOOL _applicationTargetPresent;
    BOOL _iPhoneTargetPresent;
    NSArray *_configurations;
    NSMutableArray *_configFileBasedOnList;
    NSMutableArray *_configurationRootTreeNodes;
    id _configurationBasedOnCell;
    NSMenu *_configurationFilePopUpMenu;
    NSTextFieldCell *_configurationSummaryCell;
    DVTImageAndTextCell *_configurationTextAndImageCell;
    IDECapsuleListView *_capsuleView;
    DVTStackView_ML *_projectInfoContentView;
    IDEViewController<IDECapsuleViewController> *_projectSettingsViewController;
    IDEViewController<IDECapsuleViewController> *_localizationsViewController;
    IDEViewController<IDECapsuleViewController> *_configurationsViewController;
    DVTBorderedView *_configurationsBorder;
    DVTBorderedView *_localizationsBorder;
    NSView *_iOSDeploymentTargetContainer;
    NSView *_OSXDeploymentTargetContainer;
    NSView *_configurationsContentView;
    DVTOutlineView *_configurationsOutlineView;
    DVTGradientImageButton *_removeConfigurationButton;
    DVTGradientImagePopUpButton *_addConfigurationButton;
    NSButton *_internationalizationCheckBox;
    NSView *_localizationsContentView;
    DVTTableView *_localizationsTableView;
    DVTGradientImagePopUpButton *_addLocalizationsButton;
    DVTGradientImageButton *_deleteLocalizationsButton;
    NSComboBox *_deploymentOSMacCombo;
    NSComboBox *_deploymentOSiPhoneCombo;
    NSPopUpButton *_defaultConfigurationPopup;
    NSTextField *_deploymentOSMacLabel;
    DVTPerformanceMetric *_metric;
    NSArray *_baseDestinationLocales;
    NSView *_baseLocalizationAccessoryView;
    DVTLocale *_baseDestinationLocale;
}

+ (id)localizedSourceListItemEditorName;
+ (BOOL)canInspectBlueprint:(id)arg1;
+ (void)initialize;
@property(retain) DVTLocale *baseDestinationLocale; // @synthesize baseDestinationLocale=_baseDestinationLocale;
@property NSView *baseLocalizationAccessoryView; // @synthesize baseLocalizationAccessoryView=_baseLocalizationAccessoryView;
@property(readonly) NSArray *configurations; // @synthesize configurations=_configurations;
@property(readonly) NSArray *configFileBasedOnList; // @synthesize configFileBasedOnList=_configFileBasedOnList;
@property(retain) NSArray *localizations; // @synthesize localizations=_localizations;
@property(retain, nonatomic) id <IDEBlueprint> inspectedBlueprint; // @synthesize inspectedBlueprint=_inspectedBlueprint;
@property(retain) Xcode3ProjectEditor *projectEditor; // @synthesize projectEditor=_projectEditor;
- (void).cxx_destruct;
@property(copy) NSString *defaultConfiguration;
- (void)iOSProjectDeploymentOSChanged:(id)arg1;
- (void)macOSProjectDeploymentOSChanged:(id)arg1;
@property(copy) id iOSProjectDeploymentOS;
@property(readonly) NSArray *iOSProjectDeploymentOSVersions;
@property(copy) id macOSProjectDeploymentOS;
@property(readonly) NSArray *macOSProjectDeploymentOSVersions;
- (void)changeIPhoneBaseSDK:(id)arg1;
- (void)changeMacOSXBaseSDK:(id)arg1;
- (void)internationalize:(id)arg1;
- (void)_showLocalizationSheetForPriorOS;
- (void)deleteLocalization:(id)arg1;
- (void)chooseLocalizationFromMenu:(id)arg1;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)deleteConfiguration:(id)arg1;
- (void)addConfiguration:(id)arg1;
- (void)addConfigurationFromEditorMenu:(id)arg1;
- (void)beginSheetModalUsingAlert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)alertWithCompletionBlockDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)buildSettingDidChange:(id)arg1;
- (void)projectNameDidChange:(id)arg1;
- (void)referenceWillBeRemovedFromProject:(id)arg1;
- (void)referenceWasRenamedInProject:(id)arg1;
- (void)referenceWasAddedToProject:(id)arg1;
- (void)targetWillBeRemovedFromProject:(id)arg1;
- (void)targetWasAddedToProject:(id)arg1;
- (void)configurationsDidChange:(id)arg1;
- (void)buildConfigurationSettingDidChange:(id)arg1;
- (void)selectLocations:(id)arg1;
- (void)resizeStackViewChildViews;
- (void)resizeTableView:(id)arg1 borderedView:(id)arg2;
- (void)loadView;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)_targetForAction:(SEL)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_removeBaseLocalization;
- (void)_removeLocalization:(id)arg1;
- (void)_showLocalizationsSheetForNewLocale:(id)arg1;
- (void)_convertLocalizationVariantGroups:(id)arg1 toLocalization:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_convertVariantFileReference:(id)arg1 localizationVariantGroup:(id)arg2 toLocalization:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_convertFileAtPath:(id)arg1 toDefaultFileTypeForVariantGroup:(id)arg2 locale:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_loadDocumentAtPath:(id)arg1 ofType:(id)arg2;
- (void)_localizationReloadTimerAction:(id)arg1;
- (void)_restartLocalizationReloadTimer;
- (void)_updateInternationalization;
- (void)_updateLocalizations;
- (void)_updateAddLocalizationMenu;
- (void)setBaseDestinationLocales:(id)arg1;
@property(readonly) NSArray *baseDestinationLocales; // @synthesize baseDestinationLocales=_baseDestinationLocales;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)_duplicateConfigurationNamed:(id)arg1;
- (void)_updateConfigurations;
- (void)_renameConfigurationAtNode:(id)arg1 to:(id)arg2;
- (void)_updateConfigurationAddMenu;
- (id)_indexOfConfigurationBasedOnMenuItemForFileReference:(id)arg1;
- (void)_updateConfigurationBasedOnFiles;
- (void)_removeConfigurationBasedOnFile:(id)arg1;
- (void)_addConfigurationBasedOnFile:(id)arg1;
- (id)_longTitleForFileRef:(id)arg1;
- (id)_shortTitleForFileRef:(id)arg1;
- (void)_removeTargetFromConfigurationsTree:(id)arg1;
- (void)_subscribeToBuildConfigurationChangeNotificationsForTarget:(id)arg1;
- (void)_unsubscribeFromBuildConfigurationChangeNotificationsForTarget:(id)arg1;
- (void)_subscribeToBuildConfigurationChangeNotificationsForProject:(id)arg1;
- (void)_unsubscribeFromBuildConfigurationChangeNotificationsForProject:(id)arg1;
- (void)_updateSDKAndDeployment;
- (void)_reloadSDKAndDeploymentBuildSettings;
- (id)_noTargetsLozengeView;
- (id)_applicationPlatformNames;
- (id)_iPhonePlatformNames;
- (id)project;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly) struct CGRect currentSelectionFrame;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inspectedBlueprints;
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly, nonatomic) DVTSourceExpression *selectedExpression;
@property(readonly) Class superclass;

@end