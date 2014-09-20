/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMManualUpdater : NSObject  {
    id _target;
    SEL _action;
    unsigned int _needsUpdate : 1;
}

@property id target;
@property SEL action;
@property bool needsUpdate;


- (bool)needsUpdate;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setAction:(SEL)arg1;
- (id)target;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)description;

@end
