//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTCrashPointFilter : NSObject <NSCopying, DVTServicesFilenameSerialization>
{
    long long _filterType;
    NSString *_filter;
}

+ (id)objectFromFilenameRepresentation:(id)arg1 error:(id *)arg2;
+ (id)emptyFilter;
@property(readonly) NSString *filter; // @synthesize filter=_filter;
@property(readonly) long long filterType; // @synthesize filterType=_filterType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)filenameRepresentation;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithFilterType:(long long)arg1 filter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end