/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayAudioSessionEndedOnClient : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _futileRetransmits;
    int _reason;
    unsigned int _retransmits;
    NSString *_sessionUUID;
    unsigned int _slowKeepAlives;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int futileRetransmits : 1; 
        unsigned int reason : 1; 
        unsigned int retransmits : 1; 
        unsigned int slowKeepAlives : 1; 
    } _has;
}

@property(readonly) bool hasSessionUUID;
@property(retain) NSString * sessionUUID;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasReason;
@property int reason;
@property bool hasDuration;
@property unsigned int duration;
@property bool hasSlowKeepAlives;
@property unsigned int slowKeepAlives;
@property bool hasRetransmits;
@property unsigned int retransmits;
@property bool hasFutileRetransmits;
@property unsigned int futileRetransmits;


- (unsigned int)futileRetransmits;
- (unsigned int)retransmits;
- (unsigned int)slowKeepAlives;
- (bool)hasFutileRetransmits;
- (void)setHasFutileRetransmits:(bool)arg1;
- (void)setFutileRetransmits:(unsigned int)arg1;
- (bool)hasRetransmits;
- (void)setHasRetransmits:(bool)arg1;
- (void)setRetransmits:(unsigned int)arg1;
- (bool)hasSlowKeepAlives;
- (void)setHasSlowKeepAlives:(bool)arg1;
- (void)setSlowKeepAlives:(unsigned int)arg1;
- (bool)hasReason;
- (void)setHasReason:(bool)arg1;
- (id)sessionUUID;
- (bool)hasSessionUUID;
- (void)setSessionUUID:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setReason:(int)arg1;
- (bool)hasDuration;
- (void)setHasDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)reason;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setDuration:(unsigned int)arg1;
- (unsigned int)duration;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
