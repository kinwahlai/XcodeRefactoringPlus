//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSTextView (IBTextViewIntegration)
- (void)setAllowsOnlyRomanCharacters:(BOOL)arg1;
- (BOOL)allowsOnlyRomanCharacters;
- (id)romanOnlyLocales;
- (void)setDesignableTextStorage:(id)arg1;
- (id)designableTextStorage;
- (Class)ibEditorClass;
- (struct CGSize)ibNearestLegalBoundsSize;
- (void)setMaxHeight:(double)arg1;
- (double)maxHeight;
- (void)setMinHeight:(double)arg1;
- (double)minHeight;
- (void)setMaxWidth:(double)arg1;
- (double)maxWidth;
- (void)setMinWidth:(double)arg1;
- (double)minWidth;
- (void)setAllowsNonContiguousLayout:(BOOL)arg1;
- (BOOL)allowsNonContiguousLayout;
- (BOOL)isUserMovable;
- (BOOL)isUserSizable;
- (id)ibPasteboardTypes;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)displayNameForDesignableKeyPath:(id)arg1;
- (id)ibDocumentationKeyPathForKeyPath:(id)arg1;
- (void)ibPopulateKeyPaths:(id)arg1;
- (void)ibPopulateSizeInspectorClasses:(id)arg1;
- (void)ibPopulateAttributeInspectorClasses:(id)arg1;
@end