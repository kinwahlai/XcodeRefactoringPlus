//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXSaveMultipleModule : PBXModule
{
    NSImageView *iconView;
    PBXExtendedTableView *listTable;
    NSButton *saveButton;
    NSButton *cancelButton;
    NSButton *dontSaveButton;
    NSTextField *titleField;
    BOOL _allowsCancel;
    NSString *_iconImageName;
    NSString *_windowTitle;
    NSString *_title;
    NSString *_cancelTitle;
    NSMutableArray *_documents;
}

+ (id)sharedSaveMultipleModule;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)_refresh:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)dontSaveAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)saveAction:(id)arg1;
- (unsigned long long)runModalWithDocuments:(id)arg1 relativeToWindow:(id)arg2;
- (unsigned long long)runModalWithDocuments:(id)arg1;
- (void)saveSelectedDocuments;
- (void)updateButtons;
- (id)cancelTitle;
- (void)setCancelButtonTitle:(id)arg1;
- (BOOL)allowsCancel;
- (void)setAllowsCancel:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)windowTitle;
- (void)setWindowTitle:(id)arg1;
- (id)iconImage;
- (void)setIconImageFromName:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;
- (struct CGSize)viewMinSize;
- (id)moduleWindowFrameAutosaveName;
- (unsigned long long)moduleWindowStyleMask;
- (Class)moduleWindowClass;
- (id)loadModuleWindow;
- (void)_reset;

@end