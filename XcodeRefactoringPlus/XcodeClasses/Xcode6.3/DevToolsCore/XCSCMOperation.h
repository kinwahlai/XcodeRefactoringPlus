//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSCMOperation : NSObject <NSCopying>
{
    id <XCSCMOperationDelegate> _delegate;
    NSString *_operationState;
    BOOL _scanForErrors;
}

- (BOOL)scanForErrors;
- (void)setScanForErrors:(BOOL)arg1;
- (id)operationState;
- (void)setOperationState:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)terminate;
- (void)suspend;
- (void)run;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end