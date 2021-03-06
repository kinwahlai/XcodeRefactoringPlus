//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEViewToyViewController : IDEToyViewController
{
    DVTObservingToken *_remoteViewStateObservingToken;
    DVTObservingToken *_remoteViewDescriptionObservingToken;
    NSView *_layerContainerView;
    CAPluginLayer *_pluginLayer;
    CALayer *_snapshotLayer;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)updateViewForRemoteViewSize:(struct CGSize)arg1;
- (void)loadView;
- (void)switchToLayer:(id)arg1;
- (void)setResultDisplayDate:(id)arg1;
- (double)preferredVerticalInset;
- (double)preferredHorizontalInset;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (id)titleForDisplay;
@property(readonly) IDEViewToy *viewToy;

@end