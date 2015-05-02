//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYReplayController : NSObject
{
    struct dispatch_queue_s *queue;
    DYTransport *transport;
    DYTransportSource *source;
    DYTransportMessage *replayMessage;
    CDUnknownBlockType origSourceMessageHandler;
    DYCaptureArchiveStack *archiveStack;
    DYPlaybackEngine *playbackEngine;
    id <DYReplayControllerSupport> replayControllerSupport;
    NSMutableArray *experiments;
}

+ (id)sharedController;
@property(retain, nonatomic) NSMutableArray *experiments; // @synthesize experiments;
@property(retain, nonatomic) id <DYReplayControllerSupport> replayControllerSupport; // @synthesize replayControllerSupport;
@property(retain, nonatomic) DYPlaybackEngine *playbackEngine; // @synthesize playbackEngine;
@property(retain, nonatomic) DYCaptureArchiveStack *archiveStack; // @synthesize archiveStack;
@property(copy, nonatomic) CDUnknownBlockType origSourceMessageHandler; // @synthesize origSourceMessageHandler;
@property(retain, nonatomic) DYTransportMessage *replayMessage; // @synthesize replayMessage;
@property(retain, nonatomic) DYTransportSource *source; // @synthesize source;
@property(retain, nonatomic) DYTransport *transport; // @synthesize transport;
@property(nonatomic) struct dispatch_queue_s *queue; // @synthesize queue;
- (void).cxx_destruct;
- (void)_replayDebugArchiveTo:(unsigned int)arg1 replyTo:(id)arg2;
- (void)_beginDebugArchive;
- (void)_playbackArchiveWithExperiment:(id)arg1 passingFuture:(id)arg2 resolvingFuture:(_Bool)arg3;
- (void)_recursivePlaybackWithFuture:(id)arg1 usingExperiment:(id)arg2 withToplevelFuture:(id)arg3;
- (id)_playbackCurrentArchiveAndExperiments;
- (BOOL)_handleArchiveLoadingForPlaybackRequest:(id)arg1 replyKind:(int)arg2;
- (void)_endPlayback;
- (void)_deleteAllArchives;
- (BOOL)_loadArchives:(id)arg1 error:(id *)arg2;
- (id)_replayerControllerSupportForCaptureStore:(id)arg1;
- (id)_archiveDirectory;
- (void)_displayPlaybackEngine;
- (void)_processMessage:(id)arg1;
- (BOOL)playbackArchive:(id)arg1;
- (BOOL)informReady;
- (BOOL)initializeTransport;
- (void)dealloc;
- (id)init;

@end