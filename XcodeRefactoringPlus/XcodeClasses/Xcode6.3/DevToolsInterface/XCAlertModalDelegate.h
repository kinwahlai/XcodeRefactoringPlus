//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCAlertModalDelegate : NSObject
{
    CDUnknownBlockType _didEndBlock;
    CDUnknownBlockType _didDismissBlock;
}

@property(copy) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
@property(copy) CDUnknownBlockType didEndBlock; // @synthesize didEndBlock=_didEndBlock;
- (void)sheetDidDismiss:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;

@end