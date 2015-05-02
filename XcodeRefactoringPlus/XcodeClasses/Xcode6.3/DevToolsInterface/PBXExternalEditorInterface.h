//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXExternalEditorInterface : NSObject
{
    NSMutableDictionary *_externalEditors;
    NSStatusItem *_statusItem;
    BOOL _checkedForExternalEditors;
}

+ (id)sharedInterface;
- (void)_setStatusItem:(id)arg1;
- (id)_statusItem;
- (void)_setExternalEditors:(id)arg1;
- (id)externalEditors;
- (void)saveAll:(id)arg1;
- (void)buildAndDebug:(id)arg1;
- (void)buildAndRun:(id)arg1;
- (void)build:(id)arg1;
- (void)activatePB:(id)arg1;
- (void)_reallyMakeFirstResponderPerformSelectorFromString:(id)arg1;
- (void)_makeFirstResponderPerformSelectorFromString:(id)arg1;
- (void)deactivateStatusMenu;
- (void)activateStatusMenu;
- (id)modifiedDocumentsFromExternalEditors;
- (void)addEditor:(id)arg1;
- (id)editorWithGenericName:(id)arg1;
- (id)editorWithName:(id)arg1;
- (id)activeExternalEditors;
- (BOOL)hasEditors;
- (id)editorForBookmark:(id)arg1;
- (BOOL)claimsFile:(id)arg1;
- (BOOL)claimsEditor:(id)arg1;
- (id)externalEditorsMenuWithTarget:(id)arg1;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)_registerForApplicationNotifications;
- (void)packEditorListToUserDefaults;
- (void)autodiscoverInstalledEditors;
- (void)unpackEditorListFromUserDefaults;
- (void)setCheckedForExternalEditors:(BOOL)arg1;
- (BOOL)checkedForExternalEditors;

@end