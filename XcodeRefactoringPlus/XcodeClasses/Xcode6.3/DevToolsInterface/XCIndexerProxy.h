//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCIndexerProxy : NSObject <PBXTrackableTask, PBXProjectIndexStatusObserving>
{
    PBXProjectDocument *_owningProjectDocument;
    float _percentComplete;
    NSString *_identifier;
    NSString *_lastMessageFromIndexer;
    NSString *_localizedIndexingFormatString;
}

- (void)indexingDidStop:(id)arg1;
- (void)indexingDidComplete:(id)arg1;
- (void)indexingWillBegin:(id)arg1;
- (void)indexerDidStop:(id)arg1;
- (void)indexer:(id)arg1 willIndexFile:(id)arg2 inProject:(id)arg3 percentComplete:(long long)arg4;
- (id)taskBadge;
- (id)taskDescriptionString;
- (id)taskDisplayString;
- (id)taskIdentifier;
- (BOOL)taskCanBeStoppedManually;
- (BOOL)taskRequiresIntervention;
- (BOOL)taskStopRunning;
- (int)taskProgressType;
- (float)taskPercentComplete;
- (void)disconnect;
- (void)dealloc;
- (id)initWithProjectDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end