/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDNFCHCIStartOfTransactionEvent : PBCodable <NSCopying> {
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned int _status;
    NSData *_uuidReference;
    unsigned int _version;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int status : 1; 
        unsigned int version : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasVersion;
@property unsigned int version;
@property bool hasStatus;
@property unsigned int status;
@property(readonly) bool hasUuidReference;
@property(retain) NSData * uuidReference;
@property bool hasTimeDeltaFromReference;
@property unsigned long long timeDeltaFromReference;


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
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (bool)hasStatus;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
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

@end
