//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XDMServerConnection : XDMCommandLineConnection
{
    NSRecursiveLock *_outputLineLock;
    id _commandTarget;
    id <iCloudServerConnectionDelegate> _serverDelegate;
    NSString *_remoteAddress;
    NSDictionary *_commands;
}

@property(retain, nonatomic) NSDictionary *commands; // @synthesize commands=_commands;
@property(retain, nonatomic) NSString *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property(nonatomic) __weak id <iCloudServerConnectionDelegate> serverDelegate; // @synthesize serverDelegate=_serverDelegate;
@property(retain, nonatomic) id commandTarget; // @synthesize commandTarget=_commandTarget;
- (void).cxx_destruct;
- (void)didReceiveCommandLine:(id)arg1;
- (void)didClose;
- (void)sendErrorCode:(unsigned long long)arg1 token:(id)arg2 format:(id)arg3;
- (void)sendErrorCode:(unsigned long long)arg1 token:(id)arg2 format:(id)arg3 arguments:(struct __va_list_tag [1])arg4;
- (void)sendErrorCode:(unsigned long long)arg1 token:(id)arg2 message:(id)arg3;
- (void)sendResponseCode:(unsigned long long)arg1 token:(id)arg2 lines:(id)arg3;
- (void)sendResponseCode:(unsigned long long)arg1 token:(id)arg2 moreLinesFollows:(BOOL)arg3 format:(id)arg4;
- (void)sendResponseCode:(unsigned long long)arg1 token:(id)arg2 moreLinesFollows:(BOOL)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)sendResponseCode:(unsigned long long)arg1 token:(id)arg2 moreLinesFollows:(BOOL)arg3 message:(id)arg4;
- (void)sendResponseCode:(unsigned long long)arg1 token:(id)arg2 dataFollows:(BOOL)arg3 format:(id)arg4;
- (void)sendResponseCode:(unsigned long long)arg1 token:(id)arg2 dataFollows:(BOOL)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)sendResponseCode:(unsigned long long)arg1 token:(id)arg2 dataFollows:(BOOL)arg3 message:(id)arg4;
- (void)sendFormat:(id)arg1;
- (void)sendFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)sendString:(id)arg1;
- (void)logAtLevel:(unsigned char)arg1 withFormat:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
- (void)willCloseWithError:(id)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;

@end