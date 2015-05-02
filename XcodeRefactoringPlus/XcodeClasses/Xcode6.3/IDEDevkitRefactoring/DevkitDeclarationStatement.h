//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DevkitDeclarationStatement : DevkitExpression
{
    NSMutableArray *_declarationInitializerPairs;
}

- (void).cxx_destruct;
- (id)declarations;
- (id)prettyPrint;
- (id)overallLocation;
- (id)expressionOrDeclarationAtLocation:(id)arg1;
- (id)expressionContainingLocation:(id)arg1;
- (long long)numberOfChildren;
- (id)pairAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfDecls;
- (id)overallChildren;
- (id)childAtIndex:(long long)arg1;
- (void)addDeclaration:(id)arg1 initializer:(id)arg2 project:(id)arg3;
- (BOOL)initializesDeclaration:(id)arg1;
- (BOOL)containsLocalDeclaration:(id)arg1;
- (void)cleanup;
- (id)init;
- (BOOL)containedLocalDeclaration:(id)arg1 hasUsesOutside:(id)arg2;
- (BOOL)containedLocalDeclaration:(id)arg1 hasReferences:(id)arg2 insideExpressions:(BOOL)arg3;
- (BOOL)containedLocalDeclaration:(id)arg1 hasReachingUsesOutside:(id)arg2;
- (BOOL)foundDeclInitPairForLocalVar:(id)arg1 initializer:(id *)arg2 usesOfLocal:(id *)arg3;
- (BOOL)foundDeclInitPairForLocalVar:(id)arg1 initializer:(id *)arg2;

@end