/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItemMetadataOutputInternal, NSObject<OS_dispatch_queue>, <AVPlayerItemMetadataOutputPushDelegate>;

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput  {
    AVPlayerItemMetadataOutputInternal *_metadataOutputInternal;
}

@property(readonly) <AVPlayerItemMetadataOutputPushDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;
@property double advanceIntervalForDelegateInvocation;

+ (void)initialize;

- (void)setAdvanceIntervalForDelegateInvocation:(double)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)finalize;
- (id)delegateQueue;
- (id)delegate;
- (id)init;
- (void)dealloc;
- (void)_collectUncollectables;
- (id)initWithIdentifiers:(id)arg1;
- (void)_detachFromPlayerItem;
- (bool)_attachToPlayerItem:(id)arg1;
- (double)advanceIntervalForDelegateInvocation;
- (void)_pushTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2;
- (void)_signalFlush;

@end
