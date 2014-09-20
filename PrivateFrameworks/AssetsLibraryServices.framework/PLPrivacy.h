/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@class NSObject<OS_dispatch_queue>;

@interface PLPrivacy : NSObject  {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _authStatus;
}

+ (void)disableForceOverrideTCC;
+ (void)enableForceOverrideTCC;
+ (id)sharedInstance;

- (bool)isPhotoLibrarySharingOrModificationAllowed;
- (void)isPhotosAccessAllowedWithScope:(long long)arg1 handler:(id)arg2;
- (bool)isPhotosTCCAccessAllowed;
- (bool)isPhotosTCCAccessNotAllowed;
- (bool)isPhotoLibraryReadAccessAllowed;
- (void)photoAccessPowersActive;
- (bool)isPhotosAccessAllowedPromptIfNeededWithHandler:(id)arg1;
- (bool)_isPhotosAccessAllowedWithScope:(long long)arg1 forceHandler:(bool)arg2 accessAllowedHandler:(id)arg3;
- (bool)isPhotosAccessAllowedWithScope:(long long)arg1 promptIfNeededWithHandler:(id)arg2;
- (id)init;
- (void)dealloc;
- (bool)isPhotosTCCAccessRestricted;
- (int)photosTCCAccessStatus;

@end
