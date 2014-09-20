/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDNFCSECRSAuthorizeECommerce : PBCodable <NSCopying> {
    unsigned long long _otherAmount;
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned long long _transactionTotal;
    NSData *_aid;
    unsigned int _countryCode;
    unsigned int _currencyCode;
    unsigned int _merchantCapabilities;
    NSData *_merchantId;
    unsigned int _method;
    unsigned int _status;
    NSData *_transactionId;
    unsigned int _transactionType;
    NSData *_uuidReference;
    struct { 
        unsigned int otherAmount : 1; 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int transactionTotal : 1; 
        unsigned int countryCode : 1; 
        unsigned int currencyCode : 1; 
        unsigned int merchantCapabilities : 1; 
        unsigned int method : 1; 
        unsigned int status : 1; 
        unsigned int transactionType : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasStatus;
@property unsigned int status;
@property bool hasMethod;
@property unsigned int method;
@property(readonly) bool hasAid;
@property(retain) NSData * aid;
@property(readonly) bool hasMerchantId;
@property(retain) NSData * merchantId;
@property bool hasCurrencyCode;
@property unsigned int currencyCode;
@property bool hasTransactionTotal;
@property unsigned long long transactionTotal;
@property bool hasOtherAmount;
@property unsigned long long otherAmount;
@property bool hasMerchantCapabilities;
@property unsigned int merchantCapabilities;
@property bool hasTransactionType;
@property unsigned int transactionType;
@property bool hasCountryCode;
@property unsigned int countryCode;
@property(readonly) bool hasUuidReference;
@property(retain) NSData * uuidReference;
@property bool hasTimeDeltaFromReference;
@property unsigned long long timeDeltaFromReference;
@property(readonly) bool hasTransactionId;
@property(retain) NSData * transactionId;


- (id)transactionId;
- (unsigned int)merchantCapabilities;
- (unsigned long long)otherAmount;
- (unsigned long long)transactionTotal;
- (id)merchantId;
- (bool)hasTransactionId;
- (void)setHasCountryCode:(bool)arg1;
- (bool)hasTransactionType;
- (void)setHasTransactionType:(bool)arg1;
- (bool)hasMerchantCapabilities;
- (void)setHasMerchantCapabilities:(bool)arg1;
- (void)setMerchantCapabilities:(unsigned int)arg1;
- (bool)hasOtherAmount;
- (void)setHasOtherAmount:(bool)arg1;
- (void)setOtherAmount:(unsigned long long)arg1;
- (bool)hasTransactionTotal;
- (void)setHasTransactionTotal:(bool)arg1;
- (void)setTransactionTotal:(unsigned long long)arg1;
- (bool)hasCurrencyCode;
- (void)setHasCurrencyCode:(bool)arg1;
- (bool)hasMerchantId;
- (bool)hasMethod;
- (void)setHasMethod:(bool)arg1;
- (void)setTransactionId:(id)arg1;
- (void)setMerchantId:(id)arg1;
- (id)aid;
- (bool)hasAid;
- (void)setAid:(id)arg1;
- (unsigned long long)timeDeltaFromReference;
- (id)uuidReference;
- (bool)hasTimeDeltaFromReference;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (bool)hasUuidReference;
- (void)setUuidReference:(id)arg1;
- (void)setMethod:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)countryCode;
- (bool)hasCountryCode;
- (void)setCountryCode:(unsigned int)arg1;
- (void)setCurrencyCode:(unsigned int)arg1;
- (unsigned int)currencyCode;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (bool)hasStatus;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (unsigned int)method;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (unsigned int)transactionType;
- (void)setTransactionType:(unsigned int)arg1;

@end
