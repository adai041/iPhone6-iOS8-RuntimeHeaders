/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage;

@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage  {
    UIImage *shadowImage;
    UIImage *topShadowImage;
    boolhidesShadow;
    UIImage *_backgroundImage;
    UIImage *_miniBackgroundImage;
    UIImage *_topBackgroundImage;
    UIImage *_miniTopBackgroundImage;
}

@property(retain) UIImage * backgroundImage;
@property(retain) UIImage * miniBackgroundImage;
@property(retain) UIImage * topBackgroundImage;
@property(retain) UIImage * miniTopBackgroundImage;
@property(retain) UIImage * shadowImage;
@property(retain) UIImage * topShadowImage;
@property bool hidesShadow;

+ (long long)typicalBarPosition;

- (void)setMiniTopBackgroundImage:(id)arg1;
- (void)setTopBackgroundImage:(id)arg1;
- (void)setMiniBackgroundImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setTopShadowImage:(id)arg1;
- (id)miniTopBackgroundImage;
- (id)topBackgroundImage;
- (id)topShadowImage;
- (void)setShadowImage:(id)arg1;
- (id)shadowImage;
- (void)setHidesShadow:(bool)arg1;
- (bool)hidesShadow;
- (id)miniBackgroundImage;
- (id)backgroundImage;
- (void)dealloc;

@end
