/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICGColor : UIColor  {
    struct CGColor { } *cachedColor;
}


- (bool)isPatternColor;
- (id)colorSpaceName;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (void)setStroke;
- (double)alphaComponent;
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
