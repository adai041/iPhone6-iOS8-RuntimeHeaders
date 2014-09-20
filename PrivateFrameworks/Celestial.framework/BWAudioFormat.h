/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary;

@interface BWAudioFormat : BWFormat  {
    struct opaqueCMFormatDescription { } *_audioFormatDescription;
    NSDictionary *_avAudioSettings;
}

@property(readonly) struct opaqueCMFormatDescription { }* audioFormatDescription;
@property(readonly) NSDictionary * audioCompressionSBPOptions;

+ (id)formatForAVAudioSettings:(id)arg1 inputFormat:(id)arg2;
+ (id)formatWithAudioFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
+ (void)initialize;

- (unsigned int)mediaType;
- (id)audioCompressionSBPOptions;
- (struct opaqueCMFormatDescription { }*)audioFormatDescription;
- (id)_initForAVAudioSettings:(id)arg1 inputFormat:(id)arg2;
- (id)_initWithAudioFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (struct opaqueCMFormatDescription { }*)formatDescription;

@end