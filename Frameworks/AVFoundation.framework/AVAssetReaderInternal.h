/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSObject<OS_dispatch_queue>, AVAsset, AVWeakReference, AVWeakKeyValueObserverProxy, NSMutableArray, NSError;

@interface AVAssetReaderInternal : NSObject  {
    AVWeakReference *weakReference;
    AVWeakKeyValueObserverProxy *KVOProxy;
    AVAsset *asset;
    struct OpaqueFigAssetReader { } *figAssetReader;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    } timeRange;
    NSMutableArray *outputs;
    long long status;
    NSError *error;
    NSObject<OS_dispatch_queue> *statusReadWriteQueue;
}



@end
