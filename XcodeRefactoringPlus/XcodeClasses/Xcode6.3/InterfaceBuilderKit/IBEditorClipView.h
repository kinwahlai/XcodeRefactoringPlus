//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBEditorClipView : NSClipView
{
    BOOL sizesDocumentViewToFill;
}

+ (id)clipViewForWrappingEditor;
@property BOOL sizesDocumentViewToFill; // @synthesize sizesDocumentViewToFill;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (struct CGPoint)constrainScrollPoint:(struct CGPoint)arg1;
- (struct CGRect)boundsForCenteringDocumentView;

@end