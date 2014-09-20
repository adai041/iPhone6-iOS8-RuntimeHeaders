/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSArray, BWNodeInput, FigCaptureRecordingSettings;

@interface BWFileCoordinatorNode : BWNode  {
    NSArray *_stagingQueues;
    FigCaptureRecordingSettings *_settings;
    long long _currSettingsID;
    int _recordingState;
    BWNodeInput *_masterInput;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _inputOffset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastMasterPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastMasterDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastMasterEndingPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _masterStartingPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _largestStagedSupportingAudioVideoStagedPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _largestMetadataPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _masterStoppingPTS;
    bool_haveSeenAudioWhenStarting;
    bool_lowLatencyCanTransitionEarlyToRecording;
    bool_lowLatencyCanTossExtraVideoWhenStopping;
    bool_firstAudioHasBeenProcessed;
    struct OpaqueCMBlockBuffer { } *_emptyMetadataSampleData;
    const struct opaqueCMFormatDescription {} **_formatDescriptionsForInputs;
    struct OpaqueFigSimpleMutex { } *_stateMutex;
    unsigned long long _numInputs;
    unsigned long long _numOutputs;
    unsigned long long _numVideoInputs;
    unsigned long long _numAudioInputs;
    unsigned long long _numMetadataInputs;
    unsigned long long _numActionOnlyOutputs;
    unsigned long long _masterInputIndex;
    bool_lowLatencyModeEnabled;
}

+ (void)initialize;

- (void)stopRecording:(id*)arg1;
- (void)_printStagingEvent:(struct opaqueCMSampleBuffer { }*)arg1 forNodeInputIndex:(unsigned long long)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)_emitStagedBufferForIndex:(unsigned long long)arg1;
- (struct opaqueCMSampleBuffer { }*)_createEmptyMetadataSBufWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forInputIndex:(unsigned long long)arg2;
- (void)_prepareToResumeRecording;
- (void)_prepareToPauseOrStopRecording;
- (void)_emitMarkerBufferForFileWriterAction:(struct __CFString { }*)arg1 withPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 actionOutputsOnly:(bool)arg3;
- (void)_finishStoppingOrPausing:(bool)arg1;
- (void)_prepareToStartRecordingWithSettings:(id)arg1;
- (void)_doStoppingOrPausingWithSBuf:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (struct opaqueCMSampleBuffer { }*)_copyFirstValidLowLatencyAudioBuffer:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_emitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2 toOutput:(id)arg3;
- (void)_doStartingToRecordWithSBuf:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 numberOfActionOnlyOutputs:(unsigned long long)arg4 allowLowLatencyWhenPossible:(bool)arg5;
- (void)startRecordingWithSettings:(id)arg1 error:(id*)arg2;
- (void)pauseRecording:(id*)arg1;
- (void)resumeRecording:(id*)arg1;
- (void)recordingTerminated:(unsigned long long)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (id)nodeType;
- (id)init;
- (void)dealloc;

@end
