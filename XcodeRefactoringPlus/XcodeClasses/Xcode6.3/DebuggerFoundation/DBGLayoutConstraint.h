//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGLayoutConstraint : DBGViewObject
{
    BOOL _hasCalculatedContentType;
    long long _contentType;
    double _constant;
    double _multiplier;
    double _priority;
    long long _firstAttribute;
    long long _secondAttribute;
    long long _relation;
    NSString *_constraintIdentifier;
    DBGViewSurface *_firstItem;
    DBGViewSurface *_secondItem;
}

@property __weak DBGViewSurface *secondItem; // @synthesize secondItem=_secondItem;
@property __weak DBGViewSurface *firstItem; // @synthesize firstItem=_firstItem;
@property(copy, nonatomic) NSString *constraintIdentifier; // @synthesize constraintIdentifier=_constraintIdentifier;
@property long long relation; // @synthesize relation=_relation;
@property long long secondAttribute; // @synthesize secondAttribute=_secondAttribute;
@property long long firstAttribute; // @synthesize firstAttribute=_firstAttribute;
@property double priority; // @synthesize priority=_priority;
@property double multiplier; // @synthesize multiplier=_multiplier;
@property double constant; // @synthesize constant=_constant;
- (void).cxx_destruct;
@property(readonly) long long contentType;
- (id)displayName;
@property(readonly) BOOL isVertical;
@property(readonly) BOOL isHorizontal;
@property(readonly) NSString *categoryString;
- (id)formulaStringRelativeToItem:(id)arg1;
- (id)initWithViewDescriber:(id)arg1 dictionary:(id)arg2;

@end