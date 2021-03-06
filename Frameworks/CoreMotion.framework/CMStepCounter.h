/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CMStepCounterProxy;

@interface CMStepCounter : NSObject  {
    CMStepCounterProxy *_stepcounterProxy;
}

@property bool enabled;
@property(readonly) bool everRequested;
@property(readonly) CMStepCounterProxy * stepcounterProxy;

+ (bool)isStepCountingAvailable;

- (bool)enabled;
- (void)setEnabled:(bool)arg1;
- (id)init;
- (void)dealloc;
- (bool)everRequested;
- (void)deleteHistory;
- (void)getTotalCountToQueue:(id)arg1 withHandler:(id)arg2;
- (void)stopStepCountingUpdates;
- (void)startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(id)arg3;
- (void)queryStepCountStartingFrom:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(id)arg4;
- (id)stepcounterProxy;

@end
