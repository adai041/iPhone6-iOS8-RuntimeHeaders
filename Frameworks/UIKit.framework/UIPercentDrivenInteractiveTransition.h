/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSUUID;

@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {
    double _duration;
    bool_didCommitAnimations;
    bool__transitionInterrupted;
    double _completionSpeed;
    long long _completionCurve;
    NSString *__originalFillMode;
    NSUUID *__uuid;
}

@property(readonly) double duration;
@property(readonly) double percentComplete;
@property double completionSpeed;
@property long long completionCurve;
@property(setter=_setOriginalFillMode:,retain) NSString * _originalFillMode;
@property(setter=_setUuid:,retain) NSUUID * _uuid;
@property(getter=_isTransitionInterrupted,setter=_setTransitionInterrupted:) bool _transitionInterrupted;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)_originalFillMode;
- (void)setCompletionCurve:(long long)arg1;
- (void)startInteractiveTransition:(id)arg1 containerViews:(id)arg2 animation:(id)arg3;
- (void)_updateInteractiveTransition:(id)arg1 percent:(double)arg2 isFinished:(bool)arg3 didComplete:(bool)arg4;
- (void)_stopInteractiveTransition:(id)arg1;
- (void)_setTransitionInterrupted:(bool)arg1;
- (bool)_isTransitionInterrupted;
- (void)_setUuid:(id)arg1;
- (void)_setOriginalFillMode:(id)arg1;
- (double)completionSpeed;
- (long long)completionCurve;
- (id)_uuid;
- (void)_setDuration:(double)arg1;
- (void)setCompletionSpeed:(double)arg1;
- (double)duration;
- (void)updateInteractiveTransition:(double)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (double)percentComplete;
- (void)_stopInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)_resetInteractionController;
- (id)init;
- (void)dealloc;

@end
