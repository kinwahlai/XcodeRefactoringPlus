//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXSymbolicBreakpoint : PBXBreakpoint
{
    NSString *_symbolName;
    NSString *_fixedFile;
}

+ (id)breakpointForSymbolName:(id)arg1;
+ (id)breakpointForSymbolName:(id)arg1 withTextBookmark:(id)arg2;
+ (id)archivableAttributes;
@property(retain) NSString *fixedFile; // @synthesize fixedFile=_fixedFile;
- (void)setLocation:(id)arg1;
- (id)locationDisplay;
- (id)displayString;
- (long long)compareToBreakpoint:(id)arg1;
- (id)symbolName;
- (void)setSymbolName:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSymbolName:(id)arg1;
- (id)initWithSymbolName:(id)arg1 textBookmark:(id)arg2;
- (id)gidCommentForArchive;

@end