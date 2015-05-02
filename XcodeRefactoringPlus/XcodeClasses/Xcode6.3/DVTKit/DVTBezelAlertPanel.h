//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTBezelAlertPanel : NSPanel
{
    NSView *_controlView;
    double _duration;
    double _fadeDuration;
    NSWindow *_eventualParent;
    NSTimer *_durationTimer;
    NSTimer *_fadeTimer;
}

+ (void)initialize;
@property double fadeDuration; // @synthesize fadeDuration=_fadeDuration;
@property double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSView *controlView; // @synthesize controlView=_controlView;
- (void).cxx_destruct;
- (void)orderOutImmediately;
- (void)orderOut:(id)arg1;
- (void)_completeOrderOut:(id)arg1;
- (void)orderFront:(id)arg1;
- (BOOL)isOpaque;
- (id)initWithIcon:(id)arg1 message:(id)arg2 controlView:(id)arg3 duration:(double)arg4;
- (id)initWithIcon:(id)arg1 message:(id)arg2 parentWindow:(id)arg3 duration:(double)arg4;
- (id)accessibilityAttributeValue:(id)arg1;

@end