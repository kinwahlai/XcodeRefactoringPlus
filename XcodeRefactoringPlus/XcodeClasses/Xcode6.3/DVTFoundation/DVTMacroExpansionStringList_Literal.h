//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTMacroExpansionStringList_Literal : DVTMacroExpansionStringList
{
    NSArray *_literalStrings;
}

+ (id)newWithStringForm:(id)arg1 literalStrings:(id)arg2;
- (void).cxx_destruct;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dvt_stringForm;
- (BOOL)dvt_isLiteral;
- (id)initWithStringForm:(id)arg1 literalStrings:(id)arg2;

@end