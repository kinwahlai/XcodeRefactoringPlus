//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTTableCellViewOneLine : DVTTableCellView
{
    int _truncationStyle;
}

@property(nonatomic) int truncationStyle; // @synthesize truncationStyle=_truncationStyle;
- (void)_updateSubtitleCompressionBasedOnTruncationStyle;
- (void)setSubtitle:(id)arg1;
- (void)awakeFromNib;

@end