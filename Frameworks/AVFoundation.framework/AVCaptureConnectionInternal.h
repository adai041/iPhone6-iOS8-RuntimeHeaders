/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureInputPort, NSArray, AVWeakReference, NSMutableArray, AVCaptureDevice;

@interface AVCaptureConnectionInternal : NSObject  {
    NSMutableArray *inputPorts;
    AVCaptureDevice *sourceDevice;
    AVWeakReference *outputWeakReference;
    AVWeakReference *videoPreviewLayerWeakReference;
    boolhasActiveObservers;
    boolactive;
    boolenabled;
    int changeSeed;
    AVCaptureInputPort *audioInputPort;
    NSMutableArray *audioChannels;
    NSArray *audioChannelLevels;
    long long lastGetAudioLevelsTime;
    AVCaptureInputPort *videoInputPort;
    AVCaptureInputPort *metadataInputPort;
    AVCaptureInputPort *metadataItemInputPort;
    boolvideoMirroringSupported;
    boolautomaticallyAdjustsVideoMirroring;
    boolvideoMirrored;
    boolvideoOrientationSupported;
    long long videoOrientation;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } videoMinFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } videoMaxFrameDuration;
    double videoMaxScaleAndCropFactor;
    double videoScaleAndCropFactor;
    int videoRetainedBufferCountHint;
    long long preferredVideoStabilizationMode;
    boolvideoStabilizationEnabled;
    long long activeVideoStabilizationMode;
    boolhasVideoMinFrameDurationObserver;
}



@end
