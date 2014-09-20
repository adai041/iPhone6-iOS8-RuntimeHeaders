/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDWiProxLeRemoveServiceRequest : PBRequest <NSCopying> {
    unsigned long long _timestamp;
    NSString *_serviceUUID;
    NSString *_sessionId;
    struct { 
        unsigned int timestamp : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) bool hasSessionId;
@property(retain) NSString * sessionId;
@property(readonly) bool hasServiceUUID;
@property(retain) NSString * serviceUUID;


- (id)serviceUUID;
- (bool)hasServiceUUID;
- (void)setServiceUUID:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setSessionId:(id)arg1;
- (id)sessionId;
- (bool)hasSessionId;
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
