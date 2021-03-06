/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject  {
    SSXPCConnection *_connection;
    long long _manifestType;
}

@property(readonly) long long manifestType;


- (void)removeItemWithAssetPath:(id)arg1 completionBlock:(id)arg2;
- (void)rebuildManifestWithCompletionBlock:(id)arg1;
- (long long)manifestType;
- (void)getPathsForFilesWithClass:(long long)arg1 completionBlock:(id)arg2;
- (void)_removeItemsWithAssetPaths:(id)arg1 completionBlock:(id)arg2;
- (void)removeItemsWithAssetPaths:(id)arg1 completionBlock:(id)arg2;
- (id)initWithManifestType:(long long)arg1;
- (id)init;
- (void)dealloc;

@end
