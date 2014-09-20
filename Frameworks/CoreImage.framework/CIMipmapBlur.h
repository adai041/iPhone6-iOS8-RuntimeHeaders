/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIMipmapBlur : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputLevel;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputLevel;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (id)inputLevel;
- (void)setInputLevel:(id)arg1;
- (bool)_isIdentity;
- (void)setInputImage:(id)arg1;

@end
