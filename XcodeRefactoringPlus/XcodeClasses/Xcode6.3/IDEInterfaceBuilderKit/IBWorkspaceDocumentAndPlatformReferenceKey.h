//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBWorkspaceDocumentAndPlatformReferenceKey : NSObject
{
    IDEWorkspaceDocument *workspaceDocument;
    IBPlatform *platform;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToReferenceKey:(id)arg1;
- (id)initWithWorkspaceDocument:(id)arg1 platform:(id)arg2;

@end