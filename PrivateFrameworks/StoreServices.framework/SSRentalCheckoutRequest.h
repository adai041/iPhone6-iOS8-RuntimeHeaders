/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSArray, NSString;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {
    NSNumber *_accountIdentifier;
    long long _downloadIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
    bool_shouldValidateRentalInfo;
}

@property(readonly) NSArray * sinfs;
@property(readonly) NSNumber * accountIdentifier;
@property(readonly) NSNumber * rentalKeyIdentifier;
@property(readonly) long long downloadIdentifier;
@property bool shouldValidateRentalInfo;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setShouldValidateRentalInfo:(bool)arg1;
- (bool)shouldValidateRentalInfo;
- (id)rentalKeyIdentifier;
- (id)initWithSinfs:(id)arg1;
- (id)accountIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithDownloadIdentifier:(long long)arg1;
- (id)sinfs;
- (void)startWithConnectionResponseBlock:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (long long)downloadIdentifier;

@end