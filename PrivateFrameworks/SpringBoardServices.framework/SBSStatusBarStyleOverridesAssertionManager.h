/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSString, NSXPCConnection, NSHashTable, NSObject<OS_dispatch_queue>;

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <SBSStatusBarStyleOverridesAssertionClient> {
    NSHashTable *_assertions;
    NSXPCConnection *_sbXPCConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property(retain) NSHashTable * assertions;
@property(retain) NSXPCConnection * sbXPCConnection;
@property(retain) NSObject<OS_dispatch_queue> * internalQueue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedInstance;

- (id)assertions;
- (void)_tearDownXPCConnection;
- (void)setInternalQueue:(id)arg1;
- (id)internalQueue;
- (void)setSbXPCConnection:(id)arg1;
- (id)sbXPCConnection;
- (void)setAssertions:(id)arg1;
- (void)_invalidateStatusBarStyleOverridesAssertionsWithData:(id)arg1;
- (void)_internalQueue_removeStatusBarStyleOverridesAssertionMatchingData:(id)arg1 invalidate:(bool)arg2;
- (void)_reactivateAssertions;
- (void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (void)addStatusBarStyleOverridesAssertion:(id)arg1 withHandler:(id)arg2 onQueue:(id)arg3;
- (void)removeStatusBarStyleOverridesAssertion:(id)arg1;
- (id)init;
- (void)dealloc;

@end
