//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCJavaCodeCompletion : PBXCodeCompletion
{
}

- (id)typeOfExpression:(id)arg1 resolveType:(BOOL)arg2;
- (void)parseLocals:(id)arg1;
- (id)completeImportStatement:(id)arg1 typeName:(id)arg2;
- (id)completePackageStatement:(id)arg1 typeName:(id)arg2;
- (id)completeExternalDeclaration:(id)arg1 typeName:(id)arg2;
- (id)completeExpression:(id)arg1 typeName:(id)arg2;
- (void)addScopeForIndex:(id)arg1 package:(id)arg2 imports:(id)arg3;

@end