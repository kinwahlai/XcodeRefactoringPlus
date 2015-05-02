//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTApplication : NSApplication
{
    DVTHashTable *_actionMonitors;
}

+ (void)adjustApplicationIconForEnvironment:(BOOL)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)endSheet:(id)arg1 returnCode:(long long)arg2;
- (void)endSheet:(id)arg1;
- (BOOL)presentError:(id)arg1;
- (void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)massageErrorForInternalMessage:(id)arg1;
- (void)errorPresentationDidCompleteWithResultCode:(long long)arg1 context:(void *)arg2;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (id)addActionMonitorWithHandlerBlock:(CDUnknownBlockType)arg1;
- (void)_enableMainThreadLatencyCheckerWithMilliSecondsThreshholdBeforeSPOD:(unsigned long long)arg1 milliSecondsThreshholdBeforeUNSPOD:(unsigned long long)arg2 milliSecondsBetweenPings:(unsigned long long)arg3;
- (void)_really_enableMainThreadLatencyCheckerWithMilliSecondsThreshholdBeforeSPOD:(unsigned long long)arg1 milliSecondsThreshholdBeforeUNSPOD:(unsigned long long)arg2 milliSecondsBetweenPings:(unsigned long long)arg3;
- (id)nextEventMatchingMask:(unsigned long long)arg1 untilDate:(id)arg2 inMode:(id)arg3 dequeue:(BOOL)arg4;
- (void)finishLaunching;

@end