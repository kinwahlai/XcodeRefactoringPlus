//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSHTTPResponse : NSObject
{
    NSURLRequest *_originalRequest;
    long long _httpStatusCode;
    NSDictionary *_headers;
    NSString *_rawText;
    NSData *_rawData;
    NSDictionary *_body;
    NSError *_error;
    NSError *_unpackingError;
    XCSUser *_user;
    NSURL *_location;
}

+ (id)localizedStringForStatusCode:(long long)arg1;
@property(retain, nonatomic) NSURL *location; // @synthesize location=_location;
@property(retain, nonatomic) XCSUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSError *unpackingError; // @synthesize unpackingError=_unpackingError;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSString *rawText; // @synthesize rawText=_rawText;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) long long httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property(retain, nonatomic) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
- (void).cxx_destruct;
- (BOOL)_unpackResponseData:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)localizedStringForStatusCode;
- (id)initWithHTTPRequest:(id)arg1 statusCode:(long long)arg2 headers:(id)arg3 data:(id)arg4 user:(id)arg5 error:(id)arg6;

@end