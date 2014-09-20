/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSpringAnimationSettings : BSAnimationSettings  {
    double _mass;
    double _stiffness;
    double _damping;
    double _epsilon;
    bool_hasCalculatedDuration;
}

@property(readonly) double mass;
@property(readonly) double stiffness;
@property(readonly) double damping;
@property(readonly) double epsilon;

+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 delay:(double)arg5 timingFunction:(id)arg6;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;
+ (bool)supportsSecureCoding;

- (void)_setDamping:(double)arg1;
- (void)_setStiffness:(double)arg1;
- (void)_setMass:(double)arg1;
- (bool)_hasCalculatedDuration;
- (double)epsilon;
- (id)_initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 delay:(double)arg5 frameInterval:(double)arg6 timingFunction:(id)arg7;
- (void)_setEpsilon:(double)arg1;
- (void)_setTimingFunction:(id)arg1;
- (bool)isSpringAnimation;
- (id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)mass;
- (double)damping;
- (void)_setDuration:(double)arg1;
- (double)duration;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)stiffness;

@end
