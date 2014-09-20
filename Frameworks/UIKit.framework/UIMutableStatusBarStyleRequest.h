/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSNumber;

@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest  {
}

@property long long style;
@property(getter=isLegacy) bool legacy;
@property long long legibilityStyle;
@property(retain) UIColor * foregroundColor;
@property(retain) NSNumber * overrideHeight;


- (void)setOverrideHeight:(id)arg1;
- (void)setLegacy:(bool)arg1;
- (void)setLegibilityStyle:(long long)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setStyle:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end