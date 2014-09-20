/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRuntimeEventConnection : UIRuntimeConnection  {
    unsigned long long eventMask;
}

@property unsigned long long eventMask;
@property(readonly) SEL action;
@property(readonly) id target;


- (void)setEventMask:(unsigned long long)arg1;
- (unsigned long long)eventMask;
- (void)connect;
- (void)connectForSimulator;
- (id)target;
- (SEL)action;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
