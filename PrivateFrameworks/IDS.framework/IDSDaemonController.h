/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSString, NSProtocolChecker, NSSet, NSMutableDictionary, IMRemoteObject<IDSDaemonProtocol>, IDSDaemonListener, IMLocalObject, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_group>;

@interface IDSDaemonController : NSObject <IDSDaemonProtocol> {
    id _delegate;
    IMRemoteObject<IDSDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IDSDaemonListener *_daemonListener;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_group> *_daemonConnectedGroup;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSMutableDictionary *_listenerServices;
    NSSet *_services;
    NSSet *_cachedServices;
    NSMutableDictionary *_listenerCommands;
    NSSet *_commands;
    NSSet *_cachedCommands;
    NSMutableDictionary *_listenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdateCaps;
    bool_hasCheckedForDaemon;
    bool_preventReconnect;
    bool_acquiringDaemonConnection;
    bool_autoReconnect;
    bool_hasBeenSuspended;
}

@property(readonly) IDSDaemonListener * listener;
@property(setter=_setAutoReconnect:) bool _autoReconnect;
@property(readonly) NSObject<OS_dispatch_queue> * _remoteMessageQueue;
@property(setter=_setListenerID:,retain) NSString * _listenerID;
@property id delegate;
@property(readonly) bool isConnecting;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)_setApplicationWillTerminate;
+ (bool)_applicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (id)sharedInstance;

- (void)_performBlock:(id)arg1;
- (id)services;
- (bool)isConnected;
- (id)localObject;
- (id)_remoteMessageQueue;
- (void)_setListenerID:(id)arg1;
- (id)_listenerID;
- (bool)removeListenerID:(id)arg1;
- (void)disconnectFromDaemon;
- (void)_handleDaemonException:(id)arg1;
- (void)_agentDidLaunchNotification:(id)arg1;
- (void)_listenerSetUpdated;
- (bool)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;
- (bool)hasListenerForID:(id)arg1;
- (bool)_makeConnectionWithLaunch:(bool)arg1 completionBlock:(id)arg2;
- (bool)_autoReconnect;
- (bool)connectToDaemon;
- (bool)localObjectExists;
- (void)_blockUntilSendQueueIsEmpty;
- (void)localObjectDiedNotification:(id)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (bool)remoteObjectExists;
- (void)_disconnectFromDaemonWithForce:(bool)arg1;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (void)_setAutoReconnect:(bool)arg1;
- (void)_noteDisconnected;
- (void)_noteSetupComplete;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (bool)_setCapabilities:(unsigned int)arg1;
- (bool)connectToDaemonWithLaunch:(bool)arg1;
- (void)blockUntilConnected;
- (void)sendXPCObject:(id)arg1 objectContext:(id)arg2;
- (bool)addListenerID:(id)arg1 services:(id)arg2;
- (id)commandsForListenerID:(id)arg1;
- (id)servicesForListenerID:(id)arg1;
- (bool)addListenerID:(id)arg1 services:(id)arg2 commands:(id)arg3;
- (bool)setCommands:(id)arg1 forListenerID:(id)arg2;
- (bool)setServices:(id)arg1 forListenerID:(id)arg2;
- (bool)connectToDaemonWithLaunch:(bool)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (bool)_setCommands:(id)arg1;
- (bool)_setServices:(id)arg1;
- (void)_connectToDaemonWithLaunch:(bool)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (void)_setServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned int)arg3;
- (void)_performBlock:(id)arg1 wait:(bool)arg2;
- (unsigned int)capabilities;
- (id)commands;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (id)listener;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (bool)isConnecting;

@end
