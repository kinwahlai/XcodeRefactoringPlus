//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCStringContentSubstitutionFileManager : TSFileManager
{
    NSDictionary *_substDict;
}

+ (id)fileManagerWithSubstitutionDictionary:(id)arg1;
- (id)contentsAtPath:(id)arg1;
- (void)setSubstitutionDictionary:(id)arg1;
- (id)substitutionDictionary;
- (void)dealloc;

@end