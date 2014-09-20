/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSLock, NSThread, <BKSAccelerometerDelegate>;

@interface BKSAccelerometer : NSObject  {
    <BKSAccelerometerDelegate> *_delegate;
    struct __CFRunLoopSource { } *_accelerometerEventsSource;
    struct __CFRunLoop { } *_accelerometerEventsRunLoop;
    double _interval;
    NSLock *_lock;
    int _orientationCheckToken;
    int _orientationNotificationsToken;
    NSThread *_orientationEventsThread;
    unsigned int _orientationPort;
    bool_passiveOrientationEvents;
    bool_orientationEventsEnabled;
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
    double _updateInterval;
}

@property bool accelerometerEventsEnabled;
@property double updateInterval;
@property float xThreshold;
@property float yThreshold;
@property float zThreshold;
@property bool passiveOrientationEvents;
@property bool orientationEventsEnabled;
@property <BKSAccelerometerDelegate> * delegate;


- (bool)orientationEventsEnabled;
- (float)zThreshold;
- (float)yThreshold;
- (float)xThreshold;
- (int)currentDeviceOrientation;
- (void)setOrientationEventsEnabled:(bool)arg1;
- (bool)passiveOrientationEvents;
- (id)_orientationEventsThread;
- (void)setPassiveOrientationEvents:(bool)arg1;
- (void)_serverWasRestarted;
- (void)_orientationDidChange;
- (void)_updateOrientationServer;
- (void)_checkOut;
- (void)_checkIn;
- (void)setZThreshold:(float)arg1;
- (void)setYThreshold:(float)arg1;
- (void)setXThreshold:(float)arg1;
- (void)setUpdateInterval:(double)arg1;
- (double)updateInterval;
- (bool)accelerometerEventsEnabled;
- (void)setAccelerometerEventsEnabled:(bool)arg1;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end
