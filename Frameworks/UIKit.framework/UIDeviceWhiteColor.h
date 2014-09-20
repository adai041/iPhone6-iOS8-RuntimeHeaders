/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDeviceWhiteColor : UIColor  {
    double whiteComponent;
    double alphaComponent;
    struct CGColor { } *cachedColor;
    long long cachedColorOnceToken;
}


- (bool)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4;
- (struct CGColor { }*)_createCGColorWithAlpha:(double)arg1;
- (id)colorSpaceName;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (void)setStroke;
- (double)alphaComponent;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (void)setFill;
- (bool)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)set;
- (bool)getWhite:(double*)arg1 alpha:(double*)arg2;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct CGColor { }*)CGColor;
- (void)dealloc;

@end