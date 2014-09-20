/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIRemoteViewController;

@interface _UISizeTrackingView : UIView <_UIScrollToTopView> {
    _UIRemoteViewController *_remoteViewController;
    id _viewControllerOperatorProxy;
    id _textEffectsOperatorProxy;
    bool_hasIntrinsicContentSize;
    struct CGSize { 
        double width; 
        double height; 
    } _intrinsicContentSize;
}

+ (id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3;

- (void)updateIntrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateTextEffectsGeometries:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_geometryChanged:(unsigned long long)arg1 forAncestor:(id)arg2;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id)arg2;
- (bool)isScrollEnabled;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;

@end
