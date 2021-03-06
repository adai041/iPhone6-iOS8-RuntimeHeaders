/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSString;

@interface IDSServiceMonitor : NSObject  {
    long long _availability;
    NSString *_service;
    int _token;
}

@property(retain,readonly) NSString * service;


- (void)handleActiveAccountsChanged:(id)arg1;
- (void)_postAvailability:(long long)arg1;
- (void)updateAvailability;
- (long long)serviceAvailability;
- (id)initWithService:(id)arg1;
- (id)service;
- (void)dealloc;
- (void)_updateAvailability;

@end
