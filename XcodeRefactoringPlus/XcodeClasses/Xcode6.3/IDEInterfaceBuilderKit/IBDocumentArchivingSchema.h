//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBDocumentArchivingSchema : NSObject
{
    IBMutableIdentityDictionary *_classesToElementNames;
    NSMutableDictionary *_elementNamesToClasses;
    NSMutableDictionary *_elementNamesToHostOSRequirementStrings;
    NSMutableDictionary *_enumerationsByTypeNames;
    NSMutableDictionary *_bitmasksByTypeNames;
    NSMutableDictionary *_bitmasksByElementNames;
    NSMutableSet *_dictionaryNames;
    NSMutableSet *_groupNames;
    NSMutableSet *_arrayNames;
    NSString *_identifier;
}

+ (id)sharedSchemaForSchemaExtensionIdentifier:(id)arg1;
+ (id)schemaForSchemaExtensionPointIdentifier:(id)arg1;
+ (void)populateSchemaWithCodeProvidedAdditions:(id)arg1;
+ (void)populateSchemaWithPluginDataProvidedAdditions:(id)arg1;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (void)verify;
- (id)bitmaskWithElementName:(id)arg1;
- (id)bitmaskWithTypeName:(id)arg1;
- (id)enumerationWithTypeName:(id)arg1;
- (id)elementNameForClass:(Class)arg1;
- (void)setHostOSRequirementString:(id)arg1 forElementName:(id)arg2;
- (id)hostOSRequirementStringForElementName:(id)arg1;
- (Class)classForElementName:(id)arg1;
- (BOOL)isDefinedGroup:(id)arg1;
- (BOOL)isDefinedArray:(id)arg1;
- (BOOL)isDefinedDictionary:(id)arg1;
- (void)addGroupName:(id)arg1;
- (void)addArrayName:(id)arg1;
- (void)addDictionaryName:(id)arg1;
- (void)addBitmask:(id)arg1;
- (void)addEnumeration:(id)arg1;
- (void)addClass:(Class)arg1 withElementName:(id)arg2;
- (id)initWithIdentifier:(id)arg1;

@end