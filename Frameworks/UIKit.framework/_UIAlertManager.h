/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertManager : NSObject  {
}

+ (void)alertPopoutCompleted;
+ (void)showDimmingViewAnimated:(bool)arg1;
+ (void)applyClientWindowTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_alertTranslationForInterfaceOrientation:(long long)arg1 andTranslation:(double)arg2;
+ (bool)cancelAlertsAnimated:(bool)arg1;
+ (void)createAlertWindowIfNeeded:(bool)arg1 deferDisplay:(bool)arg2;
+ (void)hideDimmingViewAnimated:(bool)arg1;
+ (void)alertWindowAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
+ (void)applyInternalWindowTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (void)_applyAlertTransforms;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })calculatedAlertTransform;
+ (bool)cancelTopMostAlertAnimated:(bool)arg1;
+ (void)removeFromStack:(id)arg1;
+ (id)topMostAlert;
+ (void)createAlertWindowIfNeeded:(bool)arg1;
+ (void)addToStack:(id)arg1 dontDimBackground:(bool)arg2;
+ (void)sizeAlertWindowForCurrentOrientation;
+ (void)tellSpringboardHidingAlert:(id)arg1 animated:(bool)arg2 forSpringBoardAlertTransition:(bool)arg3;
+ (bool)stackContainsAlert:(id)arg1;
+ (bool)hideTopMostAlertAnimated:(bool)arg1;
+ (void)tellSpringboardShowingAlert:(id)arg1 animated:(bool)arg2 forSpringBoardAlertTransition:(bool)arg3;
+ (void)reorientAlertWindowTo:(long long)arg1 animated:(bool)arg2 keyboard:(id)arg3;
+ (id)visibleAlert;
+ (void)showTopmostMiniAlertWithSynchronizationPort:(unsigned int)arg1;
+ (void)hideTopmostMiniAlert;
+ (void)noteOrientationChangingTo:(long long)arg1 animated:(bool)arg2;
+ (void)initialize;
+ (void)hideAlertsForTermination;
+ (void)noteOrientationChangingTo:(long long)arg1;

- (void)_didHideDimmingView:(id)arg1 finished:(id)arg2;

@end
