/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebScriptCallFramePrivate;

@interface WebScriptCallFrame : NSObject  {
    WebScriptCallFramePrivate *_private;
    id _userInfo;
}


- (id)functionName;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)dealloc;
- (id)exception;
- (id)_convertValueToObjcValue:(struct JSValue { union EncodedValueDescriptor { long long x_1_1_1; struct JSCell {} *x_1_1_2; struct { int x_3_2_1; int x_3_2_2; } x_1_1_3; } x1; })arg1;
- (id)_initWithGlobalObject:(id)arg1 functionName:(struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; })arg2 exceptionValue:(struct JSValue { union EncodedValueDescriptor { long long x_1_1_1; struct JSCell {} *x_1_1_2; struct { int x_3_2_1; int x_3_2_2; } x_1_1_3; } x1; })arg3;

@end