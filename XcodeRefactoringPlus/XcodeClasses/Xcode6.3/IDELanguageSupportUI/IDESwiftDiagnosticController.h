//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESwiftDiagnosticController : IDEDiagnosticController
{
    NSMutableArray *_diagnosticItems;
    unsigned long long _diagnosticLevel;
    NSArray *_mostRecentDiagnosticItems;
    unsigned long long _mostRecentDiagnosticLevel;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)diagnose;
- (id)initWithDataSource:(id)arg1;

@end