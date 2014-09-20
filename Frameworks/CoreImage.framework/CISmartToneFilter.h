/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber, CIContext;

@interface CISmartToneFilter : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputExposure;
    NSNumber *inputContrast;
    NSNumber *inputBrightness;
    NSNumber *inputShadows;
    NSNumber *inputHighlights;
    NSNumber *inputBlack;
    NSNumber *inputUseCube;
    CIImage *_cubeImage;
    CIContext *_cubeContext;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputExposure;
@property(retain) NSNumber * inputContrast;
@property(retain) NSNumber * inputBrightness;
@property(retain) NSNumber * inputShadows;
@property(retain) NSNumber * inputHighlights;
@property(retain) NSNumber * inputBlack;
@property(retain) NSNumber * inputUseCube;

+ (id)customAttributes;

- (id)outputImage;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)inputImage;
- (void)setInputUseCube:(id)arg1;
- (void)setInputBlack:(id)arg1;
- (id)inputBlack;
- (void)setInputHighlights:(id)arg1;
- (id)inputHighlights;
- (void)setInputShadows:(id)arg1;
- (id)inputShadows;
- (void)setInputExposure:(id)arg1;
- (id)inputExposure;
- (id)_kernelC;
- (id)_kernelH;
- (id)_kernelBpos;
- (id)_kernelBneg;
- (id)inputUseCube;
- (id)inputContrast;
- (id)inputBrightness;
- (void)setInputBrightness:(id)arg1;
- (void)setInputContrast:(id)arg1;
- (bool)_isIdentity;
- (void)setInputImage:(id)arg1;

@end
