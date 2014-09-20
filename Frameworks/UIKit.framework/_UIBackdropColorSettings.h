/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, _UIBackdropViewSettings;

@interface _UIBackdropColorSettings : NSObject  {
    bool_hasObservedValues;
    double _averageHue;
    double _averageSaturation;
    double _averageBrightness;
    double _contrast;
    _UIBackdropViewSettings *_parentSettings;
    double _previousAverageHue;
    double _previousAverageSaturation;
    double _previousAverageBrightness;
    double _previousContrast;
}

@property double averageHue;
@property double averageSaturation;
@property double averageBrightness;
@property double contrast;
@property(readonly) UIColor * color;
@property _UIBackdropViewSettings * parentSettings;
@property double previousAverageHue;
@property double previousAverageSaturation;
@property double previousAverageBrightness;
@property double previousContrast;
@property bool hasObservedValues;


- (bool)applyCABackdropLayerStatistics:(id)arg1;
- (bool)hasObservedValues;
- (double)previousContrast;
- (double)previousAverageBrightness;
- (double)previousAverageSaturation;
- (double)previousAverageHue;
- (id)parentSettings;
- (void)setHasObservedValues:(bool)arg1;
- (void)setPreviousContrast:(double)arg1;
- (void)setPreviousAverageBrightness:(double)arg1;
- (void)setPreviousAverageSaturation:(double)arg1;
- (void)setPreviousAverageHue:(double)arg1;
- (double)contrast;
- (double)averageSaturation;
- (double)averageHue;
- (void)setParentSettings:(id)arg1;
- (double)averageBrightness;
- (void)setDefaultValues;
- (id)color;
- (void)setContrast:(double)arg1;
- (void)setAverageBrightness:(double)arg1;
- (void)setAverageSaturation:(double)arg1;
- (void)setAverageHue:(double)arg1;
- (void)setValuesFromModel:(id)arg1;

@end
