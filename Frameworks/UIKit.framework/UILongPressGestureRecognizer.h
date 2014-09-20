/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableSet;

@interface UILongPressGestureRecognizer : UIGestureRecognizer  {
    NSArray *_touches;
    NSMutableSet *_activeTouches;
    unsigned long long _numberOfTouchesRequired;
    double _minimumPressDuration;
    double _allowableMovement;
    struct CGPoint { 
        double x; 
        double y; 
    } _startPointScreen;
    id _enoughTimeElapsed;
    id _tooMuchTimeElapsed;
    id _imp;
    unsigned int _gotTouchEnd : 1;
    unsigned int _gotTooMany : 1;
    unsigned int _gotEnoughTaps : 1;
    unsigned int _cancelPastAllowableMovement : 1;
    long long _buttonType;
}

@property unsigned long long numberOfTapsRequired;
@property unsigned long long numberOfTouchesRequired;
@property double minimumPressDuration;
@property double allowableMovement;
@property double delay;
@property(retain,readonly) NSArray * touches;
@property(readonly) struct CGPoint { double x1; double x2; } startPoint;
@property(readonly) struct CGPoint { double x1; double x2; } centroid;
@property bool cancelPastAllowableMovement;
@property(setter=_setButtonType:) long long _buttonType;


- (double)allowableMovement;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (bool)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)setCancelPastAllowableMovement:(bool)arg1;
- (bool)cancelPastAllowableMovement;
- (double)minimumPressDuration;
- (void)_startTapFinishedTimer;
- (void)_interactionsEndedWithValidTouches:(bool)arg1;
- (void)startTimer;
- (struct CGPoint { double x1; double x2; })centroidScreen;
- (void)tooMuchElapsed:(id)arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (void)setTouches:(id)arg1;
- (void)clearTimer;
- (id)touches;
- (struct CGPoint { double x1; double x2; })centroid;
- (void)_resetGestureRecognizer;
- (void)setAllowableMovement:(double)arg1;
- (struct CGPoint { double x1; double x2; })locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (void)setNumberOfTapsRequired:(unsigned long long)arg1;
- (unsigned long long)numberOfTapsRequired;
- (unsigned long long)numberOfTouchesRequired;
- (void)_setButtonType:(long long)arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (void)setMinimumPressDuration:(double)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (unsigned long long)numberOfTouches;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)_touchSloppinessFactor;
- (void)setView:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (long long)_buttonType;
- (double)delay;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)setDelay:(double)arg1;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)invalidate;

@end
