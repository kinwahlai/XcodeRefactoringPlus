//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IBDockViewHighlightProviderDelegate
- (id <IBCollection>)highlightableObjects;
- (void)incrementHighlightGeneration;
- (long long)highlightGeneration;
- (NSString *)groupForObject:(id)arg1;
- (IBDocument *)document;
- (IBStructureAreaDockView *)dockView;
- (NSView *)view;
@end