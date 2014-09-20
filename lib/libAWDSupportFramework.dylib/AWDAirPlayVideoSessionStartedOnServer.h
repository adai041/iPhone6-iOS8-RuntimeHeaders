/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayVideoSessionStartedOnServer : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _audioOnly;
    unsigned int _clientAuthMs;
    unsigned int _clientBonjourMs;
    unsigned int _clientConnectMs;
    unsigned int _clientInfoMs;
    NSString *_clientModel;
    unsigned int _clientPostAuthMs;
    unsigned int _clientSecureConnectionMs;
    NSString *_clientVersion;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    unsigned int _type;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioOnly : 1; 
        unsigned int clientAuthMs : 1; 
        unsigned int clientBonjourMs : 1; 
        unsigned int clientConnectMs : 1; 
        unsigned int clientInfoMs : 1; 
        unsigned int clientPostAuthMs : 1; 
        unsigned int clientSecureConnectionMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int type : 1; 
    } _has;
}

@property(readonly) bool hasSessionUUID;
@property(retain) NSString * sessionUUID;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasStatus;
@property int status;
@property bool hasTransportType;
@property unsigned int transportType;
@property bool hasType;
@property unsigned int type;
@property(readonly) bool hasClientModel;
@property(retain) NSString * clientModel;
@property(readonly) bool hasClientVersion;
@property(retain) NSString * clientVersion;
@property bool hasAudioOnly;
@property unsigned int audioOnly;
@property bool hasClientBonjourMs;
@property unsigned int clientBonjourMs;
@property bool hasClientConnectMs;
@property unsigned int clientConnectMs;
@property bool hasClientInfoMs;
@property unsigned int clientInfoMs;
@property bool hasClientSecureConnectionMs;
@property unsigned int clientSecureConnectionMs;
@property bool hasClientAuthMs;
@property unsigned int clientAuthMs;
@property bool hasClientPostAuthMs;
@property unsigned int clientPostAuthMs;


- (unsigned int)clientPostAuthMs;
- (unsigned int)clientAuthMs;
- (unsigned int)clientSecureConnectionMs;
- (unsigned int)clientInfoMs;
- (unsigned int)clientConnectMs;
- (unsigned int)clientBonjourMs;
- (unsigned int)audioOnly;
- (bool)hasClientPostAuthMs;
- (void)setHasClientPostAuthMs:(bool)arg1;
- (void)setClientPostAuthMs:(unsigned int)arg1;
- (bool)hasClientAuthMs;
- (void)setHasClientAuthMs:(bool)arg1;
- (void)setClientAuthMs:(unsigned int)arg1;
- (bool)hasClientSecureConnectionMs;
- (void)setHasClientSecureConnectionMs:(bool)arg1;
- (void)setClientSecureConnectionMs:(unsigned int)arg1;
- (bool)hasClientInfoMs;
- (void)setHasClientInfoMs:(bool)arg1;
- (void)setClientInfoMs:(unsigned int)arg1;
- (bool)hasClientConnectMs;
- (void)setHasClientConnectMs:(bool)arg1;
- (void)setClientConnectMs:(unsigned int)arg1;
- (bool)hasClientBonjourMs;
- (void)setHasClientBonjourMs:(bool)arg1;
- (void)setClientBonjourMs:(unsigned int)arg1;
- (bool)hasAudioOnly;
- (void)setHasAudioOnly:(bool)arg1;
- (void)setAudioOnly:(unsigned int)arg1;
- (id)clientModel;
- (id)sessionUUID;
- (bool)hasClientVersion;
- (bool)hasClientModel;
- (bool)hasSessionUUID;
- (void)setClientModel:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (unsigned int)transportType;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (id)clientVersion;
- (bool)hasType;
- (void)setHasType:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTransportType;
- (bool)hasTimestamp;
- (bool)hasStatus;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)type;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)setTransportType:(unsigned int)arg1;

@end