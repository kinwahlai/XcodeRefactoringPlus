//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SenTestProbe : NSObject
{
}

+ (void)load;
+ (void)initialize;
+ (void)runTests:(id)arg1;
+ (void)resumeAppSleep:(id)arg1;
+ (id)suspendAppSleep;
+ (void)runTestsAtUnitPath:(id)arg1 scope:(id)arg2;
+ (id)specifiedTestSuite;
+ (id)multiTestSuiteForScope:(id)arg1 inverse:(BOOL)arg2;
+ (id)testCaseNamesForScopeNames:(id)arg1;
+ (id)testedBundlePath;
+ (BOOL)isTesting;
+ (BOOL)isInverseTestScope;
+ (id)testScope;
+ (BOOL)isLoadedFromTool;
+ (BOOL)isProcessActingAsTestRig;
+ (BOOL)isLoadedFromApplication;

@end