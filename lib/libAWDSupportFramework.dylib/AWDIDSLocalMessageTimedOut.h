/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSLocalMessageTimedOut : PBCodable <NSCopying> {
    long long _expirationDate;
    unsigned long long _timestamp;
    struct { 
        unsigned int expirationDate : 1; 
        unsigned int timestamp : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasExpirationDate;
@property long long expirationDate;


- (bool)hasExpirationDate;
- (void)setHasExpirationDate:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setExpirationDate:(long long)arg1;
- (long long)expirationDate;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
