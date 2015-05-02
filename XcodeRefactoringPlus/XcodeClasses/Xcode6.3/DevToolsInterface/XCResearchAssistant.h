//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCResearchAssistant : NSObject
{
    XCAPIQueries *m_APIQueries;
    BOOL _performanceTestsEnabled;
    BOOL _fetchInProgress;
}

+ (void)runBuildSettingsTests:(id)arg1;
+ (void)runPerformanceTests:(id)arg1;
+ (void)_reportEnvironment;
+ (id)_hardwareProfile;
+ (void)_turnOnPerfLogging;
+ (void)_runQueries:(id)arg1 queryHelper:(id)arg2;
+ (id)_queriesForBuildSettingsTesting:(id)arg1;
+ (id)_queriesForPerformanceTesting:(id)arg1;
+ (void)showTokenReferenceForQuery:(id)arg1;
+ (void)_openDocWindowAtURL:(id)arg1 docSet:(id)arg2;
+ (void)showHeaderFileAtSymbol:(id)arg1;
+ (BOOL)_openHeaderFileAtSymbol:(id)arg1;
+ (void)close;
+ (void)activateFromHelpMenu;
+ (id)sharedResearchAssistant;
+ (BOOL)showResearchAssistantWithProjects;
+ (BOOL)isResearchAssistantAvailableForUpdate;
+ (BOOL)isResearchAssistantVisible;
+ (void)initialize;
@property(retain, nonatomic) XCAPIQueries *APIQueries; // @synthesize APIQueries=m_APIQueries;
- (void)_projectDidClose:(id)arg1;
- (void)startFetchForQuery:(id)arg1;
- (id)APIQueryHelper;
- (void)dealloc;

@end