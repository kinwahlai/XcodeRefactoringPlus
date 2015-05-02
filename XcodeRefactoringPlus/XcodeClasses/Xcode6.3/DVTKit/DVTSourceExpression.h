//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTSourceExpression : NSObject
{
    DVTTextDocumentLocation *_location;
    DVTTextDocumentLocation *_textSelectionLocation;
    NSString *_expressionString;
    struct _NSRange _expressionRange;
    NSString *_symbolString;
    NSString *_textSelectionString;
    NSDictionary *_symbolDescription;
    id _context;
}

@property(readonly) id context; // @synthesize context=_context;
@property(readonly) struct _NSRange expressionRange; // @synthesize expressionRange=_expressionRange;
@property(readonly, copy) NSDictionary *symbolDescription; // @synthesize symbolDescription=_symbolDescription;
@property(readonly) DVTTextDocumentLocation *textSelectionLocation; // @synthesize textSelectionLocation=_textSelectionLocation;
@property(readonly, copy) NSString *textSelectionString; // @synthesize textSelectionString=_textSelectionString;
@property(readonly, copy) NSString *symbolString; // @synthesize symbolString=_symbolString;
@property(readonly, copy) NSString *expressionString; // @synthesize expressionString=_expressionString;
@property(readonly) DVTTextDocumentLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)description;
- (id)initWithExpressionString:(id)arg1 symbolString:(id)arg2 location:(id)arg3 symbolDescription:(id)arg4 andContext:(id)arg5;
- (id)initWithExpressionString:(id)arg1 range:(struct _NSRange)arg2 symbolString:(id)arg3 location:(id)arg4 textSelectionString:(id)arg5 textSelectionLocation:(id)arg6 symbolDescription:(id)arg7 andContext:(id)arg8;

@end