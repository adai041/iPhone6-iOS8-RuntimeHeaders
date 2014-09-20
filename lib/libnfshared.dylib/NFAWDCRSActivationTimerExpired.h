/* Generated by RuntimeBrowser.
   Image: /usr/lib/libnfshared.dylib
 */

@class NSString;

@interface NFAWDCRSActivationTimerExpired : NSObject <NFAWDEventProtocol> {
    unsigned int _version;
    unsigned int _status;
}

@property unsigned int version;
@property unsigned int status;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (unsigned long long)updateTransactionStateInfoPreviousState:(unsigned long long)arg1 withUUID:(id)arg2 withUUIDRefTimestamp:(unsigned long long)arg3;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;

@end