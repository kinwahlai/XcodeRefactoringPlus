//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCEAnnouncementBoard : NSObject
{
    NSString *_name;
    NSMapTable *_announcements;
}

+ (id)currentWindowSignal;
+ (void)removeAllAnnouncementsWithSignal:(id)arg1;
+ (void)removeContext:(id)arg1;
+ (void)removeAnnouncementsWithSignal:(id)arg1 inContext:(id)arg2;
+ (void)removeAnnouncement:(id)arg1 inContext:(id)arg2;
+ (id)announce:(id)arg1 inContext:(id)arg2;
+ (id)defaultAnnouncementBoard;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)announcementsInContext:(id)arg1;
- (id)contexts;
- (void)removeAllAnnouncementsWithSignal:(id)arg1;
- (void)removeContext:(id)arg1;
- (void)removeAnnouncementsWithSignal:(id)arg1 inContext:(id)arg2;
- (void)removeAnnouncement:(id)arg1 inContext:(id)arg2;
- (id)announce:(id)arg1 inContext:(id)arg2;

@end