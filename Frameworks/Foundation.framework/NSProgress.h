/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableDictionary, NSXPCConnection, NSMutableSet, NSLock, NSDictionary;

@interface NSProgress : NSObject <NSProgressPublisher> {
    id _group;
    long long _reserved4;
    id _values;
    id _reserved5;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cancellationHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _pausingHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _prioritizationHandler;

    unsigned long long _flags;
    id _userInfoProxy;
    NSString *_publisherID;
    NSXPCConnection *_connection;
    long long _unpublishingBlockageCount;
    long long _disconnectingBlockageCount;
    long long _remoteObserverCount;
    NSMutableDictionary *_acknowledgementHandlersByBundleID;
    NSMutableDictionary *_lastNotificationTimesByKey;
    NSMutableDictionary *_userInfoLastNotificationTimesByKey;
    NSLock *_lock;
    NSMutableSet *_childrenGroups;
}

@property unsigned long long installState;
@property unsigned long long installPhase;
@property long long totalUnitCount;
@property long long completedUnitCount;
@property(copy) NSString * localizedDescription;
@property(copy) NSString * localizedAdditionalDescription;
@property(getter=isCancellable) bool cancellable;
@property(getter=isPausable) bool pausable;
@property(getter=isCancelled,readonly) bool cancelled;
@property(getter=isPaused,readonly) bool paused;
@property(copy) id cancellationHandler;
@property(copy) id pausingHandler;
@property(getter=isIndeterminate,readonly) bool indeterminate;
@property(readonly) double fractionCompleted;
@property(copy,readonly) NSDictionary * userInfo;
@property(copy) NSString * kind;
@property(getter=isOld,readonly) bool old;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(id)arg2;
+ (id)progressWithTotalUnitCount:(long long)arg1;
+ (void)_removeSubscriber:(id)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentProgress;
+ (id)addSubscriberForFileURL:(id)arg1 usingBlock:(id)arg2;
+ (void)removeSubscriber:(id)arg1;
+ (id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id)arg2;
+ (id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (id)_addSubscriberForFileURL:(id)arg1 usingBlock:(id)arg2;
+ (id)_addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id)arg2;
+ (id)keyPathsForValuesAffectingInstallPhase;
+ (id)keyPathsForValuesAffectingInstallState;
+ (id)childProgressForBundleID:(id)arg1 andPhase:(unsigned long long)arg2;
+ (id)publishingKeyForApp:(id)arg1 withPhase:(unsigned long long)arg2;
+ (id)_subscriberInterface;
+ (id)_publisherInterface;
+ (id)_registrarInterface;

- (bool)isPaused;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)setKind:(id)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (void)_unpublish;
- (void)_publish;
- (void)setCancellable:(bool)arg1;
- (bool)isFinished;
- (void)pause;
- (long long)completedUnitCount;
- (long long)totalUnitCount;
- (double)fractionCompleted;
- (id)kind;
- (bool)isIndeterminate;
- (id)localizedDescription;
- (bool)isCancelled;
- (id)cancellationHandler;
- (void)setCancellationHandler:(id)arg1;
- (id)userInfo;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)resignCurrent;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(id)arg2;
- (id)prioritizationHandler;
- (void)setPrioritizationHandler:(id)arg1;
- (bool)isPrioritizable;
- (void)setPrioritizable:(bool)arg1;
- (id)_publishingAppBundleIdentifier;
- (bool)isOld;
- (void)acknowledgeWithSuccess:(bool)arg1;
- (id)acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)setAcknowledgementHandler:(id)arg1 forAppBundleIdentifier:(id)arg2;
- (void)unpublish;
- (void)publish;
- (id)pausingHandler;
- (bool)isPausable;
- (void)setPausable:(bool)arg1;
- (bool)isCancellable;
- (id)localizedAdditionalDescription;
- (void)setLocalizedAdditionalDescription:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(bool)arg2;
- (oneway void)stopProvidingValues;
- (oneway void)startProvidingValuesWithInitialAcceptor:(id)arg1;
- (id)_acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)_setAcknowledgementHandler:(id)arg1 forAppBundleIdentifier:(id)arg2;
- (void)_unblockDisconnecting;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)_updateFractionCompletedFromOldFraction:(id)arg1 toNewFraction:(id)arg2;
- (void)_setValueForKeys:(id)arg1 settingBlock:(id)arg2;
- (void)_notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(bool)arg2;
- (void)_unblockUnpublishing;
- (void)__notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(bool)arg2;
- (void)_addChild:(id)arg1 toGroup:(id)arg2 isPaused:(bool*)arg3 isCancelled:(bool*)arg4;
- (id)ownedDictionaryObjectForKey:(id)arg1;
- (id)ownedDictionaryKeyEnumerator;
- (unsigned long long)ownedDictionaryCount;
- (id)_indentedDescription:(unsigned long long)arg1;
- (void)_removeGroup:(id)arg1 fraction:(id)arg2 portion:(long long)arg3;
- (void)_updateGroup:(id)arg1 oldFraction:(id)arg2 newFraction:(id)arg3 portion:(long long)arg4;
- (oneway void)prioritize;
- (void)_setGroup:(id)arg1;
- (void)_setCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)setPausingHandler:(id)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)resume;
- (id)_LSDescription;
- (void)setInstallPhase:(unsigned long long)arg1;
- (unsigned long long)installPhase;
- (id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned long long)arg3;
- (unsigned long long)installState;
- (void)setInstallState:(unsigned long long)arg1;
- (void)_setRemoteValue:(id)arg1 forKey:(id)arg2 inUserInfo:(bool)arg3;
- (id)_initWithValues:(id)arg1;
- (void)acknowledge;
- (void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(id)arg2;

@end
