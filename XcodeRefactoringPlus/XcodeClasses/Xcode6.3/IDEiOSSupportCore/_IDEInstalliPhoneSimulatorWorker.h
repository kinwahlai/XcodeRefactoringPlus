//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _IDEInstalliPhoneSimulatorWorker : IDERunOperationWorker
{
    DVTiPhoneSimulator *_device;
}

@property(retain) DVTiPhoneSimulator *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)terminate;
- (void)start;
- (void)_setFinishedRunningWithError:(id)arg1;

@end