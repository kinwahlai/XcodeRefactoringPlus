//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCPopUpButtonForFastCell : DVTPopUpButtonCell
{
    id _dvtRepresentedObjectValue;
    id _nodeAdapter;
}

@property(retain) id dvtRepresentedObjectValue; // @synthesize dvtRepresentedObjectValue=_dvtRepresentedObjectValue;
@property(retain) id nodeAdapter; // @synthesize nodeAdapter=_nodeAdapter;
- (void).cxx_destruct;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)attachPopUpWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)selectItemAccordingtoRepresentedObjectValue;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;

@end