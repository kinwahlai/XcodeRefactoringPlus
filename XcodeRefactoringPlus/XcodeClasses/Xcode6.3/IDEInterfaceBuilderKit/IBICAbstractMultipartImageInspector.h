//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICAbstractMultipartImageInspector : IDEInspectorViewController
{
    NSArrayController *_multipartImageController;
}

+ (void)installPerSuggestionSetPropertiesIfNeeded;
+ (void)installKVODependencyForSuggestionSet:(id)arg1;
+ (void)installGetterForSuggestionSet:(id)arg1;
+ (void)installSetterForSuggestionSet:(id)arg1;
+ (id)propertyNameForPresentingValueForSuggestionSet:(id)arg1;
+ (id)inspectedArrayControllerKeys;
+ (Class)imageRepClass;
+ (Class)imageSetClass;
+ (Class)imageRepSlotClass;
+ (id)slotSuggestionSets;
- (void).cxx_destruct;
- (id)sliceElement;
- (void)addPostSuggestionSetContent:(id)arg1;
- (void)setContent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end