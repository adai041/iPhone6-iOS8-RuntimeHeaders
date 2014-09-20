/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject, Protocol;

@interface NSProtocolChecker : NSProxy  {
}

@property(readonly) Protocol * protocol;
@property(retain,readonly) NSObject * target;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)protocolCheckerWithTarget:(id)arg1 protocol:(id)arg2;

- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)protocol;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)target;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (const char *)_localClassNameForClass;
- (struct objc_method_description { SEL x1; char *x2; }*)methodDescriptionForSelector:(SEL)arg1;
- (id)_imMethodSignatureForSelector:(SEL)arg1;

@end
