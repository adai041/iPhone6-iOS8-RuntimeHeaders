/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSDate;

@interface IMCallMonitor : NSObject  {
    id _callCenter;
    bool_wasOnCall;
    NSDate *_lastCallDate;
}

@property(readonly) bool isOnCall;
@property(retain,readonly) NSDate * dateLastCallEnded;

+ (id)sharedInstance;

- (id)dateLastCallEnded;
- (bool)isOnCall;
- (id)init;
- (void)dealloc;

@end
