/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSDictionary, NSArray, NSNumber, SSURLBagContext;

@interface SSAuthenticationContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying> {
    NSString *_accountName;
    bool_accountNameEditable;
    long long _accountScope;
    bool_allowsBioAuthentication;
    bool_allowsBootstrapCellularData;
    bool_allowsRetry;
    bool_canCreateNewAccount;
    bool_canSetActiveAccount;
    NSString *_clientIdentifierHeader;
    bool_demoAccount;
    bool_displaysOnLockScreen;
    NSDictionary *_httpHeaders;
    NSString *_initialPassword;
    bool_persistsAcrossDeviceLock;
    bool_persistsPasswordFallback;
    NSString *_preferredITunesStoreClient;
    long long _promptStyle;
    NSString *_reasonDescription;
    NSDictionary *_requestParameters;
    NSNumber *_requiredUniqueIdentifier;
    bool_shouldCreateNewSession;
    bool_shouldFollowAccountButtons;
    bool_shouldIgnoreProtocol;
    bool_shouldSuppressDialogs;
    NSDictionary *_signupRequestParameters;
    long long _tokenType;
    NSArray *_userAgentComponents;
}

@property(copy,readonly) NSString * accountName;
@property(readonly) long long accountScope;
@property(getter=isAccountNameEditable,readonly) bool accountNameEditable;
@property(readonly) bool allowsRetry;
@property(readonly) bool canCreateNewAccount;
@property(readonly) bool canSetActiveAccount;
@property(copy,readonly) NSDictionary * HTTPHeaders;
@property(copy,readonly) NSString * initialPassword;
@property(readonly) bool persistsPasswordFallback;
@property(copy,readonly) NSString * preferredITunesStoreClient;
@property(readonly) long long promptStyle;
@property(copy,readonly) NSDictionary * requestParameters;
@property(retain,readonly) NSNumber * requiredUniqueIdentifier;
@property(readonly) bool shouldCreateNewSession;
@property(readonly) bool shouldFollowAccountButtons;
@property(readonly) bool shouldSuppressDialogs;
@property(copy,readonly) NSDictionary * signupRequestParameters;
@property(copy,readonly) NSArray * userAgentComponents;
@property(readonly) bool allowsBioAuthentication;
@property(readonly) bool allowsBootstrapCellularData;
@property(copy,readonly) NSString * clientIdentifierHeader;
@property(readonly) bool displaysOnLockScreen;
@property(getter=isDemoAccount,readonly) bool demoAccount;
@property(readonly) bool persistsAcrossDeviceLock;
@property(copy,readonly) NSString * reasonDescription;
@property(readonly) bool shouldIgnoreProtocol;
@property(readonly) long long tokenType;
@property(readonly) SSURLBagContext * URLBagContext;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)contextForSignIn;

- (long long)accountScope;
- (id)HTTPHeaders;
- (id)requestParameters;
- (id)requiredUniqueIdentifier;
- (id)userAgentComponents;
- (long long)tokenType;
- (id)signupRequestParameters;
- (bool)shouldSuppressDialogs;
- (bool)shouldIgnoreProtocol;
- (bool)shouldFollowAccountButtons;
- (bool)shouldCreateNewSession;
- (id)reasonDescription;
- (long long)promptStyle;
- (id)preferredITunesStoreClient;
- (bool)persistsPasswordFallback;
- (bool)persistsAcrossDeviceLock;
- (id)initialPassword;
- (id)clientIdentifierHeader;
- (bool)canSetActiveAccount;
- (bool)canCreateNewAccount;
- (bool)allowsRetry;
- (bool)allowsBioAuthentication;
- (bool)isAccountNameEditable;
- (void)_copyIvarsToCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (bool)allowsBootstrapCellularData;
- (id)_initSSAuthenticationContext;
- (bool)_allowCreateAccount;
- (bool)isDemoAccount;
- (bool)displaysOnLockScreen;
- (id)URLBagContext;
- (id)accountName;
- (id)initWithAccount:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1;

@end
