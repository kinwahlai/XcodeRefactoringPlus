//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTTeamOperationBase : DVTPortalOperation
{
    NSString *_platform;
}

+ (id)operationWithSingleTeamToken:(id)arg1 andPlatform:(id)arg2;
+ (id)operationWithToken:(id)arg1;
+ (id)_operationWithSingleTeamToken:(id)arg1 andPlatform:(id)arg2;
+ (id)_operationsWithToken:(id)arg1;
@property(copy) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (id)description;

@end