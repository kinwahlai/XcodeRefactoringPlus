//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEPlaygroundLoggerScopeBoundary : NSObject <IDEPlaygroundLoggerLogEntry>
{
    unsigned long long _scopeBoundaryType;
}

@property unsigned long long scopeBoundaryType; // @synthesize scopeBoundaryType=_scopeBoundaryType;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *summary;
@property(readonly, copy) NSString *name;
- (id)initWithScopeBoundaryType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end