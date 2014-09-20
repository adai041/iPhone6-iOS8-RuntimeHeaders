/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CAStateController, NSString, CALayer, CAStateTransition, NSMutableArray;

@interface CAStateControllerTransition : NSObject  {
    CAStateController *_controller;
    CALayer *_layer;
    CAStateTransition *_transition;
    double _beginTime;
    double _duration;
    float _speed;
    NSString *_masterKey;
    NSMutableArray *_animations;
}

@property(readonly) CALayer * layer;
@property(readonly) CAStateTransition * transition;
@property(readonly) double beginTime;
@property(readonly) double duration;
@property(readonly) float speed;


- (void)addAnimation:(id)arg1;
- (id)transition;
- (float)speed;
- (double)beginTime;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)invalidate;
- (double)duration;
- (id)init;
- (id)layer;
- (void)dealloc;
- (void)removeAnimationFromLayer:(id)arg1 forKey:(id)arg2;

@end
