/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class FigStateMachine, NSMutableArray, NSString;

@interface BWSinkNode : BWNode  {
    FigStateMachine *_stateMachine;
    int _stateLock;
    NSMutableArray *_handlersToCallWhenIdle;
    NSMutableArray *_handlersToCallWhenActive;
    struct OpaqueFigSimpleMutex { } *_configurationHandlerLock;
    long long _liveConfigurationID;
    NSMutableArray *_configurationLiveHandlers;
    NSMutableArray *_configurationLiveIDs;
}

@property(readonly) NSString * currentStateDebugString;
@property(readonly) long long liveConfigurationID;

+ (void)initialize;

- (id)currentStateDebugString;
- (void)notifyWhenConfigurationID:(long long)arg1 becomesLive:(id)arg2;
- (void)notifyWhenIdle:(id)arg1;
- (void)notifyWhenActive:(id)arg1;
- (void)_setupSinkNodeStateMachine;
- (long long)liveConfigurationID;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (id)nodeType;
- (id)init;
- (void)dealloc;

@end
