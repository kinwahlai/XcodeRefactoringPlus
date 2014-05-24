#import "ObjCFuncOrMethodParser.h"
#import <ParseKit/ParseKit.h>

#define LT(i) [self LT:(i)]
#define LA(i) [self LA:(i)]
#define LS(i) [self LS:(i)]
#define LF(i) [self LF:(i)]

#define POP()       [self.assembly pop]
#define POP_STR()   [self _popString]
#define POP_TOK()   [self _popToken]
#define POP_BOOL()  [self _popBool]
#define POP_INT()   [self _popInteger]
#define POP_FLOAT() [self _popDouble]

#define PUSH(obj)     [self.assembly push:(id)(obj)]
#define PUSH_BOOL(yn) [self _pushBool:(BOOL)(yn)]
#define PUSH_INT(i)   [self _pushInteger:(NSInteger)(i)]
#define PUSH_FLOAT(f) [self _pushDouble:(double)(f)]

#define EQ(a, b) [(a) isEqual:(b)]
#define NE(a, b) (![(a) isEqual:(b)])
#define EQ_IGNORE_CASE(a, b) (NSOrderedSame == [(a) compare:(b)])

#define ABOVE(fence) [self.assembly objectsAbove:(fence)]

#define LOG(obj) do { NSLog(@"%@", (obj)); } while (0);
#define PRINT(str) do { printf("%s\n", (str)); } while (0);

@interface PKSParser ()
@property (nonatomic, retain) NSMutableDictionary *_tokenKindTab;
@property (nonatomic, retain) NSMutableArray *_tokenKindNameTab;

- (BOOL)_popBool;
- (NSInteger)_popInteger;
- (double)_popDouble;
- (PKToken *)_popToken;
- (NSString *)_popString;

- (void)_pushBool:(BOOL)yn;
- (void)_pushInteger:(NSInteger)i;
- (void)_pushDouble:(double)d;
@end

@interface ObjCFuncOrMethodParser ()
@property (nonatomic, retain) NSMutableDictionary *expression_memo;
@property (nonatomic, retain) NSMutableDictionary *funcName_memo;
@property (nonatomic, retain) NSMutableDictionary *selector_memo;
@property (nonatomic, retain) NSMutableDictionary *className_memo;
@property (nonatomic, retain) NSMutableDictionary *openSquareParen_memo;
@property (nonatomic, retain) NSMutableDictionary *closeSquareParen_memo;
@property (nonatomic, retain) NSMutableDictionary *openParen_memo;
@property (nonatomic, retain) NSMutableDictionary *closeParen_memo;
@property (nonatomic, retain) NSMutableDictionary *comma_memo;
@property (nonatomic, retain) NSMutableDictionary *colon_memo;
@property (nonatomic, retain) NSMutableDictionary *super_memo;
@property (nonatomic, retain) NSMutableDictionary *messageExpression_memo;
@property (nonatomic, retain) NSMutableDictionary *receiver_memo;
@property (nonatomic, retain) NSMutableDictionary *messageSelector_memo;
@property (nonatomic, retain) NSMutableDictionary *keywordArgumentList_memo;
@property (nonatomic, retain) NSMutableDictionary *keywordArgument_memo;
@property (nonatomic, retain) NSMutableDictionary *functionExpression_memo;
@property (nonatomic, retain) NSMutableDictionary *paramListOpt_memo;
@property (nonatomic, retain) NSMutableDictionary *paramList_memo;
@property (nonatomic, retain) NSMutableDictionary *commaArgument_memo;
@property (nonatomic, retain) NSMutableDictionary *agrument_memo;
@end

@implementation ObjCFuncOrMethodParser

