/* Generated by RuntimeBrowser.
   Image: /usr/lib/libnfshared.dylib
 */

@class NSString, AWDNFCCRSAuthExceptionEvent;

@interface NFAWDCRSAuthException : NSObject <NFAWDEventProtocol> {
    AWDNFCCRSAuthExceptionEvent *_metric;
}

@property AWDNFCCRSAuthExceptionEvent * metric;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)getMetric;
- (unsigned int)getMetricId;
- (unsigned long long)updateTransactionStateInfoPreviousState:(unsigned long long)arg1 withUUID:(id)arg2 withUUIDRefTimestamp:(unsigned long long)arg3;
- (id)metric;
- (void)setMetric:(id)arg1;
- (id)init;
- (void)dealloc;

@end
