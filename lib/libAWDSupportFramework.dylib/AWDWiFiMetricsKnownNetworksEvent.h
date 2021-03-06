/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDWiFiMetricsKnownNetworksEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _eventType;
    unsigned int _networkSecurity;
    unsigned int _networkTypeBitMap;
    NSData *_oui;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int eventType : 1; 
        unsigned int networkSecurity : 1; 
        unsigned int networkTypeBitMap : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasEventType;
@property unsigned int eventType;
@property bool hasNetworkTypeBitMap;
@property unsigned int networkTypeBitMap;
@property bool hasNetworkSecurity;
@property unsigned int networkSecurity;
@property(readonly) bool hasOui;
@property(retain) NSData * oui;


- (id)oui;
- (unsigned int)networkSecurity;
- (unsigned int)networkTypeBitMap;
- (bool)hasOui;
- (bool)hasNetworkSecurity;
- (void)setHasNetworkSecurity:(bool)arg1;
- (void)setNetworkSecurity:(unsigned int)arg1;
- (bool)hasNetworkTypeBitMap;
- (void)setHasNetworkTypeBitMap:(bool)arg1;
- (void)setNetworkTypeBitMap:(unsigned int)arg1;
- (bool)hasEventType;
- (void)setHasEventType:(bool)arg1;
- (void)setOui:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setEventType:(unsigned int)arg1;
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
- (unsigned int)eventType;

@end
