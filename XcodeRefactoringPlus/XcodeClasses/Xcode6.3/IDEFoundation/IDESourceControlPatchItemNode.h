//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlPatchItemNode : NSObject <IDESourceControlPatchNode>
{
    BOOL _reverseDiff;
    IDESourceControlWorkingTreeItem *_item;
    NSString *_format;
    DVTFilePath *_diffFilePath;
    DVTFilePath *_baseFilePath;
    NSString *_diffString;
    DVTFileWrapper *_wrapper;
    NSString *_status;
    NSString *_baseRevisionIdentifier;
}

@property BOOL reverseDiff; // @synthesize reverseDiff=_reverseDiff;
@property(copy) NSString *baseRevisionIdentifier; // @synthesize baseRevisionIdentifier=_baseRevisionIdentifier;
@property(copy) NSString *status; // @synthesize status=_status;
@property(retain) DVTFileWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(copy) NSString *diffString; // @synthesize diffString=_diffString;
@property(copy) DVTFilePath *baseFilePath; // @synthesize baseFilePath=_baseFilePath;
@property(copy) DVTFilePath *diffFilePath; // @synthesize diffFilePath=_diffFilePath;
@property(copy) NSString *format; // @synthesize format=_format;
@property(readonly) __weak IDESourceControlWorkingTreeItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)initWithItem:(id)arg1;
- (id)representedObject;
- (id)modifiedItems;
- (id)children;
- (BOOL)resolved;
- (id)indexInfo;
- (id)fileWrapper;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end