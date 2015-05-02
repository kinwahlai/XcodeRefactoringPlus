//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSourceScanner : NSObject
{
    XCLanguageSpecification *_langSpec;
    NSMutableArray *_includedRules;
    XCSourceScanner *_lexer;
    long long _langId;
    long long _token;
    unsigned int _colorId:16;
    unsigned int _altColorId:16;
    unsigned int _startAtBOL:1;
    unsigned int _startAtColumnZero:1;
    unsigned int _isFoldable:1;
    unsigned int _ignoreToken:1;
    unsigned int _inheritsColor:1;
    unsigned int _altIgnoreToken:1;
    unsigned int _altInheritsColor:1;
    unsigned int _needToDirtyRightEdges:1;
}

- (struct _NSRange)wordRangeInString:(id)arg1 fromIndex:(unsigned long long)arg2;
- (struct _NSRange)wordRangeInString:(id)arg1 fromIndex:(unsigned long long)arg2 allowNonWords:(BOOL)arg3;
- (BOOL)canTokenize;
- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(struct _NSRange)arg5 dirtyRange:(struct _NSRange *)arg6;
- (BOOL)predictsRule:(long long)arg1 inputStream:(id)arg2;
- (void)parseIncludedRules:(id)arg1 inTree:(id)arg2 withContext:(id)arg3 initialToken:(long long)arg4 inputStream:(id)arg5 range:(struct _NSRange)arg6 dirtyRange:(struct _NSRange *)arg7;
- (long long)parseOneIncludedRule:(id)arg1 inTree:(id)arg2 withContext:(id)arg3 initialToken:(long long)arg4 inputStream:(id)arg5 range:(struct _NSRange)arg6 dirtyRange:(struct _NSRange *)arg7 isLexing:(BOOL)arg8 reusedToken:(char *)arg9;
- (id)nodeForThisScanner:(id)arg1 atLocation:(unsigned long long)arg2 inputStream:(id)arg3;
- (id)nodeToReuse:(id)arg1 forScanner:(id)arg2 inputStream:(id)arg3;
- (id)includedRules;
- (id)lexer;
- (long long)token;
- (id)langSpec;
- (long long)langId;
- (id)description;
- (void)dealloc;
- (id)initWithLanguageSpecification:(id)arg1;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;

@end