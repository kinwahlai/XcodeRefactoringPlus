//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _XCOQMatch : NSObject <NSCopying>
{
    _XCOQMatchContext *_matchContext;
    unsigned long long _matchType;
    unsigned long long _matchDomain;
    NSString *_path;
    NSString *_match;
    NSString *_line;
    NSImage *_image;
    NSString *_standardizedPath;
}

+ (id)_abbreviatePath:(id)arg1 forMatchContext:(id)arg2;
+ (id)_stringByAbbreviatingFrameworksPath:(id)arg1;
+ (void)initialize;
@property(copy) NSString *standardizedPath; // @synthesize standardizedPath=_standardizedPath;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *line; // @synthesize line=_line;
@property(copy) NSString *match; // @synthesize match=_match;
@property(copy) NSString *path; // @synthesize path=_path;
@property unsigned long long matchDomain; // @synthesize matchDomain=_matchDomain;
@property unsigned long long matchType; // @synthesize matchType=_matchType;
@property(retain) _XCOQMatchContext *matchContext; // @synthesize matchContext=_matchContext;
- (id)matchPathExtension;
- (BOOL)matchIsProjectFile;
- (BOOL)matchIsSourceFile;
- (id)matchFileName;
- (double)matchFraction;
- (id)matchImage;
- (id)matchReference;
- (id)matchString;
- (id)matchURL;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithMatchContext:(id)arg1 matchType:(unsigned long long)arg2 matchDomain:(unsigned long long)arg3 path:(id)arg4 match:(id)arg5 line:(id)arg6 image:(id)arg7;

@end