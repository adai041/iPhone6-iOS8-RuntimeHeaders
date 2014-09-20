/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiAwdlStateInfo : PBCodable <NSCopying> {
    unsigned long long _duration;
    unsigned int _count;
    struct { 
        unsigned int duration : 1; 
        unsigned int count : 1; 
    } _has;
}

@property bool hasCount;
@property unsigned int count;
@property bool hasDuration;
@property unsigned long long duration;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)hasDuration;
- (void)setHasDuration:(bool)arg1;
- (bool)hasCount;
- (void)setHasCount:(bool)arg1;
- (id)dictionaryRepresentation;
- (void)setCount:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (unsigned long long)duration;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)count;

@end