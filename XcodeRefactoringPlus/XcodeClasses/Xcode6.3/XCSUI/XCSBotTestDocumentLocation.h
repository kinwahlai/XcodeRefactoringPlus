//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSBotTestDocumentLocation : DVTDocumentLocation
{
    IDETest *_test;
    id _activityLog;
}

@property(retain) id activityLog; // @synthesize activityLog=_activityLog;
@property(retain) IDETest *test; // @synthesize test=_test;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 selectedTest:(id)arg3;

@end