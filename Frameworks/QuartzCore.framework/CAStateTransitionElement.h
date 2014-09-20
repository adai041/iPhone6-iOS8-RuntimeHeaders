/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CALayer, CAAnimation, NSString;

@interface CAStateTransitionElement : NSObject <NSCopying, NSCoding> {
    CALayer *_target;
    CAAnimation *_animation;
    NSString *_key;
    bool_enabled;
}

@property(getter=isEnabled) bool enabled;
@property CALayer * target;
@property(retain) CAAnimation * animation;
@property(copy) NSString * key;
@property double beginTime;
@property double duration;

+ (void)CAMLParserStartElement:(id)arg1;

- (void)setKey:(id)arg1;
- (void)setAnimation:(id)arg1;
- (id)key;
- (double)beginTime;
- (bool)isEnabled;
- (void)setBeginTime:(double)arg1;
- (id)animation;
- (void)setEnabled:(bool)arg1;
- (id)target;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTarget:(id)arg1;
- (void)setDuration:(double)arg1;
- (double)duration;
- (id)debugDescription;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;

@end
