/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSquishTransition : UIKeyboardKeyplaneTransition  {
    double _widthRatio;
    double _offsetX;
    bool_transitionNeedsUpdate;
}


- (void)updateTransitionIfNeeded;
- (void)_updateTransition;
- (void)rebuildFromStartKeyplane:(id)arg1 startView:(id)arg2 toEndKeyplane:(id)arg3 endView:(id)arg4;
- (void)updateWithProgress:(double)arg1;
- (void)removeAllAnimations;

@end
