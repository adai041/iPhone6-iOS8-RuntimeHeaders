/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSString, UIFontDescriptor;

@interface _UIFontCacheKey : NSObject <NSCopying> {
    int _traits;
    NSString *_fontName;
    double _pointSize;
    NSString *_textStyle;
    NSString *_contentSizeCategory;
    UIFontDescriptor *_fontDescriptor;
}

@property(copy) NSString * fontName;
@property int traits;
@property double pointSize;
@property(copy) NSString * textStyle;
@property(copy) NSString * contentSizeCategory;
@property(copy) UIFontDescriptor * fontDescriptor;

+ (id)fontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(double)arg2;
+ (id)fontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2;
+ (id)systemFontCacheKeyWithTraits:(int)arg1 pointSize:(double)arg2;
+ (id)fontCacheKeyWithFontName:(id)arg1 traits:(int)arg2 pointSize:(double)arg3;

- (id)contentSizeCategory;
- (void)setFontDescriptor:(id)arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setPointSize:(double)arg1;
- (void)setTraits:(int)arg1;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;
- (void)setFontName:(id)arg1;
- (id)fontDescriptor;
- (int)traits;
- (id)fontName;
- (double)pointSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end