/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIConvolution9Vertical : CIFilter  {
    CIImage *inputImage;
    CIVector *inputWeights;
    NSNumber *inputBias;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputWeights;
@property(retain) NSNumber * inputBias;

+ (id)customAttributes;

- (id)outputImage;
- (void)setInputBias:(id)arg1;
- (id)inputBias;
- (id)inputImage;
- (void)setInputWeights:(id)arg1;
- (id)inputWeights;
- (bool)_isIdentity;
- (void)setInputImage:(id)arg1;

@end
