/* Generated by RuntimeBrowser.
   Image: /usr/lib/libnfshared.dylib
 */

@class AWDNFCSECRSAuthInit, NSString;

@interface NFAWDCRSAuthInit : NSObject <NFAWDEventProtocol> {
    unsigned int status;
    AWDNFCSECRSAuthInit *_metric;
}

@property unsigned int status;
@property AWDNFCSECRSAuthInit * metric;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)getMetric;
- (unsigned int)getMetricId;
- (unsigned long long)updateTransactionStateInfoPreviousState:(unsigned long long)arg1 withUUID:(id)arg2 withUUIDRefTimestamp:(unsigned long long)arg3;
- (id)metric;
- (void)setMetric:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (id)init;
- (void)dealloc;

@end
