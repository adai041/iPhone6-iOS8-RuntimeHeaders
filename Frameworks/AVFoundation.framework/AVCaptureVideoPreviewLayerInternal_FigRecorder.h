/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureConnection_FigRecorder, NSString, AVCaptureSession_FigRecorder, CALayer;

@interface AVCaptureVideoPreviewLayerInternal_FigRecorder : NSObject  {
    AVCaptureSession_FigRecorder *session;
    AVCaptureConnection_FigRecorder *connection;
    CALayer *sublayer;
    struct CGSize { 
        double width; 
        double height; 
    } sensorSize;
    NSString *sensorToPreviewVTScalingMode;
    struct CGSize { 
        double width; 
        double height; 
    } previewSize;
    double previewRotationDegrees;
    NSString *gravity;
    booldisableActions;
    long long orientation;
    boolautomaticallyAdjustsMirroring;
    boolmirrored;
    boolisPresentationLayer;
    boolvisible;
    boolisPaused;
    boolchromaNoiseReductionEnabled;
    int changeSeed;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } captureDeviceTransform;
    double rollAdjustment;
}



@end
