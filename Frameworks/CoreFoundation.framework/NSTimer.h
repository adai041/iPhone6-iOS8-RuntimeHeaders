/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDate;

@interface NSTimer : NSObject  {
}

@property(copy) NSDate * fireDate;
@property(readonly) double timeInterval;
@property double tolerance;
@property(getter=isValid,readonly) bool valid;
@property(retain,readonly) id userInfo;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(bool)arg5;
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(bool)arg5;
+ (id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(bool)arg3;
+ (id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(bool)arg3;

- (double)interval;
- (id)fireDate;
- (long long)order;
- (double)timeInterval;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(bool)arg6;
- (struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); })context;
- (id)userInfo;
- (void)setFireDate:(id)arg1;
- (bool)isValid;
- (void)invalidate;
- (struct __CFString { }*)copyDebugDescription;
- (double)fireTime;
- (void)setFireTime:(double)arg1;
- (double)_cffireTime;
- (void)fire;
- (void)setTolerance:(double)arg1;
- (double)tolerance;

@end
