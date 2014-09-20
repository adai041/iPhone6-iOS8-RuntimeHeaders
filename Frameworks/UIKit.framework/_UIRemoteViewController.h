/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIRemoteView, UIActionSheet, _UIAsyncInvocation, _UISizeTrackingView, BKSTouchDeliveryPolicyAssertion, _UITextEffectsRemoteView, NSMutableArray, UIView, _UIViewServiceInterface, NSString, _UIRemoteViewService, UIDimmingView, NSArray, _UITextServiceSession, NSError;

@interface _UIRemoteViewController : UIViewController <_UIRemoteViewController_ViewControllerOperatorInterface, _UIRemoteViewController_TextEffectsOperatorInterface, UIActionSheetDelegate> {
    NSString *_serviceBundleIdentifier;
    _UIViewServiceInterface *_serviceInterface;
    _UIRemoteViewService *_remoteViewService;
    id _serviceViewControllerProxy;
    id _serviceViewControllerControlMessageProxy;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    unsigned int _serviceAccessibilityServerPort;
    unsigned long long _serviceRegisteredScrollToTopViewCount;
    id _viewControllerOperatorProxy;
    _UIAsyncInvocation *_viewControllerOperatorHalfDisconnectionInvocation;
    id _textEffectsOperatorProxy;
    _UIAsyncInvocation *_textEffectsOperatorHalfDisconnectionInvocation;
    bool_fencingCurrentTransaction;
    int _preFencedCommitActionsLock;
    NSMutableArray *_preFencedCommitActions;
    _UISizeTrackingView *_sizeTrackingView;
    _UIRemoteView *_serviceViewControllerRemoteView;
    _UITextEffectsRemoteView *_fullScreenTextEffectsRemoteView;
    _UITextEffectsRemoteView *_textEffectsAboveStatusBarRemoteView;
    _UITextEffectsRemoteView *_remoteKeyboardRemoteView;
    UIView *_fullScreenTextEffectsSnapshotView;
    bool_snapshotTextEffectsAfterRotation;
    unsigned int _serviceScreenDisplayID;
    _UIAsyncInvocation *_terminationInvocation;
    int _terminationErrorLock;
    NSError *_terminationError;
    UIActionSheet *_hostedActionSheet;
    _UITextServiceSession *_textServiceSession;
    int __automatic_invalidation_retainCount;
    bool__automatic_invalidation_invalidated;
    UIDimmingView *_hostedDimmingView;
    UIView *_touchGrabbingView;
    long long _preferredStatusBarStyle;
    bool_prefersStatusBarHidden;
    bool_isFocusDeferred;
    NSString *_deferredDisplayUUID;
    unsigned int _deferredContextID;
    NSArray *_allowedNotifications;
    bool_serviceViewShouldShareTouchesWithHost;
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;
}

