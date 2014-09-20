/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputMediaDataRequester, AVAssetWriterInputPassDescription, NSString, AVFigAssetWriterTrack;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {
    AVFigAssetWriterTrack *_assetWriterTrack;
    AVAssetWriterInputMediaDataRequester *_mediaDataRequester;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    AVAssetWriterInputPassDescription *_currentPassDescription;
}

@property(getter=_assetWriterTrack,readonly) AVFigAssetWriterTrack * assetWriterTrack;
@property(retain) AVAssetWriterInputPassDescription * currentPassDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;

- (void)finalize;
- (int)trackID;
- (void)markAsFinished;
- (long long)status;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (void)setCurrentPassDescription:(id)arg1;
- (bool)mediaDataRequesterShouldRequestMediaData:(id)arg1;
- (void)markAsFinishedAndTransitionCurrentHelper:(id)arg1;
- (void)_detachFromMediaDataRequester:(id)arg1;
- (void)beginPassIfAppropriate;
- (void)_nudgeMediaDataRequesterIfAppropriate;
- (void)_attachToMediaDataRequester:(id)arg1;
- (id)_assetWriterTrack;
- (void)markCurrentPassAsFinished;
- (bool)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (id)currentPassDescription;
- (bool)canPerformMultiplePasses;
- (bool)isReadyForMoreMediaData;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;
- (bool)prepareToFinishWritingReturningError:(id*)arg1;
- (void)prepareToEndSession;
- (void)didStartInitialSession;
- (id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id*)arg3;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (id)initWithConfigurationState:(id)arg1;

@end
