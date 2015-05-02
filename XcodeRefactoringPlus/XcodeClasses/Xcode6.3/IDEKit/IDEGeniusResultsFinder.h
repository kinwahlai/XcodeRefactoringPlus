//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEGeniusResultsFinder : NSObject <DVTInvalidation>
{
    DVTExtension *_extension;
    IDEWorkspaceTabController *_workspaceTabController;
    IDENavigableItemCoordinator *_navItemCoordinator;
    NSArray *_documentLocations;
    NSSet *_geniusResults;
    IDEEditorDocument *_editorDocument;
    BOOL _idle;
    DVTPerformanceMetric *_nonIdlePerformanceMetric;
}

+ (void)initialize;
+ (Class)editorDocumentClass;
@property(retain) DVTPerformanceMetric *nonIdlePerformanceMetric; // @synthesize nonIdlePerformanceMetric=_nonIdlePerformanceMetric;
@property(nonatomic) BOOL idle; // @synthesize idle=_idle;
@property(copy) NSSet *geniusResults; // @synthesize geniusResults=_geniusResults;
@property(readonly, copy) NSArray *documentLocations; // @synthesize documentLocations=_documentLocations;
@property(retain) IDEEditorDocument *editorDocument; // @synthesize editorDocument=_editorDocument;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain) DVTExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) IDEWorkspace *workspace;
- (void)_updateGeniusResults;
- (void)_primitiveSetGeniusResults:(id)arg1;
- (void)findGeniusResultsForEditorDocument:(id)arg1 selectedDocumentLocations:(id)arg2;
- (id)_initWithWorkspaceTabController:(id)arg1 navigableItemCoordinator:(id)arg2;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end