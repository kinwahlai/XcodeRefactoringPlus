//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol iCloudServerListenerDelegate <NSObject>

@optional
- (void)serverListener:(XDMServerListener *)arg1 logAtLevel:(unsigned char)arg2 withFormat:(NSString *)arg3 arguments:(struct __va_list_tag [1])arg4;
- (void)serverListener:(XDMServerListener *)arg1 closeConnection:(id)arg2;
- (id)serverListener:(XDMServerListener *)arg1 connectionForInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3 remoteAddress:(NSString *)arg4;
- (id)serverListener:(XDMServerListener *)arg1 connectionForSocket:(int)arg2 address:(NSString *)arg3;
- (void)serverListener:(XDMServerListener *)arg1 didStopWithError:(NSError *)arg2;
- (void)serverListenerDidStart:(XDMServerListener *)arg1;
@end