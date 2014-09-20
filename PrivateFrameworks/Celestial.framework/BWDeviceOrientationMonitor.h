/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSObject<OS_dispatch_queue>, <BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate>;

@interface BWDeviceOrientationMonitor : NSObject  {
    int _orientationDispatchToken;
    NSObject<OS_dispatch_queue> *_orientationNotificationDispatchQueue;
    unsigned int _mostRecentPortraitLandscapeOrientation;
    unsigned int _currentOrientation;
    <BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> *_portraitLandscapeUpdateDelegate;
    struct OpaqueFigSimpleMutex { } *_stateMutex;
}

@property(readonly) unsigned int mostRecentPortraitLandscapeOrientation;
@property <BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> * portraitLandscapeUpdateDelegate;

+ (void)initialize;

- (unsigned int)mostRecentPortraitLandscapeOrientation;
- (void)setPortraitLandscapeUpdateDelegate:(id)arg1;
- (id)portraitLandscapeUpdateDelegate;
- (void)_orientationChanged;
- (void)_doStop;
- (void)_doStart;
- (bool)stop;
- (bool)start;
- (id)init;
- (void)dealloc;

@end
