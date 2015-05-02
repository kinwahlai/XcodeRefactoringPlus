//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEExecutionActionArchivingProxy : NSObject
{
    NSString *_actionExtensionID;
    IDEExecutionAction *_proxiedAction;
}

+ (id)actionProxyForAction:(id)arg1;
@property(readonly) IDEExecutionAction *proxiedAction; // @synthesize proxiedAction=_proxiedAction;
@property(readonly) NSString *actionExtensionID; // @synthesize actionExtensionID=_actionExtensionID;
- (void).cxx_destruct;
- (void)addActionContent:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setActionTypeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;

@end