/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) long long statusBarStyle;
@property(readonly) bool statusBarHidden;
@property(readonly) long long defaultStatusBarStyle;
@property(readonly) bool defaultStatusBarHidden;
@property(copy,readonly) NSString * defaultPNGName;
@property(readonly) double defaultPNGExpirationTime;
@property(readonly) long long compatibilityMode;
@property(readonly) bool idleTimerDisabled;
@property(readonly) bool orientationEnabled;
@property(readonly) unsigned long long proximityDetectionModes;
@property(readonly) long long controlCenterRevealMode;
@property(readonly) long long notificationCenterRevealMode;


- (long long)notificationCenterRevealMode;
- (long long)controlCenterRevealMode;
- (bool)orientationEnabled;
- (bool)idleTimerDisabled;
- (double)defaultPNGExpirationTime;
- (bool)defaultStatusBarHidden;
- (long long)defaultStatusBarStyle;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)defaultPNGName;
- (long long)compatibilityMode;
- (unsigned long long)proximityDetectionModes;
- (long long)statusBarStyle;
- (bool)statusBarHidden;
- (bool)isUISubclass;

@end
