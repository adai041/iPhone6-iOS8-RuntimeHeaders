/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallEnded : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _backCameraCaptureDuration;
    unsigned int _callDuration;
    unsigned int _conferenceMiscError;
    unsigned int _connectDuration;
    unsigned int _connectionType;
    unsigned int _currentNatType;
    unsigned int _dataRate;
    unsigned int _diagnosticPingAvg;
    unsigned int _diagnosticPingMax;
    unsigned int _diagnosticPingMin;
    unsigned int _diagnosticPingPacketLoss;
    unsigned int _endedReason;
    unsigned int _frontCameraCaptureDuration;
    unsigned int _gameKitError;
    int _genericError;
    int _gksError;
    int _gksReturnCode;
    NSString *_guid;
    unsigned int _invitationServiceError;
    unsigned int _isAudioInterrupted;
    unsigned int _isCallUpgrade;
    unsigned int _isInitiator;
    unsigned int _isNetworkActive;
    unsigned int _isNetworkEnabled;
    unsigned int _isNetworkReachable;
    unsigned int _isVideo;
    unsigned int _isVideoInterrupted;
    int _linkQuality;
    unsigned int _localNetworkConnection;
    unsigned int _messageDeliveryError;
    unsigned int _networkCheckResult;
    unsigned int _onLockScreen;
    unsigned int _registrationError;
    unsigned int _relayConnectDuration;
    unsigned int _relayError;
    unsigned int _remoteNatType;
    unsigned int _remoteNetworkConnection;
    unsigned int _usesRelay;
    unsigned int _viceroyError;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int backCameraCaptureDuration : 1; 
        unsigned int callDuration : 1; 
        unsigned int conferenceMiscError : 1; 
        unsigned int connectDuration : 1; 
        unsigned int connectionType : 1; 
        unsigned int currentNatType : 1; 
        unsigned int dataRate : 1; 
        unsigned int diagnosticPingAvg : 1; 
        unsigned int diagnosticPingMax : 1; 
        unsigned int diagnosticPingMin : 1; 
        unsigned int diagnosticPingPacketLoss : 1; 
        unsigned int endedReason : 1; 
        unsigned int frontCameraCaptureDuration : 1; 
        unsigned int gameKitError : 1; 
        unsigned int genericError : 1; 
        unsigned int gksError : 1; 
        unsigned int gksReturnCode : 1; 
        unsigned int invitationServiceError : 1; 
        unsigned int isAudioInterrupted : 1; 
        unsigned int isCallUpgrade : 1; 
        unsigned int isInitiator : 1; 
        unsigned int isNetworkActive : 1; 
        unsigned int isNetworkEnabled : 1; 
        unsigned int isNetworkReachable : 1; 
        unsigned int isVideo : 1; 
        unsigned int isVideoInterrupted : 1; 
        unsigned int linkQuality : 1; 
        unsigned int localNetworkConnection : 1; 
        unsigned int messageDeliveryError : 1; 
        unsigned int networkCheckResult : 1; 
        unsigned int onLockScreen : 1; 
        unsigned int registrationError : 1; 
        unsigned int relayConnectDuration : 1; 
        unsigned int relayError : 1; 
        unsigned int remoteNatType : 1; 
        unsigned int remoteNetworkConnection : 1; 
        unsigned int usesRelay : 1; 
        unsigned int viceroyError : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasEndedReason;
