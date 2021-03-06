/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCaptureMovieFileOutputInternal_FigRecorder;

@interface AVCaptureMovieFileOutput_FigRecorder : AVCaptureFileOutput_FigRecorder  {
    AVCaptureMovieFileOutputInternal_FigRecorder *_internal;
}

@property struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property(copy) NSArray * metadata;

+ (bool)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;
+ (bool)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (id)recorderCommonMetadataForAVMetadataItemArray:(id)arg1;

- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)stopRecording;
- (bool)isKindOfClass:(Class)arg1;
- (id)init;
- (void)dealloc;
- (void)_handleStartRecordingError:(int)arg1 info:(id)arg2;
- (bool)getRecorderBoolForKey:(id)arg1 withDefault:(bool)arg2;
- (bool)sendsLastVideoPreviewFrame;
- (void)setSendsLastVideoPreviewFrame:(bool)arg1;
- (id)outputSettingsForConnection:(id)arg1;
- (id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2;
- (int)_startRecording:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)resumeRecording;
- (void)pauseRecording;
- (bool)isRecordingPaused;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (bool)isRecording;
- (id)outputFileURL;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (id)connectionMediaTypes;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (int)_stopRecording;

@end
