//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEWorkspaceIntegrityIssueProviderContext : NSObject
{
    IDEIssueProvider *_issueProvider;
    id <IDEIntegrityLogDataSource> _dataSource;
    unsigned long long _hash;
}

@property(readonly) id <IDEIntegrityLogDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) IDEIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIssueManager:(id)arg1 dataSource:(id)arg2;

@end