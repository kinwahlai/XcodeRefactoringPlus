//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRootEditorHelper : NSObject <NSOpenSavePanelDelegate>
{
    XCRootsEditorModule *_rootEditor;
    NSString *_candidateRoot;
    NSWindow *_windowForSheet;
}

- (void)_rootDirPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)postRepositoryConfigurationNotFoundNotificationForPath:(id)arg1;
- (BOOL)panel:(id)arg1 shouldShowFilename:(id)arg2;
- (void)panel:(id)arg1 directoryDidChange:(id)arg2;
- (void)run;
- (void)dealloc;
- (id)initWithRootEditor:(id)arg1 candidateRoot:(id)arg2 window:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end