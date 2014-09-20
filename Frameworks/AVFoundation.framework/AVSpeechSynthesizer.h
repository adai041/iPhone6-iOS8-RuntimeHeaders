/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class <AVSpeechSynthesizerDelegate>;

@interface AVSpeechSynthesizer : NSObject  {
    boolspeaking;
    boolpaused;
    <AVSpeechSynthesizerDelegate> *delegate;
}

@property <AVSpeechSynthesizerDelegate> * delegate;
@property(getter=isSpeaking,readonly) bool speaking;
@property(getter=isPaused,readonly) bool paused;

+ (void)initialize;

- (bool)stopSpeakingAtBoundary:(long long)arg1;
- (bool)continueSpeaking;
- (bool)pauseSpeakingAtBoundary:(long long)arg1;
- (void)speakUtterance:(id)arg1;
- (bool)isPaused;
- (bool)isSpeaking;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
