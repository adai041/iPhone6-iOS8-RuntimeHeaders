/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteNotificationClient : NSObject  {
}

+ (id)getNotificationUserInfoForToken:(int)arg1;
+ (id)getPendingNotificationUserInfo;
+ (void)registerForRemoteNotificationsWithLegacyTypes:(unsigned char)arg1;
+ (unsigned char)legacyRegisteredRemoteNotificationTypes;
+ (void)unregisterForRemoteNotifications;
+ (bool)isRegisteredForRemoteNotifications;
+ (void)registerForRemoteNotifications;
+ (unsigned int)_remoteNotificationServerPort;
+ (void)setAllowed:(bool)arg1 forBundleIdentifier:(id)arg2;
+ (void)getSupportedBundleIdentifiers:(id*)arg1 enabledBundleIdentifiers:(id*)arg2;


@end
