//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCPropertiesInspectorPaneModule : PBXInspectorPaneModule
{
    NSTextField *_executableNameTextField;
    NSTextField *_identifierTextField;
    NSButton *_openInfoPListButton;
    BOOL _beganEditingExecutableName;
    BOOL _beganEditingIdentifier;
    NSMutableArray *_selectedTargets;
}

+ (unsigned long long)panelPosition;
+ (id)alternateLabel;
+ (id)label;
+ (id)inspectableClasses;
+ (void)initialize;
- (void)openInfoPList:(id)arg1;
- (void)currentInspectedItemsChanged:(id)arg1;
- (void)viewDidLoad;
- (id)target;
- (void)dealloc;
- (id)initWithModuleNibPath:(id)arg1;
- (id)initWithModuleNibName:(id)arg1;

@end