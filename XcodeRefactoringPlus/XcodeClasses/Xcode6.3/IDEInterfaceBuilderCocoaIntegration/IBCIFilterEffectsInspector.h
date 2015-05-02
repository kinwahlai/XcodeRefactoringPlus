//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBCIFilterEffectsInspector : IBInspectorViewController
{
    NSMutableDictionary *defaultFiltersByFilterName;
    CIFilter *editedFilter;
    BOOL viewIsInstalled;
}

+ (id)keyPathsForValuesAffectingInspectedView;
@property(retain, nonatomic) CIFilter *editedFilter; // @synthesize editedFilter;
- (void).cxx_destruct;
- (id)defaultFilterForFilterName:(id)arg1;
- (id)filterNamesInCategories:(id)arg1;
- (id)inspectorXMLForFilter:(id)arg1;
- (id)boundFilterKeyPathPrefix;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)editedFilterAttributeDidChange:(id)arg1;
- (void)stopObservingFilter:(id)arg1;
- (void)startObservingFilter:(id)arg1;
- (BOOL)canEditFilterInputImage;
@property(readonly) NSView *inspectedView;

@end