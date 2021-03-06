/* Generated by RuntimeBrowser.
   Image: /usr/lib/libnfshared.dylib
 */

@class NFAWDVersionInfo, NSData, AWDServerConnection, NSUserDefaults;

@interface NFAWDLogger : NSObject  {
    bool_resetTsmTransactionState;
    AWDServerConnection *_awdServer;
    unsigned long long _previousTransactionState;
    NSData *_uuid;
    unsigned long long _uuidRefTimestamp;
    NSUserDefaults *_userDefault;
    NSData *_tsmUuid;
    unsigned long long _tsmUuidRefTimestamp;
    NFAWDVersionInfo *_versionInfo;
}

@property(retain) AWDServerConnection * awdServer;
@property unsigned long long previousTransactionState;
@property(retain) NSData * uuid;
@property unsigned long long uuidRefTimestamp;
@property(retain) NSUserDefaults * userDefault;
@property bool resetTsmTransactionState;
@property(retain) NSData * tsmUuid;
@property unsigned long long tsmUuidRefTimestamp;
@property(retain) NFAWDVersionInfo * versionInfo;

+ (id)sharedAWDLogger;

- (void)setVersionInfo:(id)arg1;
- (id)versionInfo;
- (void)setTsmUuidRefTimestamp:(unsigned long long)arg1;
- (unsigned long long)tsmUuidRefTimestamp;
- (void)setTsmUuid:(id)arg1;
- (id)tsmUuid;
- (void)setResetTsmTransactionState:(bool)arg1;
- (bool)resetTsmTransactionState;
- (void)setUserDefault:(id)arg1;
- (id)userDefault;
- (void)setUuidRefTimestamp:(unsigned long long)arg1;
- (unsigned long long)uuidRefTimestamp;
- (void)setPreviousTransactionState:(unsigned long long)arg1;
- (unsigned long long)previousTransactionState;
- (void)postAWDVersionInfo:(id)arg1;
- (void)postAWDTSMConnectivityException:(unsigned int)arg1;
- (void)postAWDTSMEndWithParameters:(id)arg1;
- (void)postAWDTSMStartWithParameters:(id)arg1;
- (void)postAWDRestrictedModeFromContactlessMode:(bool)arg1;
- (void)postAWDAPNReceived;
- (void)postAWDHCIEndOfTransactionEventWithParameters:(id)arg1;
- (void)postAWDHCIStartOfTransactionEventWithVersion:(unsigned int)arg1 withStatus:(unsigned int)arg2;
- (void)postAWDCRSActivationTimerExpiredWithVersion:(unsigned int)arg1 withStatus:(unsigned int)arg2;
- (void)postAWDSESelectEventWithAID:(id)arg1;
- (void)postAWDCRSDeAuthWithStatus:(unsigned int)arg1;
- (void)postAWDCRSAuthECommerceWithParameters:(id)arg1;
- (void)postAWDCRSAuthWithStatus:(unsigned int)arg1 withMethod:(unsigned int)arg2 withAID:(id)arg3;
- (void)postAWDCRSAuthInitEventWithStatus:(unsigned int)arg1;
- (void)postAWDFieldEventWithState:(bool)arg1;
- (void)setStatWithKey:(id)arg1 withUInt32Value:(unsigned int)arg2;
- (void)enableQueryMetricsListener;
- (void)resetTSMTransactionUUIDReference;
- (void)postAWDIncompleteTransaction;
- (void)incrementStatWithKey:(id)arg1 withUInt32Value:(unsigned int)arg2;
- (id)generateUUID;
- (void)postAWDEvent:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setAwdServer:(id)arg1;
- (id)awdServer;
- (id)uuid;
- (unsigned long long)getTimestamp;
- (id)init;
- (void)dealloc;

@end
