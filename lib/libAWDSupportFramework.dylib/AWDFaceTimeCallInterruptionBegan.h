/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallInterruptionBegan : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSString *_guid;
    unsigned int _isAudioInterrupted;
    unsigned int _isVideo;
    unsigned int _isVideoInterrupted;
    int _linkQuality;
    unsigned int _onLockScreen;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isAudioInterrupted : 1; 
        unsigned int isVideo : 1; 
        unsigned int isVideoInterrupted : 1; 
        unsigned int linkQuality : 1; 
        unsigned int onLockScreen : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasIsVideoInterrupted;
@property unsigned int isVideoInterrupted;
@property bool hasIsAudioInterrupted;
@property unsigned int isAudioInterrupted;
@property bool hasLinkQuality;
@property int linkQuality;
@property bool hasIsVideo;
@property unsigned int isVideo;
@property bool hasOnLockScreen;
@property unsigned int onLockScreen;


- (unsigned int)isAudioInterrupted;
- (unsigned int)isVideoInterrupted;
- (bool)hasIsAudioInterrupted;
- (void)setHasIsAudioInterrupted:(bool)arg1;
- (void)setIsAudioInterrupted:(unsigned int)arg1;
- (bool)hasIsVideoInterrupted;
- (void)setHasIsVideoInterrupted:(bool)arg1;
- (void)setIsVideoInterrupted:(unsigned int)arg1;
- (unsigned int)onLockScreen;
- (bool)hasOnLockScreen;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (bool)hasIsVideo;
- (void)setHasIsVideo:(bool)arg1;
- (int)linkQuality;
- (bool)hasLinkQuality;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (bool)hasGuid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)guid;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setHasTimestamp:(bool)arg1;
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
