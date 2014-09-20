/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDNFCHCIEndOfTransactionEvent : PBCodable <NSCopying> {
    unsigned long long _iad;
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned long long _transactionTotal;
    NSData *_aid;
    NSData *_cdi;
    unsigned int _command;
    unsigned int _commandStatus;
    unsigned int _currencyCode;
    unsigned int _cvm;
    unsigned int _informative;
    NSData *_maid;
    NSData *_maidDeprecated;
    NSData *_mcii;
    unsigned int _msc;
    NSData *_transactionId;
    unsigned int _transactionStatus;
    NSData *_uuidReference;
    unsigned int _version;
    struct { 
        unsigned int iad : 1; 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int transactionTotal : 1; 
        unsigned int command : 1; 
        unsigned int commandStatus : 1; 
        unsigned int currencyCode : 1; 
        unsigned int cvm : 1; 
        unsigned int informative : 1; 
        unsigned int msc : 1; 
        unsigned int transactionStatus : 1; 
        unsigned int version : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasVersion;
@property unsigned int version;
@property bool hasCommandStatus;
@property unsigned int commandStatus;
@property bool hasCommand;
@property unsigned int command;
@property bool hasTransactionStatus;
@property unsigned int transactionStatus;
@property bool hasInformative;
@property unsigned int informative;
@property(readonly) bool hasAid;
@property(retain) NSData * aid;
@property bool hasTransactionTotal;
@property unsigned long long transactionTotal;
@property bool hasCurrencyCode;
@property unsigned int currencyCode;
@property bool hasIad;
@property unsigned long long iad;
@property bool hasCvm;
@property unsigned int cvm;
@property(readonly) bool hasCdi;
@property(retain) NSData * cdi;
@property(readonly) bool hasMaidDeprecated;
@property(retain) NSData * maidDeprecated;
@property bool hasMsc;
@property unsigned int msc;
@property(readonly) bool hasMcii;
@property(retain) NSData * mcii;
@property(readonly) bool hasUuidReference;
@property(retain) NSData * uuidReference;
@property bool hasTimeDeltaFromReference;
@property unsigned long long timeDeltaFromReference;
@property(readonly) bool hasTransactionId;
@property(retain) NSData * transactionId;
@property(readonly) bool hasMaid;
@property(retain) NSData * maid;


- (id)maid;
- (id)mcii;
- (unsigned int)msc;
- (id)maidDeprecated;
- (id)cdi;
- (unsigned int)cvm;
- (unsigned long long)iad;
- (unsigned int)informative;
- (unsigned int)transactionStatus;
- (unsigned int)commandStatus;
- (bool)hasMaid;
- (bool)hasMcii;
- (bool)hasMsc;
- (void)setHasMsc:(bool)arg1;
- (void)setMsc:(unsigned int)arg1;
- (bool)hasMaidDeprecated;
- (bool)hasCdi;
- (bool)hasCvm;
- (void)setHasCvm:(bool)arg1;
- (void)setCvm:(unsigned int)arg1;
- (bool)hasIad;
- (void)setHasIad:(bool)arg1;
- (void)setIad:(unsigned long long)arg1;
- (bool)hasInformative;
- (void)setHasInformative:(bool)arg1;
- (void)setInformative:(unsigned int)arg1;
- (bool)hasTransactionStatus;
- (void)setHasTransactionStatus:(bool)arg1;
- (void)setTransactionStatus:(unsigned int)arg1;
- (bool)hasCommand;
- (void)setHasCommand:(bool)arg1;
- (bool)hasCommandStatus;
- (void)setHasCommandStatus:(bool)arg1;
- (void)setCommandStatus:(unsigned int)arg1;
- (void)setMaid:(id)arg1;
- (void)setMcii:(id)arg1;
- (void)setMaidDeprecated:(id)arg1;
- (void)setCdi:(id)arg1;
- (id)transactionId;
- (unsigned long long)transactionTotal;
- (bool)hasTransactionId;
- (bool)hasTransactionTotal;
- (void)setHasTransactionTotal:(bool)arg1;
- (void)setTransactionTotal:(unsigned long long)arg1;
- (bool)hasCurrencyCode;
- (void)setHasCurrencyCode:(bool)arg1;
- (void)setTransactionId:(id)arg1;
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
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)hasVersion;
- (void)setHasVersion:(bool)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setCurrencyCode:(unsigned int)arg1;
- (unsigned int)currencyCode;
- (void)setHasTimestamp:(bool)arg1;
- (void)setCommand:(unsigned int)arg1;
- (bool)hasTimestamp;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (unsigned int)command;

@end