- (id)init {
    self = [super init];
    if (self) {
        self._tokenKindTab[@"super"] = @(OBJCFUNCORMETHODPARSER_TOKEN_KIND_SUPER);
        self._tokenKindTab[@"["] = @(OBJCFUNCORMETHODPARSER_TOKEN_KIND_OPENSQUAREPAREN);
        self._tokenKindTab[@","] = @(OBJCFUNCORMETHODPARSER_TOKEN_KIND_COMMA);
        self._tokenKindTab[@"("] = @(OBJCFUNCORMETHODPARSER_TOKEN_KIND_OPENPAREN);
        self._tokenKindTab[@":"] = @(OBJCFUNCORMETHODPARSER_TOKEN_KIND_COLON);
        self._tokenKindTab[@"]"] = @(OBJCFUNCORMETHODPARSER_TOKEN_KIND_CLOSESQUAREPAREN);
        self._tokenKindTab[@")"] = @(OBJCFUNCORMETHODPARSER_TOKEN_KIND_CLOSEPAREN);

        self._tokenKindNameTab[OBJCFUNCORMETHODPARSER_TOKEN_KIND_SUPER] = @"super";
        self._tokenKindNameTab[OBJCFUNCORMETHODPARSER_TOKEN_KIND_OPENSQUAREPAREN] = @"[";
        self._tokenKindNameTab[OBJCFUNCORMETHODPARSER_TOKEN_KIND_COMMA] = @",";
        self._tokenKindNameTab[OBJCFUNCORMETHODPARSER_TOKEN_KIND_OPENPAREN] = @"(";
        self._tokenKindNameTab[OBJCFUNCORMETHODPARSER_TOKEN_KIND_COLON] = @":";
        self._tokenKindNameTab[OBJCFUNCORMETHODPARSER_TOKEN_KIND_CLOSESQUAREPAREN] = @"]";
        self._tokenKindNameTab[OBJCFUNCORMETHODPARSER_TOKEN_KIND_CLOSEPAREN] = @")";

        self.expression_memo = [NSMutableDictionary dictionary];
        self.funcName_memo = [NSMutableDictionary dictionary];
        self.selector_memo = [NSMutableDictionary dictionary];
        self.className_memo = [NSMutableDictionary dictionary];
        self.openSquareParen_memo = [NSMutableDictionary dictionary];
        self.closeSquareParen_memo = [NSMutableDictionary dictionary];
        self.openParen_memo = [NSMutableDictionary dictionary];
        self.closeParen_memo = [NSMutableDictionary dictionary];
        self.comma_memo = [NSMutableDictionary dictionary];
        self.colon_memo = [NSMutableDictionary dictionary];
        self.super_memo = [NSMutableDictionary dictionary];
        self.messageExpression_memo = [NSMutableDictionary dictionary];
        self.receiver_memo = [NSMutableDictionary dictionary];
        self.messageSelector_memo = [NSMutableDictionary dictionary];
        self.keywordArgumentList_memo = [NSMutableDictionary dictionary];
        self.keywordArgument_memo = [NSMutableDictionary dictionary];
        self.functionExpression_memo = [NSMutableDictionary dictionary];
        self.paramListOpt_memo = [NSMutableDictionary dictionary];
        self.paramList_memo = [NSMutableDictionary dictionary];
        self.commaArgument_memo = [NSMutableDictionary dictionary];
        self.agrument_memo = [NSMutableDictionary dictionary];
    }
    return self;
}

- (void)_clearMemo {
    [_expression_memo removeAllObjects];
    [_funcName_memo removeAllObjects];
    [_selector_memo removeAllObjects];
    [_className_memo removeAllObjects];
    [_openSquareParen_memo removeAllObjects];
    [_closeSquareParen_memo removeAllObjects];
    [_openParen_memo removeAllObjects];
    [_closeParen_memo removeAllObjects];
    [_comma_memo removeAllObjects];
    [_colon_memo removeAllObjects];
    [_super_memo removeAllObjects];
    [_messageExpression_memo removeAllObjects];
    [_receiver_memo removeAllObjects];
    [_messageSelector_memo removeAllObjects];
    [_keywordArgumentList_memo removeAllObjects];
    [_keywordArgument_memo removeAllObjects];
    [_functionExpression_memo removeAllObjects];
    [_paramListOpt_memo removeAllObjects];
    [_paramList_memo removeAllObjects];
    [_commaArgument_memo removeAllObjects];
    [_agrument_memo removeAllObjects];
}

- (void)_start {
    
    [self expression]; 
    [self matchEOF:YES]; 

}

- (void)__expression {
    
    if ([self predicts:TOKEN_KIND_BUILTIN_WORD, 0]) {
        [self functionExpression]; 
    } else if ([self predicts:OBJCFUNCORMETHODPARSER_TOKEN_KIND_OPENSQUAREPAREN, 0]) {
        [self messageExpression]; 
    } else {
        [self raise:@"No viable alternative found in rule 'expression'."];
    }

    [self fireAssemblerSelector:@selector(parser:didMatchExpression:)];
}

