//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTCustomDataSpecifier : NSObject
{
    NSString *_name;
    NSString *_groupingName;
    DVTCustomDataOwnership *_ownership;
}

+ (id)customDataSpecifierWithName:(id)arg1 groupingName:(id)arg2;
+ (id)customDataSpecifierWithName:(id)arg1 groupingName:(id)arg2 ownership:(id)arg3;
@property(readonly) DVTCustomDataOwnership *ownership; // @synthesize ownership=_ownership;
@property(readonly) NSString *groupingName; // @synthesize groupingName=_groupingName;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end