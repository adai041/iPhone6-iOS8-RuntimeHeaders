/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIGestureRecognizerTransformAnalyzer : NSObject  {
    double _lowPassTranslationMagnitudeDelta;
    double _lowPassScaleDelta;
    double _lowPassRotationDelta;
    double _translationWeight;
    double _pinchingWeight;
    double _rotationWeight;
    int _dominantComponent;
}

@property(readonly) int dominantComponent;
@property double translationWeight;
@property double pinchingWeight;
@property double rotationWeight;


- (int)dominantComponent;
- (void)setRotationWeight:(double)arg1;
- (double)rotationWeight;
- (void)setPinchingWeight:(double)arg1;
- (double)pinchingWeight;
- (void)setTranslationWeight:(double)arg1;
- (double)translationWeight;
- (void)analyzeTouches:(id)arg1;
- (void)reset;
- (id)init;

@end
