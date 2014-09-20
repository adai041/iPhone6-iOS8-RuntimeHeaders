/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CIColorCrossPolynomial : CIFilter  {
    CIImage *inputImage;
    CIVector *inputCoefficients;
    CIVector *inputRedCoefficients;
    CIVector *inputGreenCoefficients;
    CIVector *inputBlueCoefficients;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputRedCoefficients;
@property(retain) CIVector * inputGreenCoefficients;
@property(retain) CIVector * inputBlueCoefficients;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (id)inputBlueCoefficients;
- (id)inputGreenCoefficients;
- (id)inputRedCoefficients;
- (void)setInputRedCoefficients:(id)arg1;
- (void)setInputGreenCoefficients:(id)arg1;
- (void)setInputBlueCoefficients:(id)arg1;
- (id)_kernel;
- (bool)_isIdentity;
- (void)setInputImage:(id)arg1;

@end
