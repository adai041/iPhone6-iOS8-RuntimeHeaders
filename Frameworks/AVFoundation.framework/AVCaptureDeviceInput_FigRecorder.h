/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureDevice_FigRecorder, AVCaptureDeviceInputInternal_FigRecorder;

@interface AVCaptureDeviceInput_FigRecorder : AVCaptureInput_FigRecorder  {
    AVCaptureDeviceInputInternal_FigRecorder *_internal;
}

@property(readonly) AVCaptureDevice_FigRecorder * device;

+ (void)initialize;
+ (id)deviceInputWithDevice:(id)arg1 error:(id*)arg2;

- (id)device;
- (struct OpaqueCMClock { }*)clock;
- (void)setSession:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)description;
- (bool)isKindOfClass:(Class)arg1;
- (id)init;
- (void)dealloc;
- (int)_requestCameraRecordPermission;
- (void)_checkForFigCameraAccess;
- (void)willStartForSession:(id)arg1;
- (void)_setDevice:(id)arg1;
- (bool)_authorizedToUseDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 error:(id*)arg2;
- (id)ports;
- (id)notReadyError;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)didStartForSession:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)_applyOverridesToCaptureOptions:(id)arg1;

@end
