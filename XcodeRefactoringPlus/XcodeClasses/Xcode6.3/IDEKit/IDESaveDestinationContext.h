//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESaveDestinationContext : NSObject
{
    IDEWorkspaceTabController *_workspaceTabController;
    DVTFilePath *_destinationFilePath;
    NSString *_destinationType;
    NSArray *_destinationTypes;
    IDEGroup *_destinationGroup;
    unsigned long long _destinationIndex;
    NSArray *_instantiatedItems;
}

@property(copy) NSArray *instantiatedItems; // @synthesize instantiatedItems=_instantiatedItems;
@property unsigned long long destinationIndex; // @synthesize destinationIndex=_destinationIndex;
@property(retain) IDEGroup *destinationGroup; // @synthesize destinationGroup=_destinationGroup;
@property(copy) NSArray *destinationTypes; // @synthesize destinationTypes=_destinationTypes;
@property(copy) NSString *destinationType; // @synthesize destinationType=_destinationType;
@property(retain) DVTFilePath *destinationFilePath; // @synthesize destinationFilePath=_destinationFilePath;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
- (void).cxx_destruct;
- (id)workspaceWindow;
@property(readonly) IDEWorkspace *workspace;

@end