//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXNonLossyASCIIFormatter : NSFormatter
{
    BOOL _escapeInvisibleASCII;
}

- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)nonLossyASCIIDataForString:(id)arg1;
- (BOOL)escapeInvisibleASCII;
- (void)setEscapeInvisibleASCII:(BOOL)arg1;
- (id)init;
- (id)initWithEscapeInivisbleASCII:(BOOL)arg1;

@end