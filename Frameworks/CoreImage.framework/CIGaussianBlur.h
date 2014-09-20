/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIGaussianBlur : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputRadius;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputRadius;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (id)inputRadius;
- (bool)_isIdentity;
- (void)setInputRadius:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
