//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCIncrementalFinder : PBXModule
{
    NSString *_findString;
    NSString *_replaceString;
    NSString *_statusString;
    PBXModule<PBXIncrementalFindable> *_findDelegate;
    NSTextView *_textView;
    NSArray *_originalSelectedRanges;
    DTRangeArray *_foundRanges;
    NSTextView *_fieldEditor;
    NSDictionary *_cachedFoundTextAttributes;
    NSObjectController *_incrementalFinderController;
    NSPopUpButton *_finderModePopUpButton;
    NSSearchField *_findStringField;
    NSTextField *_replaceStringField;
    NSMenu *_findStringFieldMenuTemplate;
    NSSegmentedControl *_segmentedControl;
    NSTextField *_statusField;
    NSButton *_replaceButton;
    NSButton *_replaceAndFindButton;
    NSButton *_replaceAllButton;
    NSButton *_dismissButton;
    NSView *_replaceModeView;
    struct _XCIncrementalFinderFlags _ifFlags;
}

+ (id)_defaultFoundTextAttributes;
+ (void)setDefaultFindType:(long long)arg1;
+ (long long)defaultFindType;
+ (void)setDefaultWrapText:(BOOL)arg1;
+ (BOOL)defaultWrapText;
+ (void)setDefaultIgnoresCase:(BOOL)arg1;
+ (BOOL)defaultIgnoresCase;
+ (void)setDefaultMatchStyle:(int)arg1;
+ (int)defaultMatchStyle;
+ (void)initialize;
@property(nonatomic) PBXModule<PBXIncrementalFindable> *findDelegate; // @synthesize findDelegate=_findDelegate;
@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
- (BOOL)validateLocalMenuItem:(id)arg1;
- (void)changeMatchStyle:(id)arg1;
- (void)toggleWrapAround:(id)arg1;
- (void)toggleSelectedText:(id)arg1;
- (void)toggleFindIgnoresCase:(id)arg1;
- (void)changeFindType:(id)arg1;
- (void)PBX_showGotoPanel:(id)arg1;
- (void)replaceAll:(id)arg1;
- (BOOL)_replaceAll;
- (void)replaceAndFindPrevious:(id)arg1;
- (void)replaceAndFindNext:(id)arg1;
- (void)replace:(id)arg1;
- (BOOL)_replaceCurrent:(struct _NSRange *)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)_findWithDelegateBackwards:(BOOL)arg1;
- (void)_incrementalSettingsDidChange:(id)arg1;
- (void)_globalReplaceStringDidChange:(id)arg1;
- (void)_globalFindStringDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)_endedEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)_dismissButtonAction:(id)arg1;
- (void)_replaceAllButtonAction:(id)arg1;
- (void)_replaceAndFindButtonAction:(id)arg1;
- (void)_replaceButtonAction:(id)arg1;
- (void)_segmentedControlAction:(id)arg1;
- (void)_findStringFieldMenuItemAction:(id)arg1;
- (void)_replaceStringFieldAction:(id)arg1;
- (void)_findStringFieldAction:(id)arg1;
- (void)textViewWasEdited:(id)arg1;
- (id)module:(id)arg1 willReturnFieldEditorForWindow:(id)arg2 toObject:(id)arg3;
- (void)_textEditorColorsChanged:(id)arg1;
- (void)_invalidateCachedFoundTextAttributes;
@property(readonly, nonatomic) NSDictionary *foundTextAttributes;
- (void)_makeSureFirstResultWasSelected;
- (void)selectPreviousFoundRange:(id)arg1;
- (void)selectNextFoundRange:(id)arg1;
- (void)_selectPreviousFoundRangeForRange:(struct _NSRange)arg1;
- (void)selectFirstFoundRange;
- (void)_selectNextFoundRangeForRange:(struct _NSRange)arg1;
- (BOOL)_canSelectPreviousFoundRangeForRange:(struct _NSRange)arg1;
- (BOOL)_canSelectNextFoundRangeForRange:(struct _NSRange)arg1;
- (long long)_indexOfPreviousFoundRangeForRange:(struct _NSRange)arg1;
- (long long)_indexOfNextFoundRangeForRange:(struct _NSRange)arg1;
- (long long)indexOfSelectedFoundRange;
- (void)selectFoundRangeAtIndex:(long long)arg1;
- (void)_clearFoundRanges;
- (void)update;
@property(readonly, nonatomic) long long numberOfFoundRanges;
@property(readonly, nonatomic) NSArray *foundRanges;
- (void)performFirstFind;
- (void)performFind;
- (BOOL)_isPerformFindDisabled;
- (void)_enablePerformFind;
- (void)_disablePerformFind;
- (struct _NSRange)_selectedRange;
- (id)_textViewToSearchIn;
- (void)resetFindAnchor;
- (void)selectField:(id)arg1;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)windowDidUpdate:(id)arg1;
- (void)viewWillBeRemoved;
- (void)viewWasInstalled;
- (void)viewDidLoad;
@property(nonatomic) long long finderMode;
- (void)_sizeToFit;
@property(nonatomic) BOOL replaceInSelectedText;
@property(nonatomic) int matchStyle;
@property(nonatomic) BOOL findWraps;
@property(nonatomic) BOOL findIgnoresCase;
@property(nonatomic) long long findType;
- (void)_setStatusNumberOfReplacements:(unsigned long long)arg1;
- (void)_setStatusCanNotReplace;
@property(copy, nonatomic) NSString *replaceString;
@property(copy, nonatomic) NSString *findString;
- (void)dealloc;
- (id)init;

@end