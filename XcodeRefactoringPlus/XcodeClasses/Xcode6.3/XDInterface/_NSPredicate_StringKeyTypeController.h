//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _NSPredicate_StringKeyTypeController : _NSPredicate_RootTypeController
{
    NSTextField *_valueField;
}

- (void)dealloc;
- (void)remove;
- (id)lastKeyView;
- (id)firstKeyView;
- (id)stringToPassOn;
- (BOOL)passInString:(id)arg1;
- (id)leafPredicate;
- (id)setLeafPredicate:(id)arg1;
- (struct CGSize)setPosition:(struct CGPoint)arg1 secondRow:(struct CGPoint)arg2;
- (void)setOperator:(id)arg1;
- (id)possibleOperators;
- (void)_createValueField;
- (double)fieldWidth;
- (id)createFormatter;

@end