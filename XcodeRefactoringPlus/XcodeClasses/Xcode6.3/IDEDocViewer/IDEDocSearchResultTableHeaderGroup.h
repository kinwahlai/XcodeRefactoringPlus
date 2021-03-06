//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDocSearchResultTableHeaderGroup : NSObject
{
    BOOL _isSeparator;
    BOOL _isSelectable;
    BOOL _isShowMoreRow;
    NSString *_identifier;
    NSString *_displayName;
    NSArray *_allGroupResults;
    NSArray *_displayedResults;
    IDEDocSearchResultsGroup *_representedGroup;
}

+ (id)defaultTextColor;
+ (id)separatorGroup;
@property(retain) IDEDocSearchResultsGroup *representedGroup; // @synthesize representedGroup=_representedGroup;
@property(copy) NSArray *displayedResults; // @synthesize displayedResults=_displayedResults;
@property(copy) NSArray *allGroupResults; // @synthesize allGroupResults=_allGroupResults;
@property BOOL isShowMoreRow; // @synthesize isShowMoreRow=_isShowMoreRow;
@property BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property BOOL isSeparator; // @synthesize isSeparator=_isSeparator;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end