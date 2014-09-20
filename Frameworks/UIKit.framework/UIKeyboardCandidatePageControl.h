/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardCandidateBarSegmentControl;

@interface UIKeyboardCandidatePageControl : UIView  {
    UIKeyboardCandidateBarSegmentControl *_pageControl;
    bool_usingVerticalArrows;
}

+ (id)imageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void)updatePageControlWithStatus:(bool)arg1 rightControlButtonEnabled:(bool)arg2;
- (void)_changePage:(id)arg1;
- (void)setUseVerticalArrows:(bool)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
