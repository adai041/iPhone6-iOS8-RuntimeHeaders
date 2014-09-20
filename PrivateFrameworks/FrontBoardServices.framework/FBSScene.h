/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSString, FBSSceneSettings, NSArray, CADisplay, <FBSSceneDelegate>, FBSDisplay, FBSSceneClientSettings;

@interface FBSScene : NSObject  {
}

@property(copy,readonly) NSString * identifier;
@property(readonly) CADisplay * display;
@property(retain,readonly) FBSDisplay * fbsDisplay;
@property <FBSSceneDelegate> * delegate;
@property(retain,readonly) FBSSceneSettings * settings;
@property(retain,readonly) FBSSceneClientSettings * clientSettings;
@property(retain,readonly) NSArray * contexts;


- (void)detachSceneContext:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (id)_descriptionWithMultilinePrefix:(id)arg1;
- (id)contexts;
- (void)updateClientSettingsWithBlock:(id)arg1;
- (void)sendActions:(id)arg1;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (id)identifier;
- (id)display;
- (id)clientSettings;
- (id)settings;
- (id)fbsDisplay;
- (id)_init;
- (void)invalidate;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)updateUIClientSettingsWithBlock:(id)arg1;

@end
