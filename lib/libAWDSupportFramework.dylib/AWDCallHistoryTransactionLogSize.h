/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCallHistoryTransactionLogSize : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _records;
    unsigned int _sizeBytes;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int records : 1; 
        unsigned int sizeBytes : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasSizeBytes;
@property unsigned int sizeBytes;
@property bool hasRecords;
@property unsigned int records;


- (unsigned int)sizeBytes;
- (bool)hasRecords;
- (void)setHasRecords:(bool)arg1;
- (bool)hasSizeBytes;
- (void)setHasSizeBytes:(bool)arg1;
- (void)setSizeBytes:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRecords:(unsigned int)arg1;
- (bool)hasTimestamp;
- (id)dictionaryRepresentation;
- (unsigned int)records;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
