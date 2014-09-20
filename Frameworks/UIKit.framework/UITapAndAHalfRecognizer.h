/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITouch, NSMutableSet, UIDelayedAction;

@interface UITapAndAHalfRecognizer : UIGestureRecognizer  {
    struct CGPoint { 
        double x; 
        double y; 
    } _startPoint;
    double _allowableMovement;
    int _numberOfFullTaps;
    double _minimumFinalPressDuration;
    NSMutableSet *_activeTouches;
    int _currentNumberOfTaps;
    UITouch *_touch;
    UIDelayedAction *_tapTimer;
}

@property int numberOfFullTaps;
@property double allowableMovement;
@property double minimumFinalPressDuration;
@property(retain) UITouch * touch;


- (void)setMinimumFinalPressDuration:(double)arg1;
- (void)setNumberOfFullTaps:(int)arg1;
- (void)_verifyMovementInAllowableRange;
- (void)startRecognitionTimer:(double)arg1;
- (double)minimumFinalPressDuration;
- (void)recognized:(id)arg1;
- (int)numberOfFullTaps;
- (void)startTapTimer:(double)arg1;
- (void)tooSlow:(id)arg1;
- (void)clearTapTimer;
- (double)allowableMovement;
- (void)_resetGestureRecognizer;
- (void)setTouch:(id)arg1;
- (void)setAllowableMovement:(double)arg1;
- (id)touch;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;

@end
