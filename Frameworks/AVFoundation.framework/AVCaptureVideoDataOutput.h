/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSDictionary, <AVCaptureVideoDataOutputSampleBufferDelegate>, NSObject<OS_dispatch_queue>, AVCaptureVideoDataOutputInternal;

@interface AVCaptureVideoDataOutput : AVCaptureOutput  {
    AVCaptureVideoDataOutputInternal *_internal;
}

@property(readonly) <AVCaptureVideoDataOutputSampleBufferDelegate> * sampleBufferDelegate;
@property(readonly) NSObject<OS_dispatch_queue> * sampleBufferCallbackQueue;
@property(copy) NSDictionary * videoSettings;
@property(readonly) NSArray * availableVideoCVPixelFormatTypes;
@property(readonly) NSArray * availableVideoCodecTypes;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;
@property bool alwaysDiscardsLateVideoFrames;

+ (id)alloc;
+ (void)initialize;
+ (id)supportedVideoSettingsKeys;

- (id)init;
- (void)dealloc;
- (int)outputFormat;
- (void)setAlwaysDiscardsLateVideoFrames:(bool)arg1;
- (void)setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (void)_setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)availableVideoCodecTypes;
- (id)availableVideoCVPixelFormatTypes;
- (id)vettedVideoSettingsForSettingsDictionary:(id)arg1;
- (id)outputScalingModeForSourceFormat:(id)arg1;
- (int)requiredOutputFormatForConnection:(id)arg1;
- (struct CGSize { double x1; double x2; })outputSizeForSourceFormat:(id)arg1;
- (bool)hasRequiredOutputFormatForConnection:(id)arg1;
- (void)setVideoSettings:(id)arg1;
- (bool)usesPreviewSizedBuffers;
- (bool)alwaysDiscardsLateVideoFrames;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation { int x1; int x2; unsigned long long x3; struct __CFString {} *x4; union { struct { struct __CFDictionary {} *x_1_2_1; struct __CFDictionary {} *x_1_2_2; } x_5_1_1; struct { void *x_2_2_1; struct __IOSurface {} *x_2_2_2; struct __IOSurface {} *x_2_2_3; } x_5_1_2; struct { struct opaqueCMSampleBuffer {} *x_3_2_1; unsigned long long x_3_2_2; } x_5_1_3; struct { struct opaqueCMFormatDescription {} *x_4_2_1; } x_5_1_4; struct { long long x_5_2_1; struct opaqueCMFormatDescription {} *x_5_2_2; } x_5_1_5; } x5; }*)arg1;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque { }*)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)videoSettings;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (id)connectionMediaTypes;
- (id)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (id)supportedAssetWriterOutputFileTypes;

@end
