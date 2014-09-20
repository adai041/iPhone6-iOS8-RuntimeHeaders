/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, _UIBackdropView, UIImageView, UIView, _UINavigationBarAppearanceStorage;

@interface _UINavigationBarBackground : _UIBarBackgroundImageView <_UIBackdropViewGraphicsQualityChangeDelegate> {
    UIColor *_barTintColor;
    _UINavigationBarAppearanceStorage *_appearanceStorage;
    UIImageView *_shadowView;
    _UIBackdropView *_adaptiveBackdrop;
    struct { 
        unsigned int barTranslucence : 3; 
        unsigned int barStyle : 3; 
        unsigned int backgroundImageNeedsUpdate : 1; 
        unsigned int isContainedInPopover : 1; 
        unsigned int barWantsAdaptiveBackdrop : 1; 
    } _navbarFlags;
}

@property long long barStyle;
@property(retain) UIColor * barTintColor;
@property(retain) _UINavigationBarAppearanceStorage * appearanceStorage;
@property(setter=_setShadowView:,retain) UIView * _shadowView;
@property(getter=isTranslucent) bool translucent;
@property bool barWantsAdaptiveBackdrop;


- (id)_customShadowImageForSearchBar;
- (id)_adaptiveBackdrop;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2;
- (void)_setShadowView:(id)arg1;
- (bool)barWantsAdaptiveBackdrop;
- (id)_currentCustomBackgroundDedicatedToBarMetrics:(long long*)arg1 barPosition:(long long*)arg2;
- (id)barTintColor;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forceUpdateBackgroundImage:(bool)arg2;
- (id)_currentCustomBackgroundRespectOversize_legacy:(bool*)arg1;
- (id)_currentCustomBackground;
- (void)_setIsContainedInPopover:(bool)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setTranslucent:(bool)arg1;
- (long long)barStyle;
- (void)setBarWantsAdaptiveBackdrop:(bool)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)updateBackgroundImage;
- (id)appearanceStorage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 barStyle:(long long)arg2 barTintColor:(id)arg3 appearance:(id)arg4 barTranslucence:(long long)arg5;
- (void)setAppearanceStorage:(id)arg1;
- (id)_shadowView;
- (void)didMoveToSuperview;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)isTranslucent;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
