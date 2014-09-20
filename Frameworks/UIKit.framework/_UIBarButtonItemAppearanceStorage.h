/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSMutableDictionary, _UIBarBackButtonItemAppearanceStorage, NSValue;

@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage  {
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    UIColor *tintColor;
    NSValue *titlePositionOffset;
    NSValue *miniTitlePositionOffset;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
    _UIBarBackButtonItemAppearanceStorage *backButtonAppearance;
}

@property(retain) UIColor * tintColor;
@property(retain) NSValue * titlePositionOffset;
@property(retain) NSValue * miniTitlePositionOffset;
@property(retain) NSValue * backButtonTitlePositionOffset;
@property(retain) NSValue * miniBackButtonTitlePositionOffset;


- (void)setBackButtonTitlePositionOffset:(id)arg1;
- (void)setMiniBackButtonTitlePositionOffset:(id)arg1;
- (void)setBackButtonBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (double)backButtonBackgroundVerticalAdjustmentForBarMetrics:(long long)arg1;
- (id)backButtonTitlePositionOffset;
- (id)miniBackButtonTitlePositionOffset;
- (id)anyBackButtonBackgroundImage;
- (void)setTitlePositionOffset:(id)arg1;
- (void)setMiniTitlePositionOffset:(id)arg1;
- (void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1;
- (id)titlePositionOffset;
- (id)miniTitlePositionOffset;
- (id)anyBackgroundImage;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(bool)arg3;
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 isMini:(bool)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 isMini:(bool)arg4;
- (id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(bool)arg3;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)dealloc;

@end
