//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDELogEntryQuickLookNode : NSObject <NSPasteboardWriting>
{
    NSArray *_children;
    IDEPlaygroundQuickLookController *_quickLookController;
    BOOL _hasLookedUpQuickLook;
    id <IDEPlaygroundLoggerLogEntry> _logEntry;
}

@property(readonly) id <IDEPlaygroundLoggerLogEntry> logEntry; // @synthesize logEntry=_logEntry;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)_presentationOptionsForStructure:(id)arg1;
- (id)_presentationOptionsForTupleChildOfKeyedContainer;
- (id)_compoundAttributedSummaryForStructure:(id)arg1 presentationOptions:(id)arg2;
- (id)_compoundAttributedSummaryForObjectReflection:(id)arg1 includeName:(BOOL)arg2;
- (id)_compoundAttributedSummaryForLogEntry:(id)arg1 includeName:(BOOL)arg2;
- (id)_compoundAttributedSummaryForLogEntry:(id)arg1;
@property(readonly) IDEPlaygroundQuickLookController *quickLookController;
@property(readonly) NSAttributedString *compoundAttributedSummary;
@property(readonly) NSString *compoundSummary;
@property(readonly) NSArray *children;
@property(readonly) BOOL isLeaf;
- (id)_initWithLogEntry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end