//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTCrashLogStackFrame : NSObject
{
    DVTCrashLogParsedStackFrame *_parsedStackFrame;
    NSString *_rawText;
}

@property(readonly) NSString *rawText; // @synthesize rawText=_rawText;
- (void).cxx_destruct;
- (id)description;
@property(readonly) DVTCrashLogParsedStackFrame *parsedStackFrame; // @synthesize parsedStackFrame=_parsedStackFrame;
- (id)_stackFrameParsers;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithText:(id)arg1;

@end