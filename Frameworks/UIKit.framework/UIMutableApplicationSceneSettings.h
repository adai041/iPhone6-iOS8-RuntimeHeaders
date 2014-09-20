/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings> {
}

@property bool underLock;
@property int statusBarStyleOverridesToSuppress;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setStatusBarStyleOverridesToSuppress:(int)arg1;
- (void)setUnderLock:(bool)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)statusBarStyleOverridesToSuppress;
- (bool)underLock;
- (bool)isUISubclass;

@end
