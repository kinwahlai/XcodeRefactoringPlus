//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol DevkitRefactoringParserCallbacks
- (NSString *)getStringAtFile:(NSString *)arg1 line:(unsigned long long)arg2;
- (NSString *)getStringAtLocation:(DevkitLocation *)arg1 replacing:(NSArray *)arg2;
- (NSString *)getStringAtLocation:(DevkitLocation *)arg1;
- (NSData *)memorySourceForFile:(const char *)arg1;
- (NSString *)effectivePathForHeader:(NSString *)arg1;
- (BOOL)beginHeader:(NSString *)arg1;
- (void)addFunctionBody:(DevkitExpression *)arg1;
- (NSArray *)allFunctionBodies;
- (NSMutableDictionary *)allClassMethods;
- (NSMutableDictionary *)allInstanceMethods;
- (BOOL)isPointInMacroBody:(DevkitLocation *)arg1 checkBefore:(BOOL)arg2;
- (BOOL)isPointInMacro:(DevkitLocation *)arg1 checkBefore:(BOOL)arg2;
- (BOOL)isLocationInMacro:(DevkitLocation *)arg1;
- (DevkitLocation *)macroDefinitionLocation:(const char *)arg1;
- (BOOL)isMacroDefined:(const char *)arg1;
- (DevkitASTNode *)nodeAtLocation:(DevkitLocation *)arg1;
- (DevkitDeclaration *)globalScope;
@end