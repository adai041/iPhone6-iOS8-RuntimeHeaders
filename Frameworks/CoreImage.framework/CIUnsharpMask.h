/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIUnsharpMask : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputIntensity;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputRadius;
@property(retain) NSNumber * inputIntensity;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (id)inputIntensity;
- (id)_kernel;
- (void)setInputIntensity:(id)arg1;
- (id)inputRadius;
- (bool)_isIdentity;
- (void)setInputRadius:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
