//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDownloadableTableRowView : NSTableRowView
{
    BOOL _isFirstRow;
    BOOL _isLastRow;
}

@property BOOL isLastRow; // @synthesize isLastRow=_isLastRow;
@property BOOL isFirstRow; // @synthesize isFirstRow=_isFirstRow;
- (void)drawSeparatorInRect:(struct CGRect)arg1;

@end