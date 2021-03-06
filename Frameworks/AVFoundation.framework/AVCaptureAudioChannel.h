/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject  {
    AVCaptureAudioChannelInternal *_internal;
}

@property(readonly) float averagePowerLevel;
@property(readonly) float peakHoldLevel;


- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (float)peakHoldLevel;
- (float)averagePowerLevel;

@end
