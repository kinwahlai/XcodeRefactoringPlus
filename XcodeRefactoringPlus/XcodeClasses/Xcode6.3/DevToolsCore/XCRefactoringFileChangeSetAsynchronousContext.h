//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRefactoringFileChangeSetAsynchronousContext : NSObject
{
    id _delegate;
    PBXProject *_project;
    id _callbackTarget;
    SEL _callbackSelector;
}

- (SEL)callbackSelector;
- (id)callbackTarget;
- (id)project;
- (id)delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 project:(id)arg2 callbackTarget:(id)arg3 callbackSelector:(SEL)arg4;

@end