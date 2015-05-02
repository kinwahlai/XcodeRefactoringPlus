//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEQuickHelpInspectorViewController : IDEInspectorViewController <IDEQuickHelpPlaceholderViewDelegate>
{
    IDEQuickHelpInspectorController *_inspectorController;
    DVTObservingToken *_renderedContentSizeObservingToken;
    DVTNotificationToken *_frameChangeToken;
    NSTrackingArea *_mouseTracking;
    IDEQuickHelpPlaceholderView *_placeholderView;
    WebPreferences *_webPreferences;
    WebView *_webView;
}

@property WebView *webView; // @synthesize webView=_webView;
@property(retain) IDEQuickHelpPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void).cxx_destruct;
- (void)placeholderView:(id)arg1 clickSearchButton:(id)arg2;
- (void)mouseExited:(id)arg1;
- (void)unregisterForMouseEvents;
- (void)registerForMouseEvents;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)handleLinkClickWithActionInformation:(id)arg1;
- (BOOL)inspectorIsActive;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)awakeFromNib;
- (void)_contentDidChange:(id)arg1;
- (void)_setPlaceholder:(id)arg1;
- (void)_webViewFrameDidChange:(id)arg1;
- (void)adjustInspectorHeightForContentSize:(struct CGSize)arg1;
- (void)_configurePlaceholderView;
- (void)_configureWebViewFonts;
- (void)_configureWebView;
- (void)loadView;
- (id)nibBundle;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end