/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying> {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _referenceOffset;
    struct CGPoint { 
        double x; 
        double y; 
    } _referenceAcceleration;
    struct CGPoint { 
        double x; 
        double y; 
    } _acceleration;
}

@property(readonly) struct CGPoint { double x1; double x2; } acceleration;


- (struct CGPoint { double x1; double x2; })acceleration;
- (struct UIOffset { double x1; double x2; })acceleratedOutputForViewerOffset:(struct UIOffset { double x1; double x2; })arg1 accelerationBoostFactor:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAcceleration:(struct CGPoint { double x1; double x2; })arg1 fixingOutputForViewerOffset:(struct UIOffset { double x1; double x2; })arg2;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
