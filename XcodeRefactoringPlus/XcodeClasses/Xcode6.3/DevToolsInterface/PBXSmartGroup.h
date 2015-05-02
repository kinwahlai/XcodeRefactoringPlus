//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXSmartGroup : PBXFosterParent <PBXNodeEditingProtocol, PBXUIDeletionAssistant>
{
    BOOL _autoexpand;
    PBXSmartGroupDataSource *_datasource;
    PBXProjectModule *_owningModule;
    PBXSmartGroupBinding *_binding;
    BOOL _checkIdentity;
    int _scope;
    NSArray *_fixedChildren;
    BOOL _canSave;
}

+ (id)createSmartGroupWithID:(id)arg1 withProjectDocument:(id)arg2;
- (int)scope;
- (void)setScope:(int)arg1;
- (void)uiParentWillChange;
- (BOOL)willGenerateNotifications;
- (void)deleteApplicableElements:(id)arg1 fromModule:(id)arg2;
- (void)deleteApplicableElements:(id)arg1 fromOutlineView:(id)arg2;
- (BOOL)canUngroup;
- (BOOL)canGroup;
- (BOOL)canAddToGroup;
- (BOOL)canDelete;
- (BOOL)canRename;
- (BOOL)listenForTargetChanges;
- (void)targetBuildFileRemoved:(id)arg1;
- (void)targetBuildFileAdded:(id)arg1;
- (void)targetWasAdded:(id)arg1;
- (void)targetWillBeRemoved:(id)arg1;
- (void)targetChangedNotification:(id)arg1;
- (id)children;
- (BOOL)allowsEditingOfChildren;
- (BOOL)acceptsItem:(id)arg1;
- (id)globalID;
- (BOOL)fileExists;
- (BOOL)allowsSubgroups;
- (BOOL)setName:(id)arg1 syncDisk:(BOOL)arg2;
- (void)setName:(id)arg1;
- (Class)datasourceClass;
- (id)datasource;
- (id)workspace;
- (id)projectDocument;
- (id)project;
- (id)owningModule;
- (void)setOwningModule:(id)arg1;
- (BOOL)autoexpand;
- (void)setAutoexpand:(BOOL)arg1;
- (BOOL)isUserSmartGroup;
- (BOOL)checkUniqueness;
- (void)setIconImageName:(id)arg1;
- (void)setCanSave:(BOOL)arg1;
- (BOOL)canSave;
- (void)save;
- (void)updateBinding;
- (id)binding;
- (void)dealloc;
- (id)initWithChildren:(id)arg1 datasource:(id)arg2;
- (id)initWithBinding:(id)arg1;
- (id)displayName;

@end