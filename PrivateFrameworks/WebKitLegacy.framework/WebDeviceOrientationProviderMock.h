/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebDeviceOrientationProviderMockInternal, NSString;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider> {
    WebDeviceOrientationProviderMockInternal *m_internal;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)shared;

- (id)lastOrientation;
- (void)startUpdating;
- (void)stopUpdating;
- (void)setOrientation:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setController:(struct DeviceOrientationController { }*)arg1;

@end