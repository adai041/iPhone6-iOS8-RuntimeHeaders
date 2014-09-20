/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@class NSObject<OS_dispatch_queue>;

@interface MSVSystemDialogManager : NSObject  {
    struct __CFDictionary { } *_registeredSystemDialogs;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedManager;

- (void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification { }*)arg1;
- (id)systemDialogForUserNotification:(struct __CFUserNotification { }*)arg1;
- (void)registerSystemDialog:(id)arg1 forUserNotification:(struct __CFUserNotification { }*)arg2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
