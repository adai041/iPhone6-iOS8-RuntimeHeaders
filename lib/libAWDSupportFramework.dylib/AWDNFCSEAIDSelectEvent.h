/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDNFCSEAIDSelectEvent : PBCodable <NSCopying> {
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    NSData *_aid;
    NSData *_uuidReference;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) bool hasAid;
@property(retain) NSData * aid;
@property(readonly) bool hasUuidReference;
@property(retain) NSData * uuidReference;
@property bool hasTimeDeltaFromReference;
@property unsigned long long timeDeltaFromReference;


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
- (void)mergeFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end