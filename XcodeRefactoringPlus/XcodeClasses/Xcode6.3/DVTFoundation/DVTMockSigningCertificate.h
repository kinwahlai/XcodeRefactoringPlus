//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTMockSigningCertificate : DVTSigningCertificate
{
    BOOL _isIdentityMock;
    BOOL _isTrustedMock;
    NSString *_certificateKindMock;
    NSString *_commonNameMock;
    NSString *_portalTeamIDMock;
    NSString *_portalTeamNameMock;
    NSString *_portalMemberIDMock;
    NSDate *_issueDateMock;
    NSDate *_expirationDateMock;
    NSString *_sha1HashMock;
    NSString *_serialNumberMock;
}

@property(copy) NSString *serialNumberMock; // @synthesize serialNumberMock=_serialNumberMock;
@property(copy) NSString *sha1HashMock; // @synthesize sha1HashMock=_sha1HashMock;
@property BOOL isTrustedMock; // @synthesize isTrustedMock=_isTrustedMock;
@property(copy) NSDate *expirationDateMock; // @synthesize expirationDateMock=_expirationDateMock;
@property(copy) NSDate *issueDateMock; // @synthesize issueDateMock=_issueDateMock;
@property BOOL isIdentityMock; // @synthesize isIdentityMock=_isIdentityMock;
@property(copy) NSString *portalMemberIDMock; // @synthesize portalMemberIDMock=_portalMemberIDMock;
@property(copy) NSString *portalTeamNameMock; // @synthesize portalTeamNameMock=_portalTeamNameMock;
@property(copy) NSString *portalTeamIDMock; // @synthesize portalTeamIDMock=_portalTeamIDMock;
@property(copy) NSString *commonNameMock; // @synthesize commonNameMock=_commonNameMock;
@property(copy) NSString *certificateKindMock; // @synthesize certificateKindMock=_certificateKindMock;
- (void).cxx_destruct;
- (id)defaultDesignatedRequirementsForIdentifier:(id)arg1;
- (struct OpaqueSecCertificateRef *)certificateRef;
- (BOOL)isExpired;
- (id)serialNumber;
- (id)sha1Hash;
- (BOOL)isTrusted;
- (id)expirationDate;
- (id)issueDate;
- (BOOL)isIdentity;
- (id)portalMemberID;
- (id)portalTeamName;
- (id)portalTeamID;
- (id)commonName;
- (id)certificateKind;
- (void)validate;

@end