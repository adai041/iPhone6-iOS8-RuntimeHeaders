/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, NSMutableDictionary, NSDate, NSDictionary, ACAccount, NSString, ACAccountCredential, NSSet, NSMutableSet, ACAccountType, NSArray, ACAccountStore;

@interface ACAccount : NSObject <NSSecureCoding> {
    ACAccountStore *_store;
    NSString *_identifier;
    NSString *_accountDescription;
    NSString *_owningBundleID;
    NSString *_username;
    NSString *_authenticationType;
    NSString *_credentialType;
    NSString *_clientToken;
    bool_haveCheckedForClientToken;
    ACAccountType *_accountType;
    ACAccountCredential *_credential;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_dataclassProperties;
    bool_accountAccessAvailable;
    bool_authenticated;
    bool_active;
    bool_supportsAuthentication;
    bool_visible;
    NSURL *_objectID;
    NSDate *_date;
    NSDate *_lastCredentialRenewalRejectionDate;
    ACAccount *_parentAccount;
    bool_haveCheckedForParentAccount;
    NSString *_parentAccountIdentifier;
    bool_haveCheckedForChildAccounts;
    NSArray *_childAccounts;
    NSMutableSet *_enabledDataclasses;
    NSMutableSet *_provisionedDataclasses;
    NSMutableSet *_dirtyProperties;
    NSMutableSet *_dirtyAccountProperties;
    id _credentialsDidChangeObserver;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _accountPropertiesTransformer;

    bool_creatingFromManagedObject;
}

@property(retain) NSString * mcProfileUUID;
@property(retain) NSString * mcPayloadUUID;
@property(readonly) NSString * identifier;
@property(retain) ACAccountType * accountType;
@property(copy) NSString * accountDescription;
@property(copy) NSString * username;
@property(readonly) NSString * userFullName;
@property(retain) ACAccountCredential * credential;
@property(readonly) NSURL * objectID;
@property(readonly) ACAccountStore * accountStore;
@property(retain) ACAccount * parentAccount;
@property(readonly) NSString * parentAccountIdentifier;
@property(readonly) NSArray * childAccounts;
@property(retain) NSMutableSet * enabledDataclasses;
@property(retain) NSMutableSet * provisionedDataclasses;
@property(readonly) NSDictionary * dataclassProperties;
@property(getter=isAuthenticated) bool authenticated;
@property(readonly) NSDictionary * accountProperties;
@property(readonly) ACAccount * displayAccount;
@property(getter=isActive) bool active;
@property bool supportsAuthentication;
@property(getter=isDirty,readonly) bool dirty;
@property(readonly) NSSet * dirtyProperties;
@property(readonly) NSSet * dirtyAccountProperties;
@property(readonly) NSString * authenticationType;
@property(readonly) NSString * credentialType;
@property(readonly) bool supportsPush;
@property(retain) NSDate * creationDate;
@property(getter=isVisible) bool visible;
@property(retain) NSDate * lastCredentialRenewalRejectionDate;
@property(readonly) NSString * shortDebugName;
@property(readonly) NSString * clientToken;
@property(copy) id accountPropertiesTransformer;

+ (bool)supportsSecureCoding;
+ (id)_createNewAccountUID;

- (void)setAccountType:(id)arg1;
- (bool)isAuthenticated;
- (bool)isDirty;
- (id)username;
- (bool)isProvisionedForDataclass:(id)arg1;
- (id)propertiesForDataclass:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (bool)isEnabledForDataclass:(id)arg1;
- (id)creationDate;
- (id)objectID;
- (void)setCredentialType:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (id)enabledDataclasses;
- (void)setCredential:(id)arg1;
- (id)credentialWithError:(id*)arg1;
- (void)setAccountDescription:(id)arg1;
- (id)accountDescription;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)accountProperties;
- (id)parentAccountIdentifier;
- (id)accountPropertyForKey:(id)arg1;
- (void)setAuthenticated:(bool)arg1;
- (void)setProvisionedDataclasses:(id)arg1;
- (void)setAuthenticationType:(id)arg1;
- (id)authenticationType;
- (id)credential;
- (id)provisionedDataclasses;
- (bool)supportsPush;
- (void)takeValuesFromModifiedAccount:(id)arg1;
- (bool)addClientToken:(id)arg1;
- (bool)isEnabledToSyncDataclass:(id)arg1;
- (bool)authenticated;
- (id)clientToken;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)parentAccount;
- (void)setParentAccount:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)initWithAccountType:(id)arg1;
- (id)accountType;
- (id)childAccounts;
- (id)accountStore;
- (id)childAccountsWithAccountTypeIdentifier:(id)arg1;
- (id)lastCredentialRenewalRejectionDate;
- (id)accountByCleaningThirdPartyTransformations;
- (void)setLastCredentialRenewalRejectionDate:(id)arg1;
- (id)initWithManagedAccount:(id)arg1;
- (void)markAllPropertiesDirty;
- (void)setEnabledDataclasses:(id)arg1;
- (void)setDataclassProperties:(id)arg1;
- (id)dataclassProperties;
- (id)dirtyAccountProperties;
- (id)diffAccount:(id)arg1;
- (id)_initWithManagedAccount:(id)arg1 accountStore:(id)arg2 withDirtyStateFromAccount:(id)arg3;
- (void)_loadAllCachedProperties;
- (void)_setAccountStore:(id)arg1;
- (id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2;
- (void)setOwningBundleID:(id)arg1;
- (id)owningBundleID;
- (bool)supportsAuthentication;
- (void)setSupportsAuthentication:(bool)arg1;
- (void).cxx_destruct;
- (bool)isVisible;
- (void)setActive:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setVisible:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (bool)isActive;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)reload;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)credentialType;
- (void)setEnabled:(bool)arg1 forDataclass:(id)arg2;
- (id)userFullName;
- (id)displayAccount;
- (bool)isPropertyDirty:(id)arg1;
- (id)dirtyProperties;
- (void)_setObjectID:(id)arg1;
- (void)refresh;
- (void)setAccountPropertiesTransformer:(id)arg1;
- (id)shortDebugName;
- (void)setCreatingFromManagedObject:(bool)arg1;
- (void)setProperties:(id)arg1 forDataclass:(id)arg2;
- (void)setAccountProperties:(id)arg1;
- (void)_markCredentialDirty;
- (id)fullDescription;
- (bool)_useParentForCredentials;
- (id)enabledAndSyncableDataclasses;
- (void)_markAccountPropertyDirty:(id)arg1;
- (id)accountPropertiesTransformer;
- (void)credentialsChanged:(id)arg1;
- (void)_markPropertyDirty:(id)arg1;
- (void)_installCredentialsChangedObserver;
- (void)_clearCachedCredentials;
- (void)_clearDirtyProperties;
- (void)_clearCachedChildAccounts;
- (id)mcBackingPayload;
- (id)mcBackingProfile;
- (void)setMcPayloadUUID:(id)arg1;
- (id)mcPayloadUUID;
- (void)setMcProfileUUID:(id)arg1;
- (id)mcProfileUUID;
- (bool)MCIsManaged;

@end
