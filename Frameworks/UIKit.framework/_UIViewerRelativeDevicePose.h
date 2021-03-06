/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIMotionEffectAcceleratedOutputRange;

@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding> {
    _UIMotionEffectAcceleratedOutputRange *_acceleratedOutputRange;
    double _planarRotationAngle;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _viewerOffset;
}

@property struct UIOffset { double x1; double x2; } viewerOffset;
@property double planarRotationAngle;


- (void)setPlanarRotationAngle:(double)arg1;
- (double)planarRotationAngle;
- (struct UIOffset { double x1; double x2; })_acceleratedOutputForViewerOffset:(struct UIOffset { double x1; double x2; })arg1 accelerationBoostFactor:(struct CGPoint { double x1; double x2; })arg2;
- (void)_setAcceleration:(struct CGPoint { double x1; double x2; })arg1 fixingOutputForViewerOffset:(struct UIOffset { double x1; double x2; })arg2;
- (id)_acceleratedOutputRange;
- (void)setViewerOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_reset;
- (struct UIOffset { double x1; double x2; })viewerOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
