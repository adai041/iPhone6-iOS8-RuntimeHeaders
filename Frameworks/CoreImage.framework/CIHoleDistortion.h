/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIHoleDistortion : CIFilter  {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputCenter;
@property(retain) NSNumber * inputRadius;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeDOD;
- (id)inputCenter;
- (void)setInputCenter:(id)arg1;
- (id)_colorKernel;
- (id)_geomKernel;
- (id)inputRadius;
- (bool)_isIdentity;
- (void)setInputRadius:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
