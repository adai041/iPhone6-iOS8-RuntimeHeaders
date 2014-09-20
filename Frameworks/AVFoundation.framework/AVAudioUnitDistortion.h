/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitDistortion : AVAudioUnitEffect  {
}

@property float preGain;
@property float wetDryMix;


- (id)init;
- (float)wetDryMix;
- (float)preGain;
- (void)setWetDryMix:(float)arg1;
- (void)setPreGain:(float)arg1;
- (struct AUPreset { int x1; struct __CFString {} *x2; })FillOutAUPreset:(long long)arg1;
- (void)loadFactoryPreset:(long long)arg1;

@end
