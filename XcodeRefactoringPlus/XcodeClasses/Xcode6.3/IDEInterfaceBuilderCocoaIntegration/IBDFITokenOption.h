//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBDFITokenOption : NSObject <NSCoding>
{
    NSString *editingString;
    NSString *displayString;
    NSString *menuString;
    BOOL isLabel;
    BOOL isHidden;
}

+ (id)tokenOptionWithEditingString:(id)arg1 displayString:(id)arg2 menuString:(id)arg3 hidden:(BOOL)arg4 label:(BOOL)arg5;
- (void).cxx_destruct;
- (void)setIsHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (void)setIsLabel:(BOOL)arg1;
- (BOOL)isLabel;
- (void)setMenuString:(id)arg1;
- (id)menuString;
- (void)setDisplayString:(id)arg1;
- (id)displayString;
- (void)setEditingString:(id)arg1;
- (id)editingString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEditingString:(id)arg1 displayString:(id)arg2 menuString:(id)arg3 hidden:(BOOL)arg4 label:(BOOL)arg5;

@end