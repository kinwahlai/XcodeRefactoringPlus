//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIBotIntegrationTestPopoverBadgesView : NSView
{
    unsigned long long _passedTests;
    unsigned long long _failedTests;
    unsigned long long _issues;
    XCSUIBotIntegrationPopoverStatusBadgeView *_testsPassedBadgeView;
    XCSUIBotIntegrationPopoverStatusBadgeView *_testsFailedBadgeView;
}

@property __weak XCSUIBotIntegrationPopoverStatusBadgeView *testsFailedBadgeView; // @synthesize testsFailedBadgeView=_testsFailedBadgeView;
@property __weak XCSUIBotIntegrationPopoverStatusBadgeView *testsPassedBadgeView; // @synthesize testsPassedBadgeView=_testsPassedBadgeView;
- (void).cxx_destruct;
- (void)updateBadgesWithTestsPassed:(unsigned long long)arg1 testsFailed:(unsigned long long)arg2;

@end