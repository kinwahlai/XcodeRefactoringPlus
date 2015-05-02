//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICSystemVersion : IBICMultipartImageRepSlotComponent <NSCoding>
{
    NSString *_platform;
    NSString *_marketingVersion;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 platform:(id)arg4 marketingVersion:(id)arg5 displayOrder:(double)arg6;
+ (id)contentsJSONKey;
@property(readonly) NSString *marketingVersion; // @synthesize marketingVersion=_marketingVersion;
@property(readonly) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (void)ibic_appendAdditionalPseudoXMLAttrbutes:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToSchemaImageRepIDComponent:(id)arg1;
- (BOOL)isEqualToSystemVersion:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 platform:(id)arg4 marketingVersion:(id)arg5 displayOrder:(double)arg6;

@end