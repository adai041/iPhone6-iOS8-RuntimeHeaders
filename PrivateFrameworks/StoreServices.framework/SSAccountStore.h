/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSAccount, NSArray, NSObject<OS_dispatch_queue>, NSMutableArray, SSKeyValueStore;

@interface SSAccountStore : NSObject  {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSKeyValueStore *_keyValueStore;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableArray *_notifyTokens;
}

@property(readonly) SSAccount * activeAccount;
@property(readonly) SSAccount * activeLockerAccount;
@property(copy,readonly) NSArray * accounts;
@property(getter=isExpired,readonly) bool expired;
@property(getter=isAuthenticationActive,readonly) bool authenticationActive;

+ (id)existingDefaultStore;
+ (void)resetExpiration;
+ (void)setDefaultStore:(id)arg1;
+ (double)tokenExpirationInterval;
+ (void)resetExpirationForTokenType:(long long)arg1;
+ (bool)isExpiredForTokenType:(long long)arg1;
+ (bool)isExpired;
+ (id)defaultStore;

- (void)resetExpiration;
- (id)setActiveLockerAccount:(id)arg1;
- (id)setActiveAccount:(id)arg1;
- (id)accountWithUniqueIdentifier:(id)arg1;
- (void)signOutAllAccounts;
- (void)_postAccountStoreChangeNotification;
- (void)_dispatchSync:(id)arg1;
- (void)_dispatchAsync:(id)arg1;
- (void)setDefaultAccountName:(id)arg1 completionBlock:(id)arg2;
- (void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2;
- (bool)isAuthenticationActive;
- (void)getDefaultAccountNameUsingBlock:(id)arg1;
- (id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(bool)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1 scope:(long long)arg2;
- (void)resetExpirationForTokenType:(long long)arg1;
- (bool)isExpiredForTokenType:(long long)arg1;
- (id)_keyValueStore;
- (void)signOutAccount:(id)arg1;
- (id)addAccount:(id)arg1;
- (void)reloadAccounts;
- (id)accounts;
- (bool)isExpired;
- (id)init;
- (void)dealloc;
- (id)activeLockerAccount;
- (id)activeAccount;

@end
