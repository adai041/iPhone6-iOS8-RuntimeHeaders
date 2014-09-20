/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class <FBSWorkspaceClientDelegate>, NSMutableDictionary, NSString, NSObject<OS_dispatch_queue>, NSMutableArray, BSBasicServerClient;

@interface FBSWorkspaceClient : BSBaseXPCClient <FBSSceneUpdater> {
    BSBasicServerClient *_client;
    NSMutableArray *_queuedMessages;
    NSMutableDictionary *_sceneIDToSceneHandlerMap;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    bool_inTransaction;
    <FBSWorkspaceClientDelegate> *_delegate;
}

@property(readonly) <FBSWorkspaceClientDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * callOutQueue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithDelegate:(id)arg1;
- (id)callOutQueue;
- (bool)queue_handleMessageWithType:(long long)arg1 message:(id)arg2 client:(id)arg3;
- (void)_queue_handleSceneActions:(id)arg1;
- (void)_queue_handleActions:(id)arg1;
- (void)_queue_handleDestroyScene:(id)arg1;
- (void)_queue_handleSceneUpdate:(id)arg1;
- (void)_queue_handleCreateScene:(id)arg1;
- (void)_queue_handleTransactionBookEnd;
- (void)_sendReplyForMessage:(id)arg1 withEvent:(id)arg2;
- (void)_queue_ensureTransaction;
- (id)_queue_workspaceEventFromMessage:(id)arg1 ofType:(Class)arg2;
- (void)_debugLog:(id)arg1;
- (void)_sendMessage:(long long)arg1 withEvent:(id)arg2;
- (void)sendDestroySceneRequestEvent:(id)arg1 withCompletion:(id)arg2;
- (void)sendCreateSceneRequestEvent:(id)arg1 withCompletion:(id)arg2;
- (void)_queue_sendReplyForMessage:(id)arg1 withEvent:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 didDetachContext:(id)arg2;
- (void)scene:(id)arg1 didReceiveUpdateToContext:(id)arg2;
- (void)scene:(id)arg1 didAttachContext:(id)arg2;
- (bool)willObserveContextsManually;
- (void)unregisterDelegateForSceneID:(id)arg1;
- (void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2 withResponseEvent:(id)arg3 ofType:(Class)arg4;
- (void)queue_connectionWasInterrupted;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (id)_loggingProem;
- (void)queue_handleMessage:(id)arg1;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (id)delegate;
- (id)description;
- (id)init;
- (void)dealloc;

@end
