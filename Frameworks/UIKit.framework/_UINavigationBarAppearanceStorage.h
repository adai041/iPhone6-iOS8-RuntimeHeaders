/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSDictionary, UIImage, _UIBarButtonItemAppearanceStorage, NSNumber, NSString;

@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage  {
    NSDictionary *textAttributes;
    NSMutableDictionary *titleVerticalAdjustmentsForBarMetrics;
    UIImage *shadowImage;
    boolhidesShadow;
    long long barMetrics;
    UIImage *backIndicatorImage;
    UIImage *backIndicatorTransitionMaskImage;
    NSNumber *backIndicatorLeftMargin;
    boolreversesShadowOffset;
    _UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;
    bool_deferShadowToSearchBar;
    long long defaultBarMetrics;
    long long activeBarMetrics;
    NSString *_backdropViewGroupName;
}

@property(readonly) UIImage * backgroundImage;
@property(readonly) UIImage * miniBackgroundImage;
@property(readonly) UIImage * promptBackgroundImage;
@property(readonly) UIImage * miniPromptBackgroundImage;
@property(readonly) UIImage * condensedBackgroundImage;
@property(readonly) UIImage * cardBackgroundImage;
@property(copy) NSDictionary * textAttributes;
@property(retain) UIImage * shadowImage;
@property bool hidesShadow;
@property long long defaultBarMetrics;
@property long long activeBarMetrics;
@property bool reversesShadowOffset;
@property(readonly) _UIBarButtonItemAppearanceStorage * barButtonAppearanceStorage;
@property(readonly) _UIBarButtonItemAppearanceStorage * _barButtonAppearanceStorage;
@property bool deferShadowToSearchBar;
@property(retain) UIImage * backIndicatorImage;
@property(retain) UIImage * backIndicatorTransitionMaskImage;
@property(retain) NSNumber * backIndicatorLeftMargin;
@property(retain) NSString * backdropViewGroupName;

+ (long long)typicalBarPosition;

- (void)setBackdropViewGroupName:(id)arg1;
- (id)backdropViewGroupName;
- (void)setDeferShadowToSearchBar:(bool)arg1;
- (bool)deferShadowToSearchBar;
- (void)setBackIndicatorLeftMargin:(id)arg1;
- (id)backIndicatorLeftMargin;
- (void)setBackIndicatorTransitionMaskImage:(id)arg1;
- (id)backIndicatorTransitionMaskImage;
- (void)setBackIndicatorImage:(id)arg1;
- (id)backIndicatorImage;
- (void)setActiveBarMetrics:(long long)arg1;
- (long long)activeBarMetrics;
- (void)setDefaultBarMetrics:(long long)arg1;
- (long long)defaultBarMetrics;
- (void)setShadowImage:(id)arg1;
- (id)shadowImage;
- (void)setReversesShadowOffset:(bool)arg1;
- (bool)reversesShadowOffset;
- (void)setTextAttributes:(id)arg1;
- (id)textAttributes;
- (void)setHidesShadow:(bool)arg1;
- (bool)hidesShadow;
- (id)representativeImageForIdiom:(long long)arg1;
- (id)barButtonAppearanceStorage;
- (id)_barButtonAppearanceStorage;
- (double)titleVerticalAdjustmentForBarMetrics:(long long)arg1;
- (void)setTitleVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (id)condensedBackgroundImage;
- (id)miniPromptBackgroundImage;
- (id)promptBackgroundImage;
- (id)miniBackgroundImage;
- (id)backgroundImage;
- (id)cardBackgroundImage;
- (void)dealloc;

@end
