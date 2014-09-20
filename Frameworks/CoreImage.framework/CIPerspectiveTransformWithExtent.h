/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CIPerspectiveTransformWithExtent : CIFilter  {
    CIImage *inputImage;
    CIVector *inputExtent;
    CIVector *inputTopLeft;
    CIVector *inputTopRight;
    CIVector *inputBottomRight;
    CIVector *inputBottomLeft;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputExtent;
@property(retain) CIVector * inputTopLeft;
@property(retain) CIVector * inputTopRight;
@property(retain) CIVector * inputBottomRight;
@property(retain) CIVector * inputBottomLeft;

+ (id)customAttributes;

- (id)outputImage;
- (id)inputImage;
- (void)setInputBottomLeft:(id)arg1;
- (id)inputBottomLeft;
- (void)setInputBottomRight:(id)arg1;
- (id)inputBottomRight;
- (void)setInputTopRight:(id)arg1;
- (id)inputTopRight;
- (void)setInputTopLeft:(id)arg1;
- (id)inputTopLeft;
- (id)_kernel;
- (id)inputExtent;
- (void)setInputImage:(id)arg1;
- (void)setInputExtent:(id)arg1;

@end
