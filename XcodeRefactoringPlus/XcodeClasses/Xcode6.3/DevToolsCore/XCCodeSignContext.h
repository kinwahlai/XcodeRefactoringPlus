//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCCodeSignContext : NSObject
{
}

+ (id)codeSignProductInTargetBuildContext:(id)arg1;
+ (id)entitlementDependenciesInTargetBuildContext:(id)arg1 additionalEntitlements:(id)arg2;
+ (id)codeSignArgumentsInTargetBuildContext:(id)arg1;
+ (void)defineCodeSignAuxiliaryFilesInTargetBuildContext:(id)arg1;
+ (void)defineAuxiliaryFilesInTargetBuildContext:(id)arg1;
+ (id)codeSignContextClassFromContext:(id)arg1;
+ (id)codeSignIdentityMenu:(id)arg1;
+ (id)chooseOneIdentityString:(id)arg1;
+ (id)certificateIdentitiesMatchingIdentityString:(id)arg1 inBuildContext:(id)arg2 withMessage:(id *)arg3;
+ (id)codeSigningCertificatesHavingIdentity:(id)arg1;
+ (id)codeSigningCertificates;
+ (id)validateCodeSignIdentityInBuildContext:(id)arg1;
+ (id)certificateIdentityMatchingIdentityString:(id)arg1 inBuildContext:(id)arg2 withMessage:(id *)arg3;
+ (void)codeSigningNotAllowed:(id)arg1;
+ (void)resourceRulesNotApplicable:(id)arg1;
+ (void)entitlementsNotApplicable:(id)arg1;
+ (id)stringProductTypeInSDK:(id)arg1;
+ (BOOL)willCodeSignInContext:(id)arg1;
+ (BOOL)isAdHocIdentity:(id)arg1;
+ (BOOL)doesStringSpecifyIdentity:(id)arg1;
+ (id)defaultCodeSignIdentity;
+ (void)registerForExternalNotifications;
+ (void)deregisterForExternalNotifications;
+ (void)_keychainEvent:(id)arg1;
+ (void)noteProfilesDidChangeNotification:(id)arg1;
+ (void)noteCodeSigningSettingsDidChange;
+ (void)noteCodeSigningSettingsDidChangeNotification:(id)arg1;
+ (void)noteCodeSigningSettingsDidChangeForProject:(id)arg1;
+ (id)_cachedIdentifiers;
+ (id)_cachedIdentifierIndex;
+ (id)_cachedCertificates;
+ (void)_rebuildCertificatesFromKeychain;
+ (void)_rebuildCertificatesFromKeychainAsync;
+ (void)_rebuildCacheFromKeychainCertificates:(id)arg1;
+ (id)_certificateCache;
+ (id)_getKeychainSigningCertificates;
+ (void)initialize;

@end