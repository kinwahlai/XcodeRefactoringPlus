//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTTextAnnotationIndicatorAnimation : NSAnimation
{
    DVTMessageBubbleView *_annotationView;
    NSWindow *_window;
    struct CGAffineTransform _originalWindowTransform;
}

@property(retain) DVTMessageBubbleView *annotationView; // @synthesize annotationView=_annotationView;
- (void).cxx_destruct;
- (void)setCurrentProgress:(float)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)_clearAnnotationIndicator;
- (void)_fadeAnnotationIndicator:(double)arg1;
- (void)_pulseAnnotationIndicator:(double)arg1;
- (id)init;

@end