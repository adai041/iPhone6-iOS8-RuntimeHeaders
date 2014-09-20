/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary, <BWRemoteQueueSinkNodeDelegate>;

@interface BWRemoteQueueSinkNode : BWSinkNode  {
    bool_mediaTypeIsVideo;
    struct remoteQueueSenderOpaque { } *_remoteQueueSender;
    struct shmemPoolOpaque { } *_sharedMemoryPool;
    <BWRemoteQueueSinkNodeDelegate> *_delegate;
    int _clientVideoRetainedBufferCount;
    bool_discardsLateSampleBuffers;
    bool_attachPanoramaMetadata;
    bool_sentDiagnosticMetadata;
    NSDictionary *_videoColorInfo;
    struct opaqueCMFormatDescription { } *_cachedVideoFormatDescription;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastPTS;
}

@property <BWRemoteQueueSinkNodeDelegate> * delegate;

+ (void)initialize;

- (void)_attachDiagnosticMetadataIfDevicePropertiesLockedForPanorama:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)videoColorInfo;
- (bool)attachPanoramaMetadata;
- (bool)discardsLateSampleBuffers;
- (int)clientVideoRetainedBufferCount;
- (void)_handlePeerTerminated;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)setAttachPanoramaMetadata:(bool)arg1;
- (void)setClientVideoRetainedBufferCount:(int)arg1;
- (void)setDiscardsLateSampleBuffers:(bool)arg1;
- (void)setVideoColorInfo:(id)arg1;
- (id)initWithMediaType:(unsigned int)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end
