/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSynchronizerNode : BWNode  {
    struct OpaqueCMClock { } *_sourceClock;
    struct OpaqueCMClock { } *_masterClock;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } sourceTime; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } syncedTime; 
    } _ptsSyncHistory[16];
    int _oldestPTSSyncHistoryElement;
    int _newestPTSSyncHistoryElement;
}

+ (void)initialize;

- (struct OpaqueCMClock { }*)sourceClock;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_getSyncedTimeForSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_synchronizeDetectedFaces:(id)arg1 metadata:(id)arg2 timescale:(int)arg3;
- (void)_updatePTSSyncHistoryWithSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 syncedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)setSourceClock:(struct OpaqueCMClock { }*)arg1;
- (id)initWithMediaType:(unsigned int)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)dealloc;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (struct OpaqueCMClock { }*)masterClock;

@end
