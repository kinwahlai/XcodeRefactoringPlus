//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEExplicitlyDrivenValueHistoryToy : IDEValueHistoryToy
{
    id <IDEToyRegistrationToken> _registrationToken;
    NSString *_subjectIdentifier;
}

@property(readonly, copy) NSString *subjectIdentifier; // @synthesize subjectIdentifier=_subjectIdentifier;
- (void).cxx_destruct;
- (void)setToybox:(id)arg1;
- (BOOL)shouldDisplayInTimeline;
- (id)initWithSubjectIdentifier:(id)arg1;
- (id)init;

@end