//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEToyboxEditor : IDEEditor <IDEToyboxStackViewDelegate>
{
    id <DVTCancellable> _clipViewFillToken;
    DVTBorderedView *_editorView;
    NSScrollView *_scrollView;
    IDEToyboxStackView *_toyboxStackView;
    IDEToybox *_toybox;
    IDEPlaygroundEditor *_currentPrimaryEditor;
    DVTObservingToken *_currentPrimaryEditorObservingToken;
    DVTObservingToken *_toyboxObservingToken;
    DVTObservingToken *_toyboxExecutionInProgressObservingToken;
    DVTNotificationToken *_fontAndColorSettingsChangeObservingToken;
    NSDate *_selectedResultDisplayDate;
}

+ (id)keyPathsForValuesAffectingSelectedToy;
+ (BOOL)automaticallyNotifiesObserversOfSelectedToy;
@property(retain, nonatomic) NSDate *selectedResultDisplayDate; // @synthesize selectedResultDisplayDate=_selectedResultDisplayDate;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_fontAndColorSourceTextSettingsChanged;
- (void)viewWillUninstall;
- (void)viewDidInstall;
@property(retain, nonatomic) IDEToy *selectedToy;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end