//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DevkitEditInfo : NSObject
{
    DevkitTextFileChange *_textFileChange;
    struct _NSRange _originalTextCharacterRange;
    NSString *_originalString;
    struct _DevkitLineInfo _newTextLineInfo;
}

@property(readonly) struct _DevkitLineInfo newTextLineInfo; // @synthesize newTextLineInfo=_newTextLineInfo;
@property(readonly) NSString *originalString; // @synthesize originalString=_originalString;
@property(readonly) struct _NSRange originalTextCharacterRange; // @synthesize originalTextCharacterRange=_originalTextCharacterRange;
@property(readonly) DevkitTextFileChange *textFileChange; // @synthesize textFileChange=_textFileChange;
- (void).cxx_destruct;
- (void)shiftNewTextLineInfoByColumnDelta:(long long)arg1;
- (void)removeLineFromNewTextLineInfoRange;
- (void)shiftNewTextLineInfoByLineDelta:(long long)arg1;
- (id)description;
- (id)initWithTextFileChange:(id)arg1 originalTextCharacterRange:(struct _NSRange)arg2 originalString:(id)arg3 newTextLineInfo:(struct _DevkitLineInfo)arg4;

@end