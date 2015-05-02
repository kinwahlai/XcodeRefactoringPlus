//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEInspectorCapsuleController : NSObject <IDEBindableDeclarativeInspectorController>
{
    NSObject<IDEBindableDeclarativeInspectorController> *parentInspectorController;
    id representedObject;
    IDEInspectorContentView *inspectorContentView;
}

+ (id)inspectedArrayControllerKeys;
@property(readonly) IDEInspectorContentView *inspectorContentView; // @synthesize inspectorContentView;
@property(readonly) id representedObject; // @synthesize representedObject;
@property(readonly) NSObject<IDEBindableDeclarativeInspectorController> *parentInspectorController; // @synthesize parentInspectorController;
- (void).cxx_destruct;
@property(readonly) id inspectedObject;
@property(readonly) NSArray *inspectedObjects;
@property(readonly) NSBundle *bundle;
- (id)initWithRepresentedObject:(id)arg1 parentInspectorController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end