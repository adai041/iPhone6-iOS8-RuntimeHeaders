/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReferencingDelegateStorage, AVWeakReference, NSObject<OS_dispatch_queue>;

@interface AVCaptureAudioDataOutputInternal : NSObject  {
    AVWeakReference *weakReference;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *bufferQueue;
    struct OpaqueFigSimpleMutex { } *remoteQueueMutex;
    struct remoteQueueReceiverOpaque { } *remoteReceiverQueue;
}


- (id)init;
- (void)dealloc;

@end
