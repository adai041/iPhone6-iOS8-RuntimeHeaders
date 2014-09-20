/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@class PKDaemonClient;

@interface PKManager : NSObject  {
    PKDaemonClient *_client;
}

@property(retain) PKDaemonClient * client;

+ (id)defaultManager;

- (id)initForService:(const char *)arg1;
- (id)client;
- (void)setClient:(id)arg1;
- (void)releaseHold:(id)arg1;
- (void)forceHoldPlugIn:(id)arg1 result:(id)arg2;
- (void)holdPlugInsInApplication:(id)arg1 result:(id)arg2;
- (id)containingAppForPlugInConnectedTo:(id)arg1;
- (id)informationForPlugInWithPid:(int)arg1;
- (void)unregisterPlugInsInBundle:(id)arg1 result:(id)arg2;
- (void)registerPlugInsInBundle:(id)arg1 result:(id)arg2;
- (void)unregisterPlugInAtURL:(id)arg1 result:(id)arg2;
- (void)registerPlugInAtURL:(id)arg1 result:(id)arg2;
- (void)holdRequest:(id)arg1 flags:(unsigned long long)arg2 result:(id)arg3;
- (id)containingAppForExtensionProperties:(id)arg1;
- (id)containingAppForPlugInWithPid:(int)arg1;
- (void).cxx_destruct;

@end
