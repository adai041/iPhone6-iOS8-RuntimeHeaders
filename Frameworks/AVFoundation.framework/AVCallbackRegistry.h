/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSObject<OS_dispatch_queue>;

@interface AVCallbackRegistry : NSObject  {
    struct __CFBag { } *_observers;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
}

+ (void)initialize;
+ (id)sharedCallbackRegistry;

- (void)finalize;
- (id)init;
- (void)dealloc;
- (id)callbackObserver:(id)arg1;
- (void)unregisterCallbackObserver:(id)arg1;
- (void)registerCallbackObserver:(id)arg1;

@end
