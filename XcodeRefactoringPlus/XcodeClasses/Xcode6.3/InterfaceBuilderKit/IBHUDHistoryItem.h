//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHUDHistoryItem : NSObject
{
    NSDictionary *interfaceState;
    id source;
}

+ (id)historyItemWithSource:(id)arg1 interfaceState:(id)arg2;
- (void)setSource:(id)arg1;
- (id)source;
- (void)setInterfaceState:(id)arg1;
- (id)interfaceState;
- (void)dealloc;
- (id)initWithSource:(id)arg1 interfaceState:(id)arg2;

@end