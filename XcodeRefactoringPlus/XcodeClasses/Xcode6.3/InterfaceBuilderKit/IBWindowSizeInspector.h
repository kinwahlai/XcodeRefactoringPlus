//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBWindowSizeInspector : IBBoundInspector
{
    IBWindowLayoutView *layoutView;
    NSButton *currentContentFrameButton;
    NSButton *currentMinSizeButton;
    NSButton *currentMaxSizeButton;
    NSButton *hasMaxSize;
    NSButton *hasMinSize;
    NSTextField *minWidth;
    NSStepper *minWidthStepper;
    NSTextField *maxWidth;
    NSStepper *maxWidthStepper;
    NSTextField *minHeight;
    NSStepper *minHeightStepper;
    NSTextField *maxHeight;
    NSStepper *maxHeightStepper;
    NSTextField *contentHeight;
    NSStepper *contentHeightStepper;
    NSTextField *contentWidth;
    NSStepper *contentWidthStepper;
    NSTextField *contentX;
    NSStepper *contentXStepper;
    NSTextField *contentY;
    NSStepper *contentYStepper;
}

+ (void)assertConformationWithInformalProtocol:(id)arg1;
+ (void)blessWindowTemplateClass:(Class)arg1;
- (void)useCurrentMaximumSize:(id)arg1;
- (void)useCurrentMinimumSize:(id)arg1;
- (void)previewPosition:(id)arg1;
- (void)useCurrentContentFrame:(id)arg1;
- (void)layedOut:(id)arg1;
- (void)refresh;
- (void)ok:(id)arg1;
- (void)awakeFromNib;

@end