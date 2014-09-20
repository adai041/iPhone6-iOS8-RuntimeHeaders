/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIPhotoGrain : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputISO;
    NSNumber *inputAmount;
    NSNumber *inputSeed;
}

@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputISO;
@property(copy) NSNumber * inputAmount;
@property(copy) NSNumber * inputSeed;


- (id)outputImage;
- (id)inputImage;
- (void)setInputSeed:(id)arg1;
- (id)inputSeed;
- (void)setInputISO:(id)arg1;
- (id)inputISO;
- (id)_grainBlendAndMixKernel;
- (void)paramtersFor:(float)arg1 destination:(struct GrainParameters { float x1; float x2; float x3; float x4; }*)arg2 imageScaleFactor:(float)arg3;
- (id)_paddedTileKernel;
- (id)_interpolateGrainKernel;
- (id)inputAmount;
- (void)setInputAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)customAttributes;

@end
