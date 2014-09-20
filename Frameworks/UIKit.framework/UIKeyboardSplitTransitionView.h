/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, CADisplayLink, <UIKeyboardSplitTransitionDataSource>, <UIKeyboardKeyplaneTransitionDelegate>, UIKeyboardSliceSet;

@interface UIKeyboardSplitTransitionView : UIView  {
    double _currentProgress;
    double _liftOffProgress;
    double _finishProgress;
    double _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink *_displayLink;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _startFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _endFrame;
    <UIKeyboardKeyplaneTransitionDelegate> *_transitionDelegate;
    <UIKeyboardSplitTransitionDataSource> *_transitionDataSource;
    bool_centerFilled;
    bool_isRebuilding;
    bool_isSplitTranslation;
    UIKeyboardSliceSet *_sliceSet;
}

@property(copy) id completionBlock;
@property <UIKeyboardKeyplaneTransitionDelegate> * splitTransitionDelegate;
@property <UIKeyboardSplitTransitionDataSource> * splitTransitionDataSource;
@property(readonly) NSArray * shadowLayers;
@property(readonly) NSArray * backgroundLayers;


- (void)setSplitTransitionDataSource:(id)arg1;
- (id)splitTransitionDataSource;
- (bool)showDictationKey;
- (bool)showIntlKey;
- (struct CGImage { }*)keyImageWithToken:(id)arg1;
- (bool)canDisplayTransition;
- (void)rebuildControlKeys:(int)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 keyboardType:(long long)arg3 orientation:(long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectEnclosingKeyplane:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForShadowLayer:(int)arg1;
- (void)initializeLayers;
- (struct CGImage { }*)splitKeyboardImage;
- (struct CGImage { }*)defaultKeyboardImage;
- (void)transformForProgress:(double)arg1;
- (bool)transitionIsVisible;
- (id)splitTransitionDelegate;
- (bool)shouldAllowRubberiness;
- (id)colorsForBackgroundLayer:(int)arg1;
- (id)outerCenterDropShadow;
- (id)bottomDropShadow;
- (id)centerDropShadow;
- (id)topDropShadow;
- (id)shadowLayers;
- (id)backgroundLayers;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (void)setSplitTransitionDelegate:(id)arg1;
- (void)finishWithProgress:(double)arg1 completionBlock:(id)arg2;
- (void)transitionToFinalState:(id)arg1;
- (void)updateWithProgress:(double)arg1;
- (void)finalizeTransition;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)didMoveToWindow;
- (void)dealloc;

@end
