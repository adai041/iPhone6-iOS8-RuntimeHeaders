/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary, AVWeakReference, NSString;

@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge <AVAssetResourceLoaderRequest> {
    AVWeakReference *_weakReference;
    NSDictionary *_requestDictionary;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;

- (id)init;
- (void)dealloc;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;
- (bool)_shouldInformDelegateOfFigCancellation;
- (void)_performCancellationByClient;
- (id)_requestDictionary;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestDictionary:(id)arg3;
- (id)_weakReference;

@end
