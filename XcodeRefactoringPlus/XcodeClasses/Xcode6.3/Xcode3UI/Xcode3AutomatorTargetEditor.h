//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3AutomatorTargetEditor : IDEViewController
{
    id _targetViewController;
    DVTDisclosureView *_generalDisclosureView;
    DVTTabChooserView *_tabChooserView;
    NSView *_tabContentView;
    NSView *_inputView;
    NSView *_outputView;
    NSView *_parametersView;
    NSView *_requiredResourcesView;
    NSView *_warningView;
    NSView *_keywordsView;
    DVTTableView *_inputTypesTable;
    DVTBorderedView *_inputTypesGlassBar;
    DVTTableView *_outputTypesTable;
    DVTBorderedView *_outputTypesGlassBar;
    DVTTableView *_parametersTable;
    DVTBorderedView *_parametersGlassBar;
    DVTTableView *_requiredResourcesTable;
    DVTBorderedView *_resourcesGlassBar;
    DVTTableView *_keywordsTable;
    DVTBorderedView *_keywordsGlassBar;
}

+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property(retain, nonatomic) id targetViewController; // @synthesize targetViewController=_targetViewController;
- (void).cxx_destruct;
@property(readonly) NSDictionary *actionCategories;
- (BOOL)canRemoveKeyword;
- (void)removeKeyword:(id)arg1;
- (void)addKeyword:(id)arg1;
- (void)removeRequiredResource:(id)arg1;
- (BOOL)canRemoveRequiredResource;
- (void)addRequiredResource:(id)arg1;
- (void)removeDefaultParameter:(id)arg1;
- (BOOL)canRemoveDefaultParameter;
- (void)addDefaultParameter:(id)arg1;
- (void)removeOutputType:(id)arg1;
- (BOOL)canRemoveOutputType;
- (void)addOutputType:(id)arg1;
- (void)removeInputType:(id)arg1;
- (BOOL)canRemoveInputType;
- (void)addInputType:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(copy) NSArray *actionKeywords;
@property long long actionWarningLevel;
@property(copy) NSString *actionWarningMessage;
@property(copy) NSString *actionWarningIgnore;
@property(copy) NSString *actionWarningApply;
@property(copy) NSString *actionWarningAction;
@property(copy) NSArray *actionRequiredResources;
@property(copy) NSDictionary *actionDefaultParameters;
@property(copy) NSArray *actionOutputTypes;
@property(copy) NSArray *actionInputTypes;
@property BOOL actionInputOptional;
@property(copy) NSString *actionDescriptionRelatedActions;
@property(copy) NSString *actionDescriptionRequires;
@property(copy) NSString *actionDescriptionOptions;
@property(copy) NSString *actionDescriptionOutput;
@property(copy) NSString *actionDescriptionInput;
@property(copy) NSString *actionDescriptionAlert;
@property(copy) NSString *actionDescriptionNote;
@property(copy) NSString *actionDescriptionSummary;
@property(copy) NSString *actionIconName;
@property(copy) NSString *actionPrimaryApplication;
@property(copy) NSString *actionCategory;
- (id)_categoryKeyForValue:(id)arg1;
@property(copy) NSString *actionName;
@property(copy) NSArray *selectedTabChoices;
- (void)_setupGlassBar:(id)arg1 associatedTable:(id)arg2;
- (void)loadView;
- (id)headerFont;

@end