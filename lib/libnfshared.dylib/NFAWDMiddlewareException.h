/* Generated by RuntimeBrowser.
   Image: /usr/lib/libnfshared.dylib
 */

@class NSString, AWDNFCMiddlewareExceptionEvent;

@interface NFAWDMiddlewareException : NSObject <NFAWDEventProtocol> {
    unsigned int version;
    unsigned int type;
    unsigned int errorCode;
    AWDNFCMiddlewareExceptionEvent *_metric;
}

@property unsigned int version;
@property unsigned int type;
@property unsigned int errorCode;
@property AWDNFCMiddlewareExceptionEvent * metric;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)getMetric;
- (unsigned int)getMetricId;
- (id)metric;
- (void)setMetric:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (unsigned int)errorCode;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)init;
- (void)dealloc;

@end