- (void)expression {
    [self parseRule:@selector(__expression) withMemo:_expression_memo];
}

- (void)__funcName {
    
    [self matchWord:NO]; 

    [self fireAssemblerSelector:@selector(parser:didMatchFuncName:)];
}

- (void)funcName {
    [self parseRule:@selector(__funcName) withMemo:_funcName_memo];
}

- (void)__selector {
    
    [self matchWord:NO]; 

    [self fireAssemblerSelector:@selector(parser:didMatchSelector:)];
}

- (void)selector {
    [self parseRule:@selector(__selector) withMemo:_selector_memo];
}

- (void)__className {
    
    [self matchWord:NO]; 

    [self fireAssemblerSelector:@selector(parser:didMatchClassName:)];
}

- (void)className {
    [self parseRule:@selector(__className) withMemo:_className_memo];
}

- (void)__openSquareParen {
    
    [self match:OBJCFUNCORMETHODPARSER_TOKEN_KIND_OPENSQUAREPAREN discard:NO]; 

    [self fireAssemblerSelector:@selector(parser:didMatchOpenSquareParen:)];
}

- (void)openSquareParen {
    [self parseRule:@selector(__openSquareParen) withMemo:_openSquareParen_memo];
}

- (void)__closeSquareParen {
    
    [self match:OBJCFUNCORMETHODPARSER_TOKEN_KIND_CLOSESQUAREPAREN discard:NO]; 

    [self fireAssemblerSelector:@selector(parser:didMatchCloseSquareParen:)];
}

- (void)closeSquareParen {
    [self parseRule:@selector(__closeSquareParen) withMemo:_closeSquareParen_memo];
}

- (void)__openParen {
    
    [self match:OBJCFUNCORMETHODPARSER_TOKEN_KIND_OPENPAREN discard:NO]; 

    [self fireAssemblerSelector:@selector(parser:didMatchOpenParen:)];
}

- (void)openParen {
    [self parseRule:@selector(__openParen) withMemo:_openParen_memo];
}

- (void)__closeParen {
    
    [self match:OBJCFUNCORMETHODPARSER_TOKEN_KIND_CLOSEPAREN discard:NO]; 

    [self fireAssemblerSelector:@selector(parser:didMatchCloseParen:)];
}

- (void)closeParen {
    [self parseRule:@selector(__closeParen) withMemo:_closeParen_memo];
}

- (void)__comma {
    
    [self match:OBJCFUNCORMETHODPARSER_TOKEN_KIND_COMMA discard:NO]; 

    [self fireAssemblerSelector:@selector(parser:didMatchComma:)];
}

- (void)comma {
    [self parseRule:@selector(__comma) withMemo:_comma_memo];
}

- (void)__colon {
    
    [self match:OBJCFUNCORMETHODPARSER_TOKEN_KIND_COLON discard:NO]; 

    [self fireAssemblerSelector:@selector(parser:didMatchColon:)];
}

- (void)colon {
    [self parseRule:@selector(__colon) withMemo:_colon_memo];
}

- (void)__super {
    
    [self match:OBJCFUNCORMETHODPARSER_TOKEN_KIND_SUPER discard:NO]; 

    [self fireAssemblerSelector:@selector(parser:didMatchSuper:)];
}

- (void)super {
    [self parseRule:@selector(__super) withMemo:_super_memo];
}

- (void)__messageExpression {
    
    [self openSquareParen]; 
    [self receiver]; 
    [self messageSelector]; 
    [self closeSquareParen]; 

    [self fireAssemblerSelector:@selector(parser:didMatchMessageExpression:)];
}

- (void)messageExpression {
    [self parseRule:@selector(__messageExpression) withMemo:_messageExpression_memo];
}

- (void)__receiver {
    
    if ([self speculate:^{ [self expression]; }]) {
        [self expression]; 
    } else if ([self speculate:^{ [self className]; }]) {
        [self className]; 
    } else if ([self speculate:^{ [self super]; }]) {
        [self super]; 
    } else {
        [self raise:@"No viable alternative found in rule 'receiver'."];
    }

    [self fireAssemblerSelector:@selector(parser:didMatchReceiver:)];
}

- (void)receiver {
    [self parseRule:@selector(__receiver) withMemo:_receiver_memo];
}

