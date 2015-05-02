//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVWebViewController : NSObject
{
    DVWindow *_window;
    WVPageFindWebView *_webView;
    WVPageFindContainerView *_containerView;
    DVMainController *_mainController;
}

@property(retain) WVPageFindContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain) WVPageFindWebView *webView; // @synthesize webView=_webView;
@property(retain) DVWindow *window; // @synthesize window=_window;
@property(retain) DVMainController *mainController; // @synthesize mainController=_mainController;
- (void)makeTextSmallerOrLarger:(id)arg1;
- (void)backForwardControlClick:(id)arg1;
- (id)init;

@end