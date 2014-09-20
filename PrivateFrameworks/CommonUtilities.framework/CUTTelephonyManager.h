/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@class NSMutableSet, NSRecursiveLock;

@interface CUTTelephonyManager : NSObject  {
    bool_registered;
    NSRecursiveLock *_lock;
    NSMutableSet *_disableFastDormancyTokens;
    void *_suspendDormancyAssertion;
    struct __CTServerConnection { } *_serverConnection;
}

@property struct __CTServerConnection { }* _serverConnection;
@property bool registered;
@property void* _suspendDormancyAssertion;
@property(retain) NSRecursiveLock * lock;
@property(retain) NSMutableSet * disableFastDormancyTokens;

+ (id)sharedInstance;

- (void)set_suspendDormancyAssertion:(void*)arg1;
- (void*)_suspendDormancyAssertion;
- (void)set_serverConnection:(struct __CTServerConnection { }*)arg1;
- (struct __CTServerConnection { }*)_serverConnection;
- (void)setDisableFastDormancyTokens:(id)arg1;
- (id)disableFastDormancyTokens;
- (void)__adjustFastDormancyTokens;
- (void)_setFastDormancySuspended:(bool)arg1;
- (bool)disableFastDormancy;
- (void)_adjustFastDormancyTokens;
- (void)addFastDormancyDisableToken:(id)arg1;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)setLock:(id)arg1;
- (id)lock;
- (id)init;
- (void)dealloc;
- (void)setRegistered:(bool)arg1;
- (bool)registered;

@end
