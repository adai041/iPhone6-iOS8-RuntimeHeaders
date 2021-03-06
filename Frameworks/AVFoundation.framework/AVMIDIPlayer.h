/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AVMIDIPlayer : NSObject  {
    void *_impl;
}

@property(readonly) double duration;
@property(getter=isPlaying,readonly) bool playing;
@property float rate;
@property double currentPosition;


- (bool)isPlaying;
- (void)play:(id)arg1;
- (void)finalize;
- (void)setRate:(float)arg1;
- (float)rate;
- (double)currentPosition;
- (void)stop;
- (double)duration;
- (void)dealloc;
- (void)prepareToPlay;
- (void)setCurrentPosition:(double)arg1;
- (double)beatsForHostTime:(unsigned long long)arg1;
- (unsigned long long)hostTimeForBeats:(double)arg1;
- (id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3;
- (void)destroyBase;
- (id)initBase;
- (struct MIDIPlayerImpl { struct OpaqueMusicPlayer {} *x1; struct OpaqueMusicSequence {} *x2; double x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; }*)impl;
     /* Encoded args for previous method: ^{MIDIPlayerImpl=^{OpaqueMusicPlayer}^{OpaqueMusicSequence}d@?@}16@0:8 */


@end
