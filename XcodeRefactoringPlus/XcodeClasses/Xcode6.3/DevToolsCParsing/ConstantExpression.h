//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ConstantExpression : Expression
{
    NSString *_stringValue;
}

- (id)shortDescription;
- (id)prettyPrint;
- (id)stringValue;
- (void)setStringValue:(const char *)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end