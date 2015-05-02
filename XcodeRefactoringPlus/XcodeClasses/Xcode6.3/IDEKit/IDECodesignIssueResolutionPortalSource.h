//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDECodesignIssueResolutionPortalSource : NSObject
{
}

+ (id)defaultPortalSource;
- (id)requestDistributionProvisioningProfileForAccount:(id)arg1 signingCertificate:(id)arg2 platformIdentifier:(id)arg3 bundleIdentifiers:(id)arg4 includeDevices:(BOOL)arg5 logAspect:(id)arg6;
- (id)_requestDistributionProvisioningProfileWithPortalPlatform:(id)arg1 bundleIdentifier:(id)arg2 includeDevices:(BOOL)arg3 token:(id)arg4 logAspect:(id)arg5;
- (id)requestDevelopmentProvisioningProfileForAccount:(id)arg1 signingCertificate:(id)arg2 platformIdentifier:(id)arg3 bundleIdentifiers:(id)arg4 requiredCodesignableDevices:(id)arg5 requiredFeatures:(id)arg6 logAspect:(id)arg7;
- (id)_requestDevelopmentProvisioningProfileWithPortalPlatform:(id)arg1 bundleIdentifier:(id)arg2 requiredFeatures:(id)arg3 token:(id)arg4 logAspect:(id)arg5;
- (id)_registerCodeSignableDevice:(id)arg1 withPortalPlatform:(id)arg2 token:(id)arg3 logAspect:(id)arg4;
- (id)_requestProvisioningProfileWithPortalPlatform:(id)arg1 bundleIdentifier:(id)arg2 token:(id)arg3 profileOp:(id)arg4 logAspect:(id)arg5;
- (id)downloadProvisioningProfileWithProfileId:(id)arg1 platform:(id)arg2 token:(id)arg3 logAspect:(id)arg4;
- (id)revokeCertificateWithSerialNumber:(id)arg1 forAccount:(id)arg2 portalTeamID:(id)arg3 certificiateKind:(id)arg4 platformIdentifier:(id)arg5 logAspect:(id)arg6;
- (id)requestCertificateForAccount:(id)arg1 portalTeamID:(id)arg2 certificiateKind:(id)arg3 platformIdentifier:(id)arg4 logAspect:(id)arg5;
- (id)findSerialNumberOfNewestSigningCertificateForAccount:(id)arg1 portalTeamID:(id)arg2 certificiateKind:(id)arg3 platformIdentifier:(id)arg4 logAspect:(id)arg5;
- (id)_portalPlatformForPlatformIdentifier:(id)arg1;
- (id)_generatePortalOperationTokenForAccount:(id)arg1 portalTeamID:(id)arg2 logAspect:(id)arg3;
- (id)teamNameForTeamWithTeamID:(id)arg1;

@end