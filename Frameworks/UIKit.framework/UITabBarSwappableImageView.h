/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITabBar;

@interface UITabBarSwappableImageView : UIImageView  {
    id _value;
    id _alternate;
    double _scale;
    bool_showAlternate;
    bool_flipped;
    int _currentAnimation;
    UITabBar *_tabBar;
    int _buttonTag;
}


- (void)setAlternateImage:(id)arg1;
- (void)animateImage:(float)arg1 withTabBar:(id)arg2 withTag:(int)arg3;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2;
- (void)setCurrentImage;
- (void)showAlternateImage:(bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)setImage:(id)arg1;
- (void)dealloc;

@end
