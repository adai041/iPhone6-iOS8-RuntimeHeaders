/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDelayedAction;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer  {
    UIDelayedAction *_touchDelay;
    struct CGPoint { 
        double x; 
        double y; 
    } _startSceneReferenceLocation;
}


- (void)sendTouchesShouldBeginForTouches:(id)arg1 withEvent:(id)arg2;
- (void)sendTouchesShouldBeginForDelayedTouches:(id)arg1;
- (void)clearTimer;
- (void)_resetGestureRecognizer;
- (void)sendDelayedTouches;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end
