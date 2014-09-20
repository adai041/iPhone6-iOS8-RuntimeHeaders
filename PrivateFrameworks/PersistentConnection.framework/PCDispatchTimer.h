/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSObject<OS_dispatch_source>, CUTWeakReference, NSObject<OS_dispatch_queue>, NSDate;

@interface PCDispatchTimer : NSObject  {
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _fireTime;
    NSDate *_fireDate;
    CUTWeakReference *_target;
    SEL _selector;
    bool_isValid;
}

@property(readonly) bool isValid;
@property(retain) NSDate * fireDate;


- (void)_callTarget;
- (id)initWithQueue:(id)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned long long)arg4;
- (void)_cleanupTimer;
- (id)fireDate;
- (void)start;
- (void)setFireDate:(id)arg1;
- (bool)isValid;
- (void)invalidate;
- (void)dealloc;

@end
