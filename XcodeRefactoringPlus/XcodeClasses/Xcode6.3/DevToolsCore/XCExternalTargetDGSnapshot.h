//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCExternalTargetDGSnapshot : XCTargetDGSnapshot
{
    NSString *_buildToolPath;
    NSString *_buildArgumentsString;
    NSString *_buildWorkingDirectory;
    BOOL _passBuildSettingsInEnvironment;
}

- (BOOL)passesBuildSettingsInEnvironment;
- (id)buildWorkingDirectory;
- (id)buildArgumentsString;
- (id)buildToolPath;
- (void)dealloc;
- (id)initWithInformationFromTarget:(id)arg1 withBuildState:(id)arg2;
- (void)computeDependenciesInTargetBuildContext:(id)arg1;

@end