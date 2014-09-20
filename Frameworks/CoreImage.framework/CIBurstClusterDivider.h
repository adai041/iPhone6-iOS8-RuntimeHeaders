/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstClusterDivider : NSObject  {
    float dividerScore;
    int trueLocalMaximum;
    int leftImage;
    float actionAmount;
    float noiseThreshold;
    float highNoiseThreshold;
}

@property float dividerScore;
@property int trueLocalMaximum;
@property int leftImage;
@property float actionAmount;
@property float noiseThreshold;
@property float highNoiseThreshold;


- (int)trueLocalMaximum;
- (long long)compareActionAmounts:(id)arg1;
- (float)actionAmount;
- (long long)compareIndices:(id)arg1;
- (long long)compareDividers:(id)arg1;
- (void)setTrueLocalMaximum:(int)arg1;
- (float)highNoiseThreshold;
- (float)noiseThreshold;
- (int)leftImage;
- (void)setHighNoiseThreshold:(float)arg1;
- (void)setNoiseThreshold:(float)arg1;
- (float)dividerScore;
- (void)setActionAmount:(float)arg1;
- (void)setLeftImage:(int)arg1;
- (void)setDividerScore:(float)arg1;

@end
