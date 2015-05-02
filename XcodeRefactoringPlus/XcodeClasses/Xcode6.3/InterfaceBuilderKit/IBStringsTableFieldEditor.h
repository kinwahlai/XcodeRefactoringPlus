//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBStringsTableFieldEditor : NSTextView
{
    IBStringsTableController *controller;
    NSString *searchTerm;
    BOOL hasPendingChanges;
}

- (void)performFindPanelAction:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)occurrenceOfSearchString:(id)arg1 forward:(BOOL)arg2 showIndicator:(BOOL)arg3;
- (void)checkSpelling:(id)arg1;
- (BOOL)rangeIsMarkedAsMisspelled:(struct _NSRange)arg1;
- (BOOL)resignFirstResponder;
- (void)didChangeText;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end