//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXTextBookmark : PBXBookmark
{
    unsigned int _rangeType:2;
    unsigned int RESERVED:30;
    struct _NSRange _range;
    struct _NSRange _visibleCharRange;
}

+ (id)archiveNameForKey:(id)arg1;
+ (id)archivableAttributes;
+ (id)bookmarkWithFileReference:(id)arg1 lineRange:(struct _NSRange)arg2;
+ (id)bookmarkWithFileReference:(id)arg1 lineRange:(struct _NSRange)arg2 timestamp:(unsigned long long)arg3;
+ (id)bookmarkWithFileReference:(id)arg1 characterRange:(struct _NSRange)arg2 timestamp:(unsigned long long)arg3;
+ (id)bookmarkWithFileReference:(id)arg1 characterRange:(struct _NSRange)arg2;
- (long long)compareUsingCharacterRange:(id)arg1;
- (id)innerDescription;
- (id)readFromPListUnarchiver:(id)arg1;
- (BOOL)shouldArchiveVrLen;
- (BOOL)shouldArchiveVrLoc;
- (void)_setVrLen:(unsigned long long)arg1;
- (unsigned long long)_vrLen;
- (void)_setVrLoc:(unsigned long long)arg1;
- (unsigned long long)_vrLoc;
- (void)_setRLen:(unsigned long long)arg1;
- (unsigned long long)_rLen;
- (void)_setRLoc:(unsigned long long)arg1;
- (unsigned long long)_rLoc;
- (void)_setRangeType:(int)arg1;
- (int)_rangeType;
- (void)setVisibleCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)visibleCharacterRange;
- (struct _NSRange)lineRange;
- (struct _NSRange)characterRange;
- (id)defaultName;
- (id)initWithFileReference:(id)arg1;
- (id)initWithFileReference:(id)arg1 range:(struct _NSRange)arg2 ofType:(int)arg3;
- (id)initWithFileReference:(id)arg1 range:(struct _NSRange)arg2 ofType:(int)arg3 timestamp:(unsigned long long)arg4;
- (void)setAppleScriptCharacterRange:(id)arg1;
- (id)appleScriptCharacterRange;

@end