//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBCollectionViewInspector : IBBoundInspector
{
    NSButton *useAlternatingColorsButton;
    NSButton *selectableButton;
    NSButton *allowsMultipleSelectionButton;
    NSTextField *maxNumberOfRowsTextField;
    NSTextField *maxNumberOfColumnsTextField;
    NSStepper *maxNumberOfRowsStepper;
    NSStepper *maxNumberOfColumnsStepper;
    IBColorPickerPopUpButton *primaryBackgroundColor;
    IBColorPickerPopUpButton *alternateBackgroundColor;
}

- (void)awakeFromNib;

@end