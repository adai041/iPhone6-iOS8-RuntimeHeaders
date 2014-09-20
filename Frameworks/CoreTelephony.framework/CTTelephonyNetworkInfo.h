/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSDictionary, NSLock, CTCarrier;

@interface CTTelephonyNetworkInfo : NSObject  {
    struct queue { 
        struct dispatch_object_s {} *fObj; 
    } _queue;
    struct __CTServerConnection { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct dispatch_queue_s {} *x2; struct CTServerState {} *x3; unsigned char x4; unsigned int x5; struct _xpc_connection_s {} *x6; } *server_connection;
    NSLock *server_lock;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _subscriberCellularProviderDidUpdateNotifier;

    bool_monitoringCellId;
    CTCarrier *_subscriberCellularProvider;
    NSString *_cachedCurrentRadioAccessTechnology;
    NSDictionary *_cachedSignalStrength;
    NSString *_cachedCellId;
}

@property(retain) CTCarrier * subscriberCellularProvider;
@property(copy) id subscriberCellularProviderDidUpdateNotifier;
@property(retain,readonly) NSString * currentRadioAccessTechnology;
@property(retain) NSString * cellId;
@property(retain) NSString * cachedCurrentRadioAccessTechnology;
@property(retain) NSDictionary * cachedSignalStrength;
@property(retain) NSString * cachedCellId;
@property bool monitoringCellId;


- (id)signalStrength;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (void)dealloc;
- (id)radioAccessTechnology;
- (id)cellId;
- (id)currentRadioAccessTechnology;
- (void)handleNotificationFromConnection:(void*)arg1 ofType:(id)arg2 withInfo:(id)arg3;
- (id)subscriberCellularProviderDidUpdateNotifier;
- (id)cachedCellId;
- (void)queryCellId;
- (bool)monitoringCellId;
- (id)cachedSignalStrength;
- (void)setCachedCellId:(id)arg1;
- (id)cachedCurrentRadioAccessTechnology;
- (void)setCellId:(id)arg1;
- (id)createSignalStrengthDictWithBars:(id)arg1;
- (void)handleCTRegistrationCellChangedNotification:(id)arg1;
- (void)handleCTSignalStrengthNotification:(id)arg1;
- (void)updateSignalStrength:(id)arg1;
- (void)updateRadioAccessTechnology:(id)arg1;
- (void)postCellularProviderUpdatesIfNecessary;
- (bool)getAllowsVOIP:(bool*)arg1 withCTError:(struct { int x1; int x2; }*)arg2;
- (bool)getMobileNetworkCode:(id)arg1 withCTError:(struct { int x1; int x2; }*)arg2;
- (bool)getMobileCountryCode:(id)arg1 andIsoCountryCode:(id)arg2 withCTError:(struct { int x1; int x2; }*)arg3;
- (bool)getCarrierName:(id)arg1 withCTError:(struct { int x1; int x2; }*)arg2;
- (void)setCachedSignalStrength:(id)arg1;
- (void)setCachedCurrentRadioAccessTechnology:(id)arg1;
- (void)setSubscriberCellularProvider:(id)arg1;
- (void)cleanUpServerConnection;
- (void)queryCTSignalStrengthNotification;
- (void)queryDataMode;
- (bool)updateNetworkInfoAndShouldNotifyClient:(bool*)arg1;
- (id)subscriberCellularProvider;
- (bool)setUpServerConnection;
- (void)setSubscriberCellularProviderDidUpdateNotifier:(id)arg1;
- (void)setMonitoringCellId:(bool)arg1;

@end
