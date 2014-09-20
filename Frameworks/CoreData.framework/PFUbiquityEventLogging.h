/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableSet;

@interface PFUbiquityEventLogging : NSObject  {
    NSMutableSet *_logEvents;
    long long _logLevel;
}

@property long long logLevel;

+ (void)initialize;
+ (id)sharedEventLogger;

- (long long)logLevel;
- (id)init;
- (void)dealloc;
- (void)setLogLevel:(long long)arg1;
- (id)incompleteEvents;
- (void)endEvent:(id)arg1;
- (void)fatal:(id)arg1 message:(id)arg2;
- (void)error:(id)arg1 message:(id)arg2;
- (void)warning:(id)arg1 message:(id)arg2;
- (void)info:(id)arg1 message:(id)arg2;
- (void)debug:(id)arg1 message:(id)arg2;
- (void)diagnostic:(id)arg1 message:(id)arg2;
- (void)logEventData:(id)arg1 message:(id)arg2;
- (void)beginEvent:(id)arg1;
- (id)createCustomEventTrackingID:(id)arg1;
- (id)createEventTrackingID:(int)arg1;
- (void)logEvent:(id)arg1 ID:(id)arg2 message:(id)arg3;

@end
