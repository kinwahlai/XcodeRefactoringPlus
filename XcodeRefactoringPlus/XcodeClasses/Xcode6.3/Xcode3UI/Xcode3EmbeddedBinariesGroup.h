//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3EmbeddedBinariesGroup : Xcode3BuildFileGroup
{
    DVTNotificationToken *_buildFileAddedToken;
    DVTNotificationToken *_buildFileRemovedToken;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)_computeEmbeddedBinariesExcludingBuildFileToBeRemovedOrNil:(id)arg1;
- (BOOL)insertItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canInsertItems:(id)arg1;
- (id)alertTextForRemovalOfItemsAtIndexes:(id)arg1;
- (BOOL)removeItemsAtIndexes:(id)arg1;
- (id)name;
- (void)primitiveInvalidate;
- (void)initializeGroup;

@end