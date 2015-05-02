//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESigningIdentityDescription : NSObject
{
    BOOL _canExport;
    BOOL _canRevoke;
    NSString *_name;
    id _certificateRefMasqueradingAsAnObject;
    unsigned long long _certificateType;
    NSString *_platform;
    NSString *_platformHumanFriendly;
    DVTDeveloperAccount *_account;
    NSString *_teamID;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) BOOL canRevoke; // @synthesize canRevoke=_canRevoke;
@property(nonatomic) BOOL canExport; // @synthesize canExport=_canExport;
@property(copy) NSString *teamID; // @synthesize teamID=_teamID;
@property(retain, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(copy) NSString *platformHumanFriendly; // @synthesize platformHumanFriendly=_platformHumanFriendly;
@property(copy) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) unsigned long long certificateType; // @synthesize certificateType=_certificateType;
@property(retain, nonatomic) id certificateRefMasqueradingAsAnObject; // @synthesize certificateRefMasqueradingAsAnObject=_certificateRefMasqueradingAsAnObject;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)tooltip;
- (id)statusDescription;
- (long long)compare:(id)arg1;

@end