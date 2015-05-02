//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTProduct : NSObject <DVTServicesJSONSerialization, DVTInvalidation, NSCopying>
{
    DVTProductIdentifier *_identifier;
    NSArray *_productVersions;
    DVTProductCoordinator *_coordinator;
}

+ (id)objectFromFilePath:(id)arg1 withCoordinator:(id)arg2 error:(id *)arg3;
+ (id)keyPathsForValuesAffectingCacheImageURL;
+ (id)keyPathsForValuesAffectingImageURL;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingMostRecentVersion;
+ (id)productByMergingProducts:(id)arg1 coordinator:(id)arg2;
+ (void)initialize;
@property(nonatomic) __weak DVTProductCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) NSArray *productVersions; // @synthesize productVersions=_productVersions;
@property(readonly) DVTProductIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)writeToFilePath:(id)arg1 error:(id *)arg2;
- (id)JSONRepresentation;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *cacheImageURL;
@property(readonly) NSURL *imageURL;
@property(readonly) NSString *name;
@property(readonly) NSArray *archives;
@property(readonly) NSArray *flatProductVersions;
- (void)_buildFlatproductVersionsWithVersionedProduct:(id)arg1 flatArray:(id)arg2;
@property(readonly) DVTProductVersion *mostRecentVersion;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)_initWithCoordinator:(id)arg1 productIdentifier:(id)arg2 productVersions:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end