/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIEnhancementCalculator : CIEnhancementCalculation  {
    boolfaceBalanceEnabled;
    boolvibranceEnabled;
    boolcurvesEnabled;
    boolshadowsEnabled;
}

@property bool faceBalanceEnabled;
@property bool vibranceEnabled;
@property bool curvesEnabled;
@property bool shadowsEnabled;


- (id)init;
- (void)dealloc;
- (id)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 detectorOpts:(id)arg3;
- (id)histogramFromRows:(id)arg1 componentOffset:(unsigned int)arg2;
- (void)analyzeFeatures:(id)arg1 usingContext:(id)arg2 baseImage:(id)arg3;
- (bool)shadowsEnabled;
- (bool)curvesEnabled;
- (bool)vibranceEnabled;
- (void)setupHistogramsUsing:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4;
- (void)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 features:(id)arg3;
- (bool)faceBalanceEnabled;
- (void)setShadowsEnabled:(bool)arg1;
- (void)setCurvesEnabled:(bool)arg1;
- (void)setVibranceEnabled:(bool)arg1;
- (void)setFaceBalanceEnabled:(bool)arg1;

@end
