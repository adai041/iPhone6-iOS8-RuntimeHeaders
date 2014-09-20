/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSObject<OS_xpc_object>;

@interface IDSRemoteCredential : NSObject  {
    NSObject<OS_xpc_object> *_connection;
}


- (void)_sendMessage:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_disconnected;
- (void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(id)arg1;
- (void)sendiCloudSignOutRequestWithCompletionBlock:(id)arg1;
- (void)sendiCloudSignInRequestWithUsername:(id)arg1 password:(id)arg2 withCompletionBlock:(id)arg3;
- (void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(id)arg1;
- (void)fetchRemoteiCloudIDWithCompletionBlock:(id)arg1;
- (void)requestRemoteAuthTokenForUsername:(id)arg1 service:(id)arg2 badPassword:(bool)arg3 showForgotPassword:(bool)arg4 outRequestID:(id*)arg5 completionBlock:(id)arg6;
- (void)requestRemotePasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(bool)arg3 showForgotPassword:(bool)arg4 shouldRememberPassword:(bool)arg5 outRequestID:(id*)arg6 completionBlock:(id)arg7;
- (void)fetchRemotePasswordForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 completionBlock:(id)arg4;
- (void)fetchRemoteAuthTokenForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 completionBlock:(id)arg4;
- (bool)_connect;
- (void)dealloc;
- (bool)_disconnect;

@end
