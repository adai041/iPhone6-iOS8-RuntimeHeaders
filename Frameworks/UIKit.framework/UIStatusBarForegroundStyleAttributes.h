/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary;

@interface UIStatusBarForegroundStyleAttributes : NSObject  {
    double _height;
    long long _legibilityStyle;
    NSMutableDictionary *_cachedFonts;
}


- (int)legacyStyle;
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2;
- (id)makeTextFontForStyle:(long long)arg1;
- (void)drawText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 textSize:(struct CGSize { double x1; double x2; })arg7 textHeight:(double)arg8;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4;
- (void)_cacheImage:(id)arg1 named:(id)arg2;
- (id)uncachedImageNamed:(id)arg1;
- (id)_cachedImageNamed:(id)arg1;
- (id)expandedNameForImageName:(id)arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withColor:(id)arg2 withBlock:(id)arg3;
- (void)_drawText:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6;
- (double)textOffsetForStyle:(long long)arg1;
- (id)untintedImageNamed:(id)arg1;
- (struct CGPoint { double x1; double x2; })positionForMoonMaskInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)sizeForMoonMaskVisible:(bool)arg1;
- (id)uniqueIdentifier;
- (void)setThermalColorShadow;
- (long long)activityIndicatorStyleWithSyncActivity:(bool)arg1;
- (double)bluetoothBatteryExtraPadding;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize { double x1; double x2; })arg1 capacity:(double)arg2;
- (id)bluetoothBatteryImageNameWithCapacity:(double)arg1;
- (double)airplaneItemExtraMargin;
- (void)cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3;
- (void)drawBatteryInsidesWithSize:(struct CGSize { double x1; double x2; })arg1 capacity:(double)arg2 charging:(bool)arg3;
- (double)batteryAccessoryMargin;
- (id)cachedImageNamed:(id)arg1 inTempGroup:(id)arg2;
- (id)batteryImageNameWithCapacity:(double)arg1;
- (id)cachedImageWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 itemType:(int)arg7;
- (id)textForNetworkType:(int)arg1;
- (id)imageNamed:(id)arg1 withLegibilityStyle:(long long)arg2 legibilityStrength:(double)arg3;
- (id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9;
- (double)shadowPadding;
- (double)standardPadding;
- (id)textFontForStyle:(long long)arg1;
- (double)edgePadding;
- (bool)usesVerticalLayout;
- (long long)legibilityStyle;
- (double)height;
- (id)textColorForStyle:(long long)arg1;
- (id)tintColor;
- (id)imageNamed:(id)arg1;
- (double)scale;
- (void)dealloc;

@end
