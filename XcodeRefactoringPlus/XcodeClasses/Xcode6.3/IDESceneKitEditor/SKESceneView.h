//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKESceneView : SCNView <SCNSceneRendererDelegate>
{
    BOOL _mouseDragged;
    long long _mouseClickCount;
    struct CGPoint _mouseClickLocation;
    struct CGSize size;
    SCNRenderer *offscreenRenderer;
    NSEvent *_cachedMouseDownEvent;
    unsigned int _texture;
    BOOL _multisamplingEnabled;
    id <SKESceneViewDelegate> _selectionDelegate;
}

@property __weak id <SKESceneViewDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(nonatomic) BOOL multisamplingEnabled; // @synthesize multisamplingEnabled=_multisamplingEnabled;
- (void).cxx_destruct;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
@property __weak SCNNode *cameraNode;
- (id)makeBackingLayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end