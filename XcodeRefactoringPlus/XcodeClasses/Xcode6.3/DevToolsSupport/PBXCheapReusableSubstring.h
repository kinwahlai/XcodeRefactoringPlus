//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXCheapReusableSubstring : NSString
{
    NSString *_realString;
    unsigned long long _realStringLength;
    struct _NSRange _subrange;
    unsigned long long _hashValue;
    BOOL _hashValueValid;
}

- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (BOOL)isEqualToString:(id)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (unsigned long long)hash;
- (void)setRealString:(id)arg1 subrange:(struct _NSRange)arg2;
- (void)dealloc;
- (id)initWithRealString:(id)arg1 subrange:(struct _NSRange)arg2;

@end