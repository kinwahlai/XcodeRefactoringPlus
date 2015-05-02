//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEBatchFindable : NSOperation
{
    NSArray *_findResults;
    DVTFindDescriptor *_findDescriptor;
    IDEBatchFindCandidateFile *_file;
    NSError *_error;
    IDEWorkspace *_workspace;
}

+ (BOOL)findableCanHandleFile:(id)arg1 forFindDescriptor:(id)arg2;
+ (id)findableForFindDescriptor:(id)arg1 onFile:(id)arg2 inWorkspace:(id)arg3;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(copy) NSError *error; // @synthesize error=_error;
@property(readonly) IDEBatchFindCandidateFile *file; // @synthesize file=_file;
@property(readonly) DVTFindDescriptor *findDescriptor; // @synthesize findDescriptor=_findDescriptor;
@property(readonly) NSArray *findResults; // @synthesize findResults=_findResults;
- (void).cxx_destruct;
- (void)setDVTFindResults:(id)arg1;
@property(readonly) BOOL shouldFallbackToDocumentFindable;
@property(readonly) BOOL requiresMainThreadAccess;
- (id)initWithFindDescriptor:(id)arg1 onFile:(id)arg2 inWorkspace:(id)arg3;

@end