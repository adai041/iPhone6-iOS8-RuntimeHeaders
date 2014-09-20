/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@class CUTWeakReference, NSMutableArray;

@interface CUTPowerMonitor : NSObject  {
    CUTWeakReference *_iokitDelegate;
    struct __CFRunLoopSource { } *_batteryRunLoopSource;
    struct IONotificationPort { } *_batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
    unsigned int _pmConnection;
    struct IONotificationPort { } *_pmPort;
    unsigned int _pmNotifier;
    NSMutableArray *_delegates;
    double _currentLevel;
    bool_isExternalPowerConnected;
}

@property bool isExternalPowerConnected;
@property(readonly) double batteryPercentRemaining;
@property double currentLevel;

+ (id)sharedInstance;

- (bool)isExternalPowerConnected;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)setExternalPowerConnected:(bool)arg1;
- (double)currentLevel;
- (bool)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg1;
- (void)setCurrentLevel:(double)arg1;
- (double)batteryPercentRemaining;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)arg1 notificationID:(void*)arg2;
- (id)init;
- (void)dealloc;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;

@end