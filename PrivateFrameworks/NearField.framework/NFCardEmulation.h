/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@class NSObject<OS_dispatch_queue>, <NFCardEmulationDelegate>;

@interface NFCardEmulation : NSObject  {
    bool_ceEnable;
    bool_fieldDetectEnable;
    unsigned char _source;
    <NFCardEmulationDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


- (void)stopFieldDetect;
- (void)startFieldDetect;
- (void)stopCardEmulation;
- (void)startCardEmulation;
- (id)initWithSource:(unsigned char)arg1 delegate:(id)arg2 queue:(id)arg3 idleExit:(bool)arg4;
- (void)_didReceiveRestrictedModeChanged:(bool)arg1;
- (void)_didReceiveTimerExpired:(id)arg1;
- (void)_didReceiveButtonPressed:(id)arg1;
- (void)_didEndTransaction:(id)arg1;
- (void)_didStartTransaction:(id)arg1;
- (void)_didReceiveCardSelect:(id)arg1;
- (void)_didDetectField:(bool)arg1;
- (void)_didFDChangeSuspended:(bool)arg1;
- (void)_didCEChangeSuspended:(bool)arg1;
- (id)initWithSource:(unsigned char)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)_stopFieldDetect;
- (void)_startFieldDetect;
- (void)_stopCardEmulation;
- (void)_startCardEmulation;
- (void)_didReceiveEvent:(id)arg1;
- (void)dealloc;

@end
