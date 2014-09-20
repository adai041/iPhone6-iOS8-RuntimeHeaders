/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CMOdometerProxy;

@interface CMOdometer : NSObject  {
    CMOdometerProxy *_odometerProxy;
}

@property(readonly) CMOdometerProxy * odometerProxy;

+ (bool)isOdometerAvailableForActivity:(long long)arg1;

- (id)init;
- (void)dealloc;
- (void)stopOdometerUpdates;
- (void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(id)arg2;
- (id)odometerProxy;

@end
