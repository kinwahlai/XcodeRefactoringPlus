//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUTraceGroupNavigableItem : IDEKeyDrivenNavigableItem
{
    BOOL _showOnlyInterestingTrace;
    BOOL _hideEmptyMarkerGroups;
    BOOL _hideGroupMarkerCalls;
    NSMutableArray *_cachedChildRepresentedObjects;
}

@property BOOL hideGroupMarkerCalls; // @synthesize hideGroupMarkerCalls=_hideGroupMarkerCalls;
@property BOOL hideEmptyMarkerGroups; // @synthesize hideEmptyMarkerGroups=_hideEmptyMarkerGroups;
@property BOOL showOnlyInterestingTrace; // @synthesize showOnlyInterestingTrace=_showOnlyInterestingTrace;
- (void).cxx_destruct;
- (BOOL)setHideEmptyMarkerGroups:(BOOL)arg1 hideGroupMarkerCalls:(BOOL)arg2;
- (BOOL)setShowOnlyInterestingTrace:(BOOL)arg1 hideEmptyMarkerGroups:(BOOL)arg2 hideGroupMarkerCalls:(BOOL)arg3;
- (void)invalidateChildItems;
- (id)childRepresentedObjects;
- (void)_filterGroup:(id)arg1;
- (BOOL)_isNotHiddenStateItem:(id)arg1;
- (id)subtitle;
- (void)primitiveInvalidate;
- (void)_clearCachedItems;
- (id)initWithRepresentedObject:(id)arg1;

@end