@property(readonly) NSString * serviceBundleIdentifier;
@property(readonly) int serviceProcessIdentifier;
@property(readonly) struct { unsigned int x1[8]; } serviceAuditToken;
@property bool serviceViewShouldShareTouchesWithHost;
@property(setter=_setTouchDeliveryPolicyAssertion:,retain) BKSTouchDeliveryPolicyAssertion * _touchDeliveryPolicyAssertion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)requestViewControllerWithService:(id)arg1 traitCollection:(id)arg2 connectionHandler:(id)arg3;
+ (id)requestViewController:(id)arg1 traitCollection:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 connectionHandler:(id)arg4;
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(id)arg3;
+ (bool)__shouldAllowHostProcessToTakeFocus;
+ (id)_requestViewController:(id)arg1 traitCollection:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 service:(id)arg4 connectionHandler:(id)arg5;
+ (bool)__shouldHostRemoteTextEffectsWindow;
+ (id)requestViewControllerWithService:(id)arg1 connectionHandler:(id)arg2;
+ (bool)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (oneway void)release;
- (id)_touchDeliveryPolicyAssertion;
- (id)_cancelTouchesForCurrentEventInHostedContent;
- (void)setServiceViewShouldShareTouchesWithHost:(bool)arg1;
- (void)restoreStateForSession:(id)arg1 anchor:(id)arg2;
- (void)saveStateForSession:(id)arg1 anchor:(id)arg2;
- (void)_initializeAccessibilityPortInformation;
- (bool)inheritsSecurity;
- (void)setInheritsSecurity:(bool)arg1;
- (void)__sendNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)arg1 hidden:(bool)arg2;
- (void)__viewServiceInstrinsicContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1 fenceSendRight:(id)arg2;
- (void)__viewServicePreferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1 fenceSendRight:(id)arg2;
- (void)__viewServicePopoverDidSetUseToolbarShine:(bool)arg1;
- (void)__viewServicePopoverDidChangeContentSize:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2 fenceSendRight:(id)arg3 withReplyHandler:(id)arg4;
- (void)__setViewServiceIsDisplayingPopover:(bool)arg1;
- (void)__dismissTextServiceSessionAnimated:(bool)arg1;
- (void)__showServiceForText:(id)arg1 type:(long long)arg2 fromRectValue:(id)arg3 replyHandler:(id)arg4;
- (void)__viewServiceDidUpdateTintColor:(id)arg1 duration:(double)arg2;
- (void)__setSupportedInterfaceOrientations:(id)arg1;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__dismissActionSheetWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (void)__presentActionSheetFromYCoordinate:(double)arg1 withTitle:(id)arg2 buttonTitles:(id)arg3 cancelButtonIndex:(long long)arg4 destructiveButtonIndex:(long long)arg5 style:(long long)arg6;
- (id)_appearanceSource;
- (void)setAllowedNotifications:(id)arg1;
- (id)allowedNotifications;
- (void)_updateTouchGrabbingView;
- (int)serviceProcessIdentifier;
- (id)serviceBundleIdentifier;
- (void)_addPreFencedCommitAction:(id)arg1;
- (void)_applicationWillDeactivate:(id)arg1;
- (void)_setDeferred:(bool)arg1 forDisplayUUID:(id)arg2;
- (void)_snapshotAndRemoveTextEffectsRemoteView;
- (void)_restoreTextEffectsRemoteView;
- (id)_clientDeferralProperties;
- (id)_hostDeferralProperties;
- (long long)__getPreferredInterfaceOrientation;
- (id)_addAutoAllowedNotifications:(id)arg1;
- (struct { unsigned int x1[8]; })serviceAuditToken;
- (void)_terminateUnconditionallyThen:(id)arg1;
- (void)_updateTintColor;
- (void)_appearanceInvocationsDidChange:(id)arg1;
- (void)_applicationDidFinishSuspendSnapshot:(id)arg1;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (void)_statusBarHeightDidChange:(id)arg1;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (void)_firstResponderDidChange:(id)arg1;
- (id)_terminateWithError:(id)arg1;
- (void)_awakeWithConnectionInfo:(id)arg1;
- (id)_initWithViewServiceBundleIdentifier:(id)arg1;
- (void)_setTouchDeliveryPolicyAssertion:(id)arg1;
- (void)_prepareTouchDeliveryPolicy;
- (bool)serviceViewShouldShareTouchesWithHost;
- (bool)_serviceHasScrollToTopView;
- (void)_scrollToTopFromTouchAtViewLocation:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id)arg2;
- (void)synchronizeAnimationsInActions:(id)arg1;
- (bool)__shouldRemoteViewControllerFenceOperations;
- (void)viewDidInvalidateIntrinsicContentSize;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeForServiceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (int)__automatic_invalidation_logic;
- (id)disconnect;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (bool)_requiresKeyboardWindowWhenFirstResponder;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didRotateFromInterfaceOrientation:(long long)arg1 forwardToChildControllers:(bool)arg2 skipSelf:(bool)arg3;
- (void)_willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(bool)arg3 skipSelf:(bool)arg4;
- (void)_willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(bool)arg3 skipSelf:(bool)arg4;
- (bool)_ignoreAppSupportedOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (bool)_customizesForPresentationInPopover;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (bool)canBecomeFirstResponder;
- (void)__willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (id)serviceViewControllerProxyWithErrorHandler:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)serviceViewControllerProxy;

@end
