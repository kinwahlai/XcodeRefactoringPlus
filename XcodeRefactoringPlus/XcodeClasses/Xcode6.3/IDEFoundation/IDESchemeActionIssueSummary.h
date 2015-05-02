//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESchemeActionIssueSummary : NSObject
{
    NSString *_issueType;
    NSString *_message;
    NSString *_producingTarget;
    DVTDocumentLocation *_documentLocationInCreatingWorkspace;
    DVTFilePath *_creatingWorkspaceFilePath;
}

@property(retain) DVTFilePath *creatingWorkspaceFilePath; // @synthesize creatingWorkspaceFilePath=_creatingWorkspaceFilePath;
@property(copy) DVTDocumentLocation *documentLocationInCreatingWorkspace; // @synthesize documentLocationInCreatingWorkspace=_documentLocationInCreatingWorkspace;
@property(copy) NSString *producingTarget; // @synthesize producingTarget=_producingTarget;
@property(copy) NSString *message; // @synthesize message=_message;
@property(copy) NSString *issueType; // @synthesize issueType=_issueType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)documentLocationInLocalWorkspace:(id)arg1;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 creatingWorkspaceFilePath:(id)arg2;
- (id)initWithIssueType:(id)arg1 message:(id)arg2 producingTarget:(id)arg3 documentLocation:(id)arg4 creatingWorkspaceFilePath:(id)arg5;

@end