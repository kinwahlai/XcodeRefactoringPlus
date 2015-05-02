//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XDDevEntityMapping (XDDevEntityMappingNavigableIdentification) <IDEMappingModelSourceObject>
+ (id)orderedLocationKeys;
+ (id)keyPathsForValuesAffectingStructuralChildren;
+ (id)keyPathsForValuesAffectingSortedPropertyMappings;
+ (id)keyPathsForValuesAffectingEntityMappingNavigableChildren;
@property(readonly) id <IDEDMModelObject> parentObject;
@property(readonly) NSArray *structuralChildren;
- (id)model;
@property(readonly) id <IDEDMSourceObject> sourceObject;
@property(readonly) NSArray *sortedPropertyMappings;
@property(readonly) NSImage *representativeIcon;
- (id)treeControllerChildren;
@property(readonly) IDETypeIdentifier *ideModelObjectTypeIdentifier;
- (id)entityMappingNavigableChildren;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) XDDevMappingModel *mappingModel; // @dynamic mappingModel;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@end