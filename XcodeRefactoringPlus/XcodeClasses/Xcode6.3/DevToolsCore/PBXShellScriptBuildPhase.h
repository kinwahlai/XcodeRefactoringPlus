//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXShellScriptBuildPhase : PBXBuildPhase
{
    NSString *_shellPath;
    NSString *_shellScript;
    BOOL _showEnvVarsInLog;
    NSMutableArray *_inputPaths;
    NSMutableArray *_outputPaths;
}

+ (id)archivableAttributes;
+ (id)defaultShellPath;
+ (id)allowedExtensions;
+ (id)defaultName;
+ (id)identifier;
- (Class)dependencyGraphSnapshotClass;
- (id)readFromPListUnarchiver:(id)arg1;
- (BOOL)shouldArchiveShowEnvVarsInLog;
- (void)setShowEnvVarsInLog:(BOOL)arg1;
- (BOOL)showEnvVarsInLog;
- (BOOL)acceptsReference:(id)arg1 checkFileType:(BOOL)arg2;
- (void)setOutputPaths:(id)arg1;
- (id)outputPaths;
- (void)setInputPaths:(id)arg1;
- (id)inputPaths;
- (void)setShellScript:(id)arg1;
- (id)shellScript;
- (void)setShellPath:(id)arg1;
- (id)shellPath;
- (BOOL)canRename;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initFromTemplateDictionary:(id)arg1;
- (void)moveOutputPath:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeFromAppleScriptOutputPathsAtIndex:(unsigned long long)arg1;
- (void)replaceInAppleScriptOutputPaths:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInAppleScriptOutputPaths:(id)arg1;
- (void)insertInAppleScriptOutputPaths:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)valueInAppleScriptOutputPathsAtIndex:(unsigned long long)arg1;
- (id)appleScriptOutputPaths;
- (void)moveInputPath:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeFromAppleScriptInputPathsAtIndex:(unsigned long long)arg1;
- (void)replaceInAppleScriptInputPaths:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInAppleScriptInputPaths:(id)arg1;
- (void)insertInAppleScriptInputPaths:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)valueInAppleScriptInputPathsAtIndex:(unsigned long long)arg1;
- (id)appleScriptInputPaths;

@end