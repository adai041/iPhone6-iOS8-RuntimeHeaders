/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSXPCConnection, <SSDownloadMonitorDelegate>, NSObject<OS_dispatch_queue>;

@interface SSDownloadMonitor : NSObject  {
    SSXPCConnection *_connection;
    <SSDownloadMonitorDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property <SSDownloadMonitorDelegate> * delegate;


- (void)_reloadForChangeNotification;
- (void)resumeMonitorItem:(id)arg1 completionBlock:(id)arg2;
- (void)prioritizeMonitorItem:(id)arg1 completionBlock:(id)arg2;
- (void)pauseMonitorItem:(id)arg1 completionBlock:(id)arg2;
- (void)getMonitorItemsWithCompletionBlock:(id)arg1;
- (id)_copyItemsWithReply:(id)arg1 error:(id*)arg2;
- (id)_connection;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end
