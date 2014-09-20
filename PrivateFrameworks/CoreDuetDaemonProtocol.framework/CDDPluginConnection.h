/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@class CDDebug, CDDXPCConnection;

@interface CDDPluginConnection : NSObject  {
    CDDebug *_debug;
    unsigned long long _clientId;
    CDDXPCConnection *_connection;
}

@property(readonly) CDDebug * debug;
@property(readonly) unsigned long long clientId;
@property(readonly) CDDXPCConnection * connection;


- (unsigned long long)clientId;
- (id)initWithClientId:(unsigned long long)arg1 error:(id*)arg2;
- (bool)requestSystemDataWithError:(id*)arg1 replyHandler:(id)arg2;
- (bool)triggerSystemDataExchange:(id)arg1 error:(id*)arg2 replyHandler:(id)arg3;
- (bool)currentMitigationSettingsWithError:(id*)arg1 replyHandler:(id)arg2;
- (bool)setMitigation:(id)arg1 error:(id*)arg2 replyHandler:(id)arg3;
- (bool)setTriggerConditions:(id)arg1 error:(id*)arg2 replyHandler:(id)arg3;
- (bool)admissionSignoffConditionsChanged:(id)arg1 error:(id*)arg2 replyHandler:(id)arg3;
- (bool)registerForSignoffWithError:(id*)arg1 replyHandler:(id)arg2;
- (bool)sendMessageWithType:(long long)arg1 error:(id*)arg2 dictionaryKey:(id)arg3 dictionary:(id)arg4 replyHandler:(id)arg5;
- (bool)sendMessageWithType:(long long)arg1 error:(id*)arg2 replyHandler:(id)arg3;
- (id)messageWithError:(id*)arg1;
- (id)connection;
- (void).cxx_destruct;
- (id)init;
- (id)debug;

@end
