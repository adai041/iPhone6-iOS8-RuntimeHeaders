/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, <DOMEventTarget>;

@interface DOMEvent : DOMObject  {
}

@property(copy,readonly) NSString * type;
@property(readonly) <DOMEventTarget> * target;
@property(readonly) <DOMEventTarget> * currentTarget;
@property(readonly) unsigned short eventPhase;
@property(readonly) bool bubbles;
@property(readonly) bool cancelable;
@property(readonly) unsigned long long timeStamp;
@property(readonly) <DOMEventTarget> * srcElement;
@property bool returnValue;
@property bool cancelBubble;


- (void)stopImmediatePropagation;
- (void)initEvent:(id)arg1 :(bool)arg2 :(bool)arg3;
- (void)initEvent:(id)arg1 canBubbleArg:(bool)arg2 cancelableArg:(bool)arg3;
- (void)preventDefault;
- (void)stopPropagation;
- (void)setCancelBubble:(bool)arg1;
- (bool)cancelBubble;
- (bool)returnValue;
- (id)srcElement;
- (bool)defaultPrevented;
- (bool)cancelable;
- (bool)bubbles;
- (unsigned short)eventPhase;
- (id)currentTarget;
- (void)finalize;
- (unsigned long long)timeStamp;
- (void)setReturnValue:(bool)arg1;
- (id)target;
- (id)type;
- (void)dealloc;

@end