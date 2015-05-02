//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol SCNLayerJSExport <JSExport>
+ (SCNLayer *)layer;
@property(nonatomic) BOOL showsStatistics;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) BOOL loops;
@property(nonatomic, getter=isPlaying) BOOL playing;
@property(nonatomic) double currentTime;
@property(nonatomic) BOOL allowsCameraControl;
@property(copy, nonatomic) NSColor *backgroundColor;
@property(retain, nonatomic) SCNScene *scene;
- (void)stop;
- (void)pause;
- (void)play;
@end