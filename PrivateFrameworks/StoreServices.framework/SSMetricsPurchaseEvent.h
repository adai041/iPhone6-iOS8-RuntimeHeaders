/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString;

@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent  {
}

@property double requestStartTime;
@property double responseEndTime;
@property double responseStartTime;
@property(retain) NSString * transactionIdentifier;


- (void)setRequestStartTime:(double)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseStartTime:(double)arg1;
- (id)transactionIdentifier;
- (void)setTransactionIdentifier:(id)arg1;
- (void)addFieldsFromPurchaseResponse:(id)arg1;
- (double)responseEndTime;
- (double)responseStartTime;
- (double)requestStartTime;
- (id)init;

@end
