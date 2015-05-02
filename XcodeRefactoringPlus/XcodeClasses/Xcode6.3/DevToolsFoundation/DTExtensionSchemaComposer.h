//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTExtensionSchemaComposer : NSObject
{
    NSManagedObjectModel *_model;
    NSEntityDescription *_rootEntity;
}

+ (id)infoEntityNameForExtensionPointIdentifier:(id)arg1;
+ (id)_predicateMatchingCIdentifier;
- (id)composedManagedObjectModel;
- (void)addSchemaForExtensionPoint:(id)arg1;
- (void)dealloc;
- (id)initWithManagedObjectModel:(id)arg1;
- (id)_masterSchemaFromSchemaElements:(id)arg1;
- (void)_addSchema:(id)arg1 forExtensionPointIdentifier:(id)arg2;
- (id)_entitiesFromElementElement:(id)arg1 forParentEntity:(id)arg2;
- (id)_entityNameFromElementName:(id)arg1 forParentEntityName:(id)arg2;
- (id)_attributeFromAttributeElement:(id)arg1;
- (BOOL)_isValidAttributeName:(id)arg1;
- (BOOL)_parseIsOptionalFromUseNode:(id)arg1;
- (unsigned long long)_attributeTypeFromXMLSchemaType:(id)arg1;
- (id)_model;
- (id)_rootEntity;

@end