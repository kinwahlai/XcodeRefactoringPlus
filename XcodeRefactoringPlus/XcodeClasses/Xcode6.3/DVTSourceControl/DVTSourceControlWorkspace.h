//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTSourceControlWorkspace : NSObject <DVTSourceControlIdentifiable>
{
    NSMutableOrderedSet *_workingCopies;
    NSOperationQueue *_workspaceOperationQueue;
    NSString *__id;
    DVTSourceControlWorkingCopy *_primaryWorkingCopy;
    NSString *_relativePathToProject;
}

@property(copy) NSString *relativePathToProject; // @synthesize relativePathToProject=_relativePathToProject;
@property(retain) DVTSourceControlWorkingCopy *primaryWorkingCopy; // @synthesize primaryWorkingCopy=_primaryWorkingCopy;
@property(copy) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;
- (id)blueprintWithRemoteRepositories:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)workingCopiesMissingFromBlueprint:(id)arg1;
- (unsigned long long)compareToBlueprint:(id)arg1;
- (id)blueprintWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)filesAndStatusWithRemoteStatus:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)historySinceRevisionedBlueprint:(id)arg1 maximumLogItems:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)workingCopyForRemoteRepository:(id)arg1 inBlueprint:(id)arg2;
- (id)historyFromRevisions:(id)arg1 toRevisions:(id)arg2 maximumLogItems:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(readonly) NSMapTable *initialRevisionsMapTable;
@property(readonly) NSMapTable *baseRevisionsMapTable;
- (id)_revisionTableWithRevison:(id)arg1;
- (id)forceUpdateWorkingCopiesFromBlueprint:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)forceUpdateWorkingCopiesFromRepositories:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)workingCopyForRepositoryID:(id)arg1;
- (id)workingCopyForURL:(id)arg1;
- (id)initWithPrimaryWorkingCopy:(id)arg1 relativePathToProject:(id)arg2 workingCopies:(id)arg3;
- (id)initWithWorkingCopies:(id)arg1;
- (id)init;
- (void)sortWorkingCopies;
@property(readonly) NSOrderedSet *workingCopies;
- (BOOL)_isValid;
- (id)__id;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end