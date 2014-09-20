/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class <NDBackgroundSessionProtocol>, NSError, NSString;

@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass> {
    bool_sentCancel;
    <NDBackgroundSessionProtocol> *_remoteSession;
    unsigned long long _ident;
    NSError *_immediateError;
}

@property(retain) <NDBackgroundSessionProtocol> * remoteSession;
@property(readonly) unsigned long long ident;
@property(retain) NSError * immediateError;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setTaskDescription:(id)arg1;
- (void)dealloc;
- (id)immediateError;
- (id)remoteSession;
- (id)initWithBackgroundTask:(id)arg1;
- (void)_onqueue_didReceiveResponse:(id)arg1;
- (void)_onqueue_didResume;
- (void)setImmediateError:(id)arg1;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned long long)arg4;
- (void)setRemoteSession:(id)arg1;
- (unsigned long long)ident;
- (id)initWithTaskInfo:(id)arg1 session:(id)arg2 remoteSession:(id)arg3 ident:(unsigned long long)arg4;
- (id)_timingData;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_disavow;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_connectionWaiting;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(id)arg2;
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(id)arg3;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_cancel;
- (void)_onqueue_resume;
- (void)_onqueue_suspend;

@end
