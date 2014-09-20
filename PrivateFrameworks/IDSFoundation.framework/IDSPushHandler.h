/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class APSConnection, NSMapTable, NSData, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface IDSPushHandler : NSObject <APSConnectionDelegate> {
    APSConnection *_apsConnection;
    NSData *_cachedPushToken;
    Class _APSConnectionClass;
    NSMutableSet *_topicsCache;
    NSMapTable *_handlerMap;
    NSObject<OS_dispatch_queue> *_ivarQueue;
}

@property(readonly) bool isConnected;
@property(readonly) NSData * pushToken;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedInstance;

- (bool)isConnected;
- (void)configureAsMacNotificationCenterObserver:(id)arg1;
- (void)setCommands:(id)arg1 forListener:(id)arg2;
- (void)setTopics:(id)arg1 forListener:(id)arg2;
- (void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4;
- (void)_recalculateTopicsCacheOnIvarQueue;
- (void)_updateTopicsOnIvarQueue;
- (id)pushToken;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didChangeConnectedStatus:(bool)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)removeListener:(id)arg1;
- (id)init;
- (void)dealloc;

@end