@property unsigned int endedReason;
@property bool hasGenericError;
@property int genericError;
@property bool hasViceroyError;
@property unsigned int viceroyError;
@property bool hasGameKitError;
@property unsigned int gameKitError;
@property bool hasMessageDeliveryError;
@property unsigned int messageDeliveryError;
@property bool hasConferenceMiscError;
@property unsigned int conferenceMiscError;
@property bool hasRegistrationError;
@property unsigned int registrationError;
@property bool hasRelayError;
@property unsigned int relayError;
@property bool hasInvitationServiceError;
@property unsigned int invitationServiceError;
@property bool hasCallDuration;
@property unsigned int callDuration;
@property bool hasDiagnosticPingMin;
@property unsigned int diagnosticPingMin;
@property bool hasDiagnosticPingAvg;
@property unsigned int diagnosticPingAvg;
@property bool hasDiagnosticPingMax;
@property unsigned int diagnosticPingMax;
@property bool hasDiagnosticPingPacketLoss;
@property unsigned int diagnosticPingPacketLoss;
@property bool hasIsNetworkEnabled;
@property unsigned int isNetworkEnabled;
@property bool hasIsNetworkActive;
@property unsigned int isNetworkActive;
@property bool hasIsNetworkReachable;
@property unsigned int isNetworkReachable;
@property bool hasNetworkCheckResult;
@property unsigned int networkCheckResult;
@property bool hasFrontCameraCaptureDuration;
@property unsigned int frontCameraCaptureDuration;
@property bool hasBackCameraCaptureDuration;
@property unsigned int backCameraCaptureDuration;
@property bool hasDataRate;
@property unsigned int dataRate;
@property bool hasGksError;
@property int gksError;
@property bool hasConnectDuration;
@property unsigned int connectDuration;
@property bool hasRemoteNetworkConnection;
@property unsigned int remoteNetworkConnection;
@property bool hasLocalNetworkConnection;
@property unsigned int localNetworkConnection;
@property bool hasConnectionType;
@property unsigned int connectionType;
@property bool hasUsesRelay;
@property unsigned int usesRelay;
@property bool hasCurrentNatType;
@property unsigned int currentNatType;
@property bool hasRemoteNatType;
@property unsigned int remoteNatType;
@property bool hasRelayConnectDuration;
@property unsigned int relayConnectDuration;
@property bool hasIsInitiator;
@property unsigned int isInitiator;
@property bool hasIsVideoInterrupted;
@property unsigned int isVideoInterrupted;
@property bool hasIsAudioInterrupted;
@property unsigned int isAudioInterrupted;
@property bool hasIsCallUpgrade;
@property unsigned int isCallUpgrade;
@property bool hasLinkQuality;
@property int linkQuality;
@property bool hasGksReturnCode;
@property int gksReturnCode;
@property bool hasIsVideo;
@property unsigned int isVideo;
@property bool hasOnLockScreen;
@property unsigned int onLockScreen;


