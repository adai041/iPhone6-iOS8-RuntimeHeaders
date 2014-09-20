/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIDynamicCaretDot, NSTimer, TIHandwritingStrokes, UIDelayedAction;

@interface _UIDynamicCaretInput : UIView <UIKBHandwritingStrokeEnabled> {
    struct CGContext { } *_bitmapContext;
    long long _fadeCount;
    struct CGPoint { 
        double x; 
        double y; 
    } _lastViewLoc;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _inkedAreaOfBitmapContext;
    NSTimer *_fadeTimer;
    TIHandwritingStrokes *_accumulatedStrokes;
    UIDelayedAction *_committedAction;
    _UIDynamicCaretDot *_dotView;
}

@property(retain) NSTimer * fadeTimer;
@property(retain) TIHandwritingStrokes * accumulatedStrokes;
@property(retain) UIDelayedAction * committedAction;
@property(retain) _UIDynamicCaretDot * dotView;
@property(readonly) bool hasInk;
@property(readonly) bool isInking;
@property(readonly) double inkWidth;


- (void)cancelTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)addTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isInking;
- (bool)hasInk;
- (void)endTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_fadeInk;
- (void)addInkPoint:(struct CGPoint { double x1; double x2; })arg1 fromLastPoint:(bool)arg2;
- (id)committedAction;
- (void)drawPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccumulatedStrokes:(id)arg1;
- (void)clearAndNotify:(bool)arg1;
- (void)send;
- (double)inkWidth;
- (void)clearFadeTimer;
- (void)setFadeTimer:(id)arg1;
- (id)fadeTimer;
- (id)accumulatedStrokes;
- (id)dotView;
- (void)setDotView:(id)arg1;
- (void)setCommittedAction:(id)arg1;
- (void)committedStrokes;
- (void)log;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
