//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRefactoringCreateSuperclassTextInputValidator : XCRefactoringTextInputValidator
{
    NSString *_subclassName;
    PBXProject *_project;
}

- (id)sameAsExistingClass;
- (id)sameAsSubclassLocalizedMessage;
- (void)dealloc;
- (id)initWithSubclassName:(id)arg1 project:(id)arg2;
- (BOOL)isStringValid:(id)arg1 otherStrings:(id)arg2 localizedMessage:(id *)arg3 invalidRange:(struct _NSRange *)arg4;

@end