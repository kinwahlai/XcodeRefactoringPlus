//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DocSetIndexDocument : NSObject
{
    const void *_searchDocument;
}

+ (id)searchDocumentWithScheme:(id)arg1 parent:(id)arg2 name:(id)arg3;
+ (id)searchDocumentWithURL:(id)arg1;
- (void *)documentRef;
- (id)parent;
- (id)name;
- (id)schemeName;
- (id)URL;
- (void)dealloc;
- (id)initWithScheme:(id)arg1 parent:(id)arg2 name:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithSKDocumentRef:(void *)arg1;

@end