//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBNSSplitViewEditor : IBNSViewEditor
{
}

+ (struct CGRect)rectForDefaultCursorForChildView:(id)arg1 ofEditedObject:(id)arg2 inFrameController:(id)arg3;
+ (Class)ibDropTargetResolverClass;
- (BOOL)interceptEvent:(id)arg1;
- (void)tryToDragSubviewsWithLeftMouseDown:(id)arg1 andLeftMouseDragged:(id)arg2;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (id)selectionMaskForObject:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (id)editedSplitView;

@end