- (void)__messageSelector {
    
    [self selector]; 
    [self keywordArgumentList]; 

    [self fireAssemblerSelector:@selector(parser:didMatchMessageSelector:)];
}

- (void)messageSelector {
    [self parseRule:@selector(__messageSelector) withMemo:_messageSelector_memo];
}

- (void)__keywordArgumentList {
    
    if ([self predicts:OBJCFUNCORMETHODPARSER_TOKEN_KIND_COLON, TOKEN_KIND_BUILTIN_WORD, 0]) {
        while ([self predicts:OBJCFUNCORMETHODPARSER_TOKEN_KIND_COLON, TOKEN_KIND_BUILTIN_WORD, 0]) {
            if ([self speculate:^{ [self keywordArgument]; }]) {
                [self keywordArgument]; 
            } else {
                break;
            }
        }
    }

    [self fireAssemblerSelector:@selector(parser:didMatchKeywordArgumentList:)];
}

- (void)keywordArgumentList {
    [self parseRule:@selector(__keywordArgumentList) withMemo:_keywordArgumentList_memo];
}

- (void)__keywordArgument {
    
    if ([self predicts:OBJCFUNCORMETHODPARSER_TOKEN_KIND_COLON, 0]) {
        [self colon]; 
        [self agrument]; 
    } else if ([self predicts:TOKEN_KIND_BUILTIN_WORD, 0]) {
        [self selector]; 
        [self colon]; 
        [self agrument]; 
    } else {
        [self raise:@"No viable alternative found in rule 'keywordArgument'."];
    }

    [self fireAssemblerSelector:@selector(parser:didMatchKeywordArgument:)];
}

- (void)keywordArgument {
    [self parseRule:@selector(__keywordArgument) withMemo:_keywordArgument_memo];
}

- (void)__functionExpression {
    
    [self funcName]; 
    [self openParen]; 
    [self paramListOpt]; 
    [self closeParen]; 

    [self fireAssemblerSelector:@selector(parser:didMatchFunctionExpression:)];
}

- (void)functionExpression {
    [self parseRule:@selector(__functionExpression) withMemo:_functionExpression_memo];
}

- (void)__paramListOpt {
    
    if ([self predicts:OBJCFUNCORMETHODPARSER_TOKEN_KIND_OPENSQUAREPAREN, TOKEN_KIND_BUILTIN_NUMBER, TOKEN_KIND_BUILTIN_QUOTEDSTRING, TOKEN_KIND_BUILTIN_WORD, 0]) {
        [self paramList]; 
    }

    [self fireAssemblerSelector:@selector(parser:didMatchParamListOpt:)];
}

- (void)paramListOpt {
    [self parseRule:@selector(__paramListOpt) withMemo:_paramListOpt_memo];
}

- (void)__paramList {
    
    [self agrument]; 
    while ([self predicts:OBJCFUNCORMETHODPARSER_TOKEN_KIND_COMMA, 0]) {
        if ([self speculate:^{ [self commaArgument]; }]) {
            [self commaArgument]; 
        } else {
            break;
        }
    }

    [self fireAssemblerSelector:@selector(parser:didMatchParamList:)];
}

- (void)paramList {
    [self parseRule:@selector(__paramList) withMemo:_paramList_memo];
}

- (void)__commaArgument {
    
    [self comma]; 
    [self agrument]; 

    [self fireAssemblerSelector:@selector(parser:didMatchCommaArgument:)];
}

- (void)commaArgument {
    [self parseRule:@selector(__commaArgument) withMemo:_commaArgument_memo];
}

- (void)__agrument {
    
    if ([self speculate:^{ [self matchQuotedString:NO]; }]) {
        [self matchQuotedString:NO]; 
    } else if ([self speculate:^{ [self matchWord:NO]; }]) {
        [self matchWord:NO]; 
    } else if ([self speculate:^{ [self matchNumber:NO]; }]) {
        [self matchNumber:NO]; 
    } else if ([self speculate:^{ [self expression]; }]) {
        [self expression]; 
    } else {
        [self raise:@"No viable alternative found in rule 'agrument'."];
    }

    [self fireAssemblerSelector:@selector(parser:didMatchAgrument:)];
}

- (void)agrument {
    [self parseRule:@selector(__agrument) withMemo:_agrument_memo];
}

@end