//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXDebugSessionVerticalInfoModule : PBXDebugViewModule
{
    PBXDebugSessionModule *_debugSessionModule;
    NSView *_verticalView;
}

- (void)takeContentConfigurationFromDictionary:(id)arg1;
- (id)contentConfigurationDictionary;
- (void)takeGeometryConfigurationFromDictionary:(id)arg1;
- (id)geometryConfigurationDictionary;
- (id)nameForUserConfiguration;
- (id)versionStringKeyName;
- (id)versionStringForUserConfiguration;
- (void)viewDidLoad;
- (id)debugSessionModule;
- (void)setDebugSessionModule:(id)arg1;
- (void)dealloc;
- (id)slideOutTabIconImage;
- (id)initWithModuleNibName:(id)arg1;

@end