//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXFindResult : NSObject
{
    PBXBookmark *_bookmark;
    NSString *_string;
    NSAttributedString *_displayAttributedString;
    PBXDocBookmark *_docBookmark;
    PBXFileReference *_fileReference;
    struct _NSRange _foundRange;
    unsigned long long _currentTimestamp;
    NSString *_lineForDisplayAttributedString;
    struct _NSRange _foundStringRange;
}

+ (void)initialize;
@property(retain) PBXDocBookmark *docBookmark; // @synthesize docBookmark=_docBookmark;
- (BOOL)shouldShowBookIcon;
- (id)displayAttributedString;
- (void)_setupDisplayAttributedString;
- (id)foundString;
- (id)bookmark;
- (id)fileReference;
- (id)description;
- (void)dealloc;
- (id)initWithBookmark:(id)arg1 foundString:(id)arg2 fullLine:(id)arg3 foundStringRange:(struct _NSRange)arg4;
- (id)initWithBookmark:(id)arg1 foundString:(id)arg2 displayAttributedString:(id)arg3;
- (id)_initWithBookmark:(id)arg1 foundString:(id)arg2 displayAttributedString:(id)arg3;
- (id)initWithFileReference:(id)arg1 range:(struct _NSRange)arg2 foundString:(id)arg3 currentTimestamp:(unsigned long long)arg4 fullLine:(id)arg5 foundStringRange:(struct _NSRange)arg6;

@end