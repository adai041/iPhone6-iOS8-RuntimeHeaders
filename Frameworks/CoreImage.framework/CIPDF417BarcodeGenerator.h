/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class NSDictionary;

@interface CIPDF417BarcodeGenerator : CICodeGenerator  {
    NSDictionary *inputOptions;
}

@property(copy) NSDictionary * inputOptions;

+ (id)customAttributes;

- (void)setDefaults;
- (id)inputOptions;
- (void)setInputOptions:(id)arg1;
- (struct CGImage { }*)outputCGImage;

@end
