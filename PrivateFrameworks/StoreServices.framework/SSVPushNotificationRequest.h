/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, SSVPushNotificationParameters;

@interface SSVPushNotificationRequest : SSRequest <SSXPCCoding> {
    SSVPushNotificationParameters *_parameters;
}

@property(copy) SSVPushNotificationParameters * pushNotificationParameters;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setPushNotificationParameters:(id)arg1;
- (id)pushNotificationParameters;
- (id)initWithPushNotificationParameters:(id)arg1;
- (void)startWithResponseBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void).cxx_destruct;
- (bool)start;
- (void)startWithCompletionBlock:(id)arg1;

@end