- (int)gksReturnCode;
- (unsigned int)isCallUpgrade;
- (unsigned int)isAudioInterrupted;
- (unsigned int)isVideoInterrupted;
- (unsigned int)relayConnectDuration;
- (unsigned int)remoteNatType;
- (unsigned int)currentNatType;
- (unsigned int)usesRelay;
- (unsigned int)localNetworkConnection;
- (unsigned int)remoteNetworkConnection;
- (unsigned int)connectDuration;
- (int)gksError;
- (unsigned int)backCameraCaptureDuration;
- (unsigned int)frontCameraCaptureDuration;
- (unsigned int)networkCheckResult;
- (unsigned int)isNetworkActive;
- (unsigned int)isNetworkEnabled;
- (unsigned int)diagnosticPingPacketLoss;
- (unsigned int)diagnosticPingMax;
- (unsigned int)diagnosticPingAvg;
- (unsigned int)diagnosticPingMin;
- (unsigned int)callDuration;
- (unsigned int)invitationServiceError;
- (unsigned int)relayError;
- (unsigned int)registrationError;
- (unsigned int)conferenceMiscError;
- (unsigned int)messageDeliveryError;
- (unsigned int)gameKitError;
- (unsigned int)viceroyError;
- (bool)hasGksReturnCode;
- (void)setHasGksReturnCode:(bool)arg1;
- (void)setGksReturnCode:(int)arg1;
- (bool)hasIsCallUpgrade;
- (void)setHasIsCallUpgrade:(bool)arg1;
- (void)setIsCallUpgrade:(unsigned int)arg1;
- (bool)hasIsAudioInterrupted;
- (void)setHasIsAudioInterrupted:(bool)arg1;
- (void)setIsAudioInterrupted:(unsigned int)arg1;
- (bool)hasIsVideoInterrupted;
- (void)setHasIsVideoInterrupted:(bool)arg1;
- (void)setIsVideoInterrupted:(unsigned int)arg1;
- (bool)hasIsInitiator;
- (void)setHasIsInitiator:(bool)arg1;
- (void)setIsInitiator:(unsigned int)arg1;
- (bool)hasRelayConnectDuration;
- (void)setHasRelayConnectDuration:(bool)arg1;
- (void)setRelayConnectDuration:(unsigned int)arg1;
- (bool)hasRemoteNatType;
- (void)setHasRemoteNatType:(bool)arg1;
- (void)setRemoteNatType:(unsigned int)arg1;
- (bool)hasCurrentNatType;
- (void)setHasCurrentNatType:(bool)arg1;
- (void)setCurrentNatType:(unsigned int)arg1;
- (bool)hasUsesRelay;
- (void)setHasUsesRelay:(bool)arg1;
- (void)setUsesRelay:(unsigned int)arg1;
- (bool)hasLocalNetworkConnection;
- (void)setHasLocalNetworkConnection:(bool)arg1;
- (void)setLocalNetworkConnection:(unsigned int)arg1;
- (bool)hasRemoteNetworkConnection;
- (void)setHasRemoteNetworkConnection:(bool)arg1;
- (void)setRemoteNetworkConnection:(unsigned int)arg1;
- (bool)hasConnectDuration;
- (void)setHasConnectDuration:(bool)arg1;
- (void)setConnectDuration:(unsigned int)arg1;
- (bool)hasGksError;
- (void)setHasGksError:(bool)arg1;
- (void)setGksError:(int)arg1;
- (bool)hasDataRate;
- (void)setHasDataRate:(bool)arg1;
- (bool)hasBackCameraCaptureDuration;
- (void)setHasBackCameraCaptureDuration:(bool)arg1;
- (void)setBackCameraCaptureDuration:(unsigned int)arg1;
- (bool)hasFrontCameraCaptureDuration;
- (void)setHasFrontCameraCaptureDuration:(bool)arg1;
- (void)setFrontCameraCaptureDuration:(unsigned int)arg1;
- (bool)hasNetworkCheckResult;
- (void)setHasNetworkCheckResult:(bool)arg1;
- (void)setNetworkCheckResult:(unsigned int)arg1;
- (bool)hasIsNetworkReachable;
- (void)setHasIsNetworkReachable:(bool)arg1;
- (void)setIsNetworkReachable:(unsigned int)arg1;
- (bool)hasIsNetworkActive;
- (void)setHasIsNetworkActive:(bool)arg1;
- (void)setIsNetworkActive:(unsigned int)arg1;
- (bool)hasIsNetworkEnabled;
- (void)setHasIsNetworkEnabled:(bool)arg1;
- (void)setIsNetworkEnabled:(unsigned int)arg1;
- (bool)hasDiagnosticPingPacketLoss;
- (void)setHasDiagnosticPingPacketLoss:(bool)arg1;
- (void)setDiagnosticPingPacketLoss:(unsigned int)arg1;
- (bool)hasDiagnosticPingMax;
- (void)setHasDiagnosticPingMax:(bool)arg1;
- (void)setDiagnosticPingMax:(unsigned int)arg1;
- (bool)hasDiagnosticPingAvg;
- (void)setHasDiagnosticPingAvg:(bool)arg1;
- (void)setDiagnosticPingAvg:(unsigned int)arg1;
- (bool)hasDiagnosticPingMin;
- (void)setHasDiagnosticPingMin:(bool)arg1;
- (void)setDiagnosticPingMin:(unsigned int)arg1;
- (bool)hasCallDuration;
- (void)setHasCallDuration:(bool)arg1;
- (void)setCallDuration:(unsigned int)arg1;
- (bool)hasInvitationServiceError;
- (void)setHasInvitationServiceError:(bool)arg1;
- (void)setInvitationServiceError:(unsigned int)arg1;
- (bool)hasRelayError;
- (void)setHasRelayError:(bool)arg1;
- (void)setRelayError:(unsigned int)arg1;
- (bool)hasRegistrationError;
- (void)setHasRegistrationError:(bool)arg1;
- (void)setRegistrationError:(unsigned int)arg1;
- (bool)hasConferenceMiscError;
- (void)setHasConferenceMiscError:(bool)arg1;
- (void)setConferenceMiscError:(unsigned int)arg1;
- (bool)hasMessageDeliveryError;
- (void)setHasMessageDeliveryError:(bool)arg1;
- (void)setMessageDeliveryError:(unsigned int)arg1;
- (bool)hasGameKitError;
- (void)setHasGameKitError:(bool)arg1;
- (void)setGameKitError:(unsigned int)arg1;
- (bool)hasViceroyError;
- (void)setHasViceroyError:(bool)arg1;
- (void)setViceroyError:(unsigned int)arg1;
- (bool)hasEndedReason;
- (void)setHasEndedReason:(bool)arg1;
- (void)setEndedReason:(unsigned int)arg1;
- (int)genericError;
- (bool)hasGenericError;
- (void)setHasGenericError:(bool)arg1;
- (void)setGenericError:(int)arg1;
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
- (bool)hasConnectionType;
- (void)setHasConnectionType:(bool)arg1;
- (bool)hasGuid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)guid;
- (void)setIsVideo:(unsigned int)arg1;
- (unsigned int)isNetworkReachable;
- (void)setDataRate:(unsigned int)arg1;
- (unsigned int)dataRate;
- (unsigned int)endedReason;
- (unsigned int)isInitiator;
- (void)setHasTimestamp:(bool)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (unsigned int)connectionType;
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
