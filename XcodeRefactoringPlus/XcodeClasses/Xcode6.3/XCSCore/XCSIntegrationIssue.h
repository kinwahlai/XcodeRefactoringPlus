//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSIntegrationIssue : XCSObject
{
    NSString *_sanitizedMessage;
    unsigned long long _type;
    unsigned long long _status;
    NSString *_issueType;
    NSString *_message;
    NSString *_target;
    NSString *_testCase;
    NSData *_documentLocationData;
    NSString *_documentFilePath;
    struct NSArray *_commits;
    NSString *_integrationID;
    unsigned long long _age;
    NSString *_fixItType;
}

+ (id)integrationIssueWithType:(unsigned long long)arg1 status:(unsigned long long)arg2 issueType:(id)arg3 message:(id)arg4 target:(id)arg5 testCase:(id)arg6 documentLocationData:(id)arg7 documentFilePath:(id)arg8 commits:(struct NSArray *)arg9 integrationID:(id)arg10 age:(unsigned long long)arg11 fixItType:(id)arg12;
@property(readonly, nonatomic) NSString *fixItType; // @synthesize fixItType=_fixItType;
@property(readonly, nonatomic) unsigned long long age; // @synthesize age=_age;
@property(readonly, nonatomic) NSString *integrationID; // @synthesize integrationID=_integrationID;
@property(readonly, nonatomic) NSArray *commits; // @synthesize commits=_commits;
@property(readonly, nonatomic) NSString *documentFilePath; // @synthesize documentFilePath=_documentFilePath;
@property(readonly, nonatomic) NSData *documentLocationData; // @synthesize documentLocationData=_documentLocationData;
@property(readonly, nonatomic) NSString *testCase; // @synthesize testCase=_testCase;
@property(readonly, nonatomic) NSString *target; // @synthesize target=_target;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *issueType; // @synthesize issueType=_issueType;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)_validateType:(unsigned long long)arg1 status:(unsigned long long)arg2 issueType:(id)arg3 message:(id)arg4 target:(id)arg5 testCase:(id)arg6 documentLocationData:(id)arg7 documentFilePath:(id)arg8 commits:(struct NSArray *)arg9 integrationID:(id)arg10 age:(unsigned long long)arg11 fixItType:(id)arg12;
- (unsigned long long)hash;
- (BOOL)isEqualToIntegrationIssue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentToIssue:(id)arg1;
@property(readonly, nonatomic) NSString *sanitizedMessage; // @synthesize sanitizedMessage=_sanitizedMessage;
- (id)resolve;
- (id)unresolvedIssueInNextIntegrationWithNewIssue:(id)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithType:(unsigned long long)arg1 status:(unsigned long long)arg2 issueType:(id)arg3 message:(id)arg4 target:(id)arg5 testCase:(id)arg6 documentLocationData:(id)arg7 documentFilePath:(id)arg8 commits:(struct NSArray *)arg9 integrationID:(id)arg10 age:(unsigned long long)arg11 fixItType:(id)arg12;

@end