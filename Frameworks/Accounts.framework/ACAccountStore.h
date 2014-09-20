/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@class NSString, NSArray, NSObject<OS_dispatch_queue>, ACRemoteAccountStoreSession;

@interface ACAccountStore : NSObject  {
    NSString *_clientBundleID;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id _daemonAccountStoreDidChangeObserver;
    ACRemoteAccountStoreSession *_remoteAccountStoreSession;
}

@property(readonly) NSArray * accounts;
@property(readonly) NSString * effectiveBundleID;
@property(retain) ACRemoteAccountStoreSession * remoteAccountStoreSession;

+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
+ (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
+ (bool)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;

- (id)effectiveBundleID;
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)setPermissionGranted:(bool)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (void)renewCredentialsForAccount:(id)arg1 force:(bool)arg2 reason:(id)arg3 completion:(id)arg4;
- (void)handleURL:(id)arg1;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(id)arg2;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(bool)arg3 completion:(id)arg4;
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(id)arg3;
- (id)clientTokenForAccount:(id)arg1;
- (bool)addClientToken:(id)arg1 forAccount:(id)arg2;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(id)arg2;
- (id)credentialForAccount:(id)arg1;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(id)arg2;
- (void)accountsWithAccountType:(id)arg1 completion:(id)arg2;
- (void)accountWithIdentifier:(id)arg1 completion:(id)arg2;
- (id)accounts;
- (id)credentialForAccount:(id)arg1 error:(id*)arg2;
- (id)accountWithIdentifier:(id)arg1;
- (void)renewCredentialsForAccount:(id)arg1 completion:(id)arg2;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (id)accountsWithAccountType:(id)arg1;
- (id)initWithEffectiveBundleID:(id)arg1;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;
- (id)dataclassActionsForAccountSave:(id)arg1;
- (id)allAccountTypes;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (bool)hasAccountWithDescription:(id)arg1;
- (void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(id)arg3;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2;
- (id)allDataclasses;
- (id)remoteAccountStoreSession;
- (void)disconnectFromRemoteAccountStore;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(id)arg3;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(id)arg3;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(id)arg2;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id)arg2;
- (bool)isPushSupportedForAccount:(id)arg1;
- (bool)isPerformingDataclassActionsForAccount:(id)arg1;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(bool)arg2 withHandler:(id)arg3;
- (void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(bool)arg3 completion:(id)arg4;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;
- (id)displayTypeForAccountWithIdentifier:(id)arg1;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1;
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;
- (bool)isTetheredSyncingEnabledForDataclass:(id)arg1;
- (id)dataclassActionsForAccountDeletion:(id)arg1;
- (id)typeIdentifierForDomain:(id)arg1;
- (void)clearGrantedPermissionsForAccountType:(id)arg1;
- (id)grantedPermissionsForAccountType:(id)arg1;
- (bool)permissionForAccountType:(id)arg1;
- (id)appPermissionsForAccountType:(id)arg1;
- (id)accessKeysForAccountType:(id)arg1;
- (id)syncableDataclassesForAccountType:(id)arg1;
- (id)supportedDataclassesForAccountType:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (id)childAccountsForAccount:(id)arg1;
- (id)parentAccountForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (id)initWithRemoteEndpoint:(id)arg1;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1 withCompletion:(id)arg2;
- (void)_saveAccount:(id)arg1 verify:(bool)arg2 dataclassActions:(id)arg3 completion:(id)arg4;
- (void)setRemoteAccountStoreSession:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;

@end
