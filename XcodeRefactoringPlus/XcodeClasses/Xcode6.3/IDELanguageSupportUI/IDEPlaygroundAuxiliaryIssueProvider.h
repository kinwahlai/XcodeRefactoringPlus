//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEPlaygroundAuxiliaryIssueProvider : IDEIssueProvider
{
    DVTNotificationToken *_playgroundAuxIssueObserverToken;
}

+ (int)providerType;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)_filterIssuesByActiveScheme;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;

@end