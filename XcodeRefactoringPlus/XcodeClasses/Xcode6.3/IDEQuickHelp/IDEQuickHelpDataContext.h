//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IDEQuickHelpDataContext <NSObject>
@property(readonly, nonatomic) DVTSourceCodeLanguage *preferredLanguage;
@property(readonly, nonatomic) NSString *preferredUsr;
@property(readonly, nonatomic) NSXMLElement *documentationMarkup;
@property(readonly, nonatomic) NSXMLElement *declarationSymbolMarkup;
@property(readonly, nonatomic) IDEIndexSymbol *indexSymbol;
- (void)enumerateRelatedDeclarationsUsingBlock:(void (^)(NSXMLElement *, char *))arg1;
- (void)enumerateOverriddenSymbolResolutionsUsingBlock:(void (^)(NSString *, char *))arg1;
@end