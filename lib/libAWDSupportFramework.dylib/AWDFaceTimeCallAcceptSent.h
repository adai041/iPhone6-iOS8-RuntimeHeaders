/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallAcceptSent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    int _errorCode;
    NSString *_guid;
    unsigned int _isVideo;
    unsigned int _onLockScreen;
    unsigned int _sendDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int isVideo : 1; 
        unsigned int onLockScreen : 1; 
        unsigned int sendDuration : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasErrorCode;
@property int errorCode;
@property bool hasSendDuration;
@property unsigned int sendDuration;
@property bool hasIsVideo;
@property unsigned int isVideo;
@property bool hasOnLockScreen;
@property unsigned int onLockScreen;


- (unsigned int)onLockScreen;
- (bool)hasOnLockScreen;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (bool)hasIsVideo;
- (void)setHasIsVideo:(bool)arg1;
- (unsigned int)sendDuration;
- (bool)hasSendDuration;
- (void)setHasSendDuration:(bool)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (bool)hasGuid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)guid;
- (void)setIsVideo:(unsigned int)arg1;
- (bool)hasErrorCode;
- (void)setHasErrorCode:(bool)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (int)errorCode;
- (bool)hasTimestamp;
- (void)setGuid:(id)arg1;
- (unsigned int)isVideo;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
