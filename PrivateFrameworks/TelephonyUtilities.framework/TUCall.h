/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSString, NSData, IMAVChatParticipant;

@interface TUCall : NSObject <NSSecureCoding> {
    NSString *_displayName;
    NSString *_overrideName;
    NSString *_companyName;
    long long _displayNameBreakPoint;
    NSString *_abLabel;
    int _abUid;
    struct { 
        unsigned int imageType : 2; 
        unsigned int abUidIsValid : 1; 
        unsigned int dialAssisted : 1; 
        unsigned int dialedFromEmergencyUI : 1; 
        unsigned int isEmergencyCall : 1; 
        unsigned int isEmergencyCallIsValid : 1; 
        unsigned int joiningConference : 1; 
        unsigned int leavingConference : 1; 
    } _phoneCallFlags;
    bool_requestingHandoff;
    bool_endpointOnCurrentDevice;
    bool_wantsHoldMusic;
    bool_connected;
    bool_hasUpdatedAudio;
    bool_requiresAudioReinterruption;
    bool_allowsTTYSettingChanges;
    bool_connectingToRelay;
    int _disconnectedReason;
    int _faceTimeIDStatus;
    int _transitionStatus;
    NSString *_suggestedDisplayName;
    NSString *_uniqueProxyIdentifier;
    NSString *_sourceIdentifier;
    NSString *_isoCountryCode;
    long long _provisionalHoldStatus;
}

@property(copy) NSString * suggestedDisplayName;
@property int disconnectedReason;
@property(readonly) bool wasDeclined;
@property(readonly) int service;
@property(readonly) int supportedModelType;
@property(readonly) bool isVideo;
@property(readonly) int status;
@property int faceTimeIDStatus;
@property(readonly) bool statusIsProvisional;
@property(getter=isRequestingHandoff) bool requestingHandoff;
@property(getter=isHostedOnCurrentDevice,readonly) bool hostedOnCurrentDevice;
@property(getter=isEndpointOnCurrentDevice) bool endpointOnCurrentDevice;
@property(readonly) bool playsConnectedSound;
@property(getter=isVoicemail,readonly) bool voicemail;
@property bool isOnHold;
@property bool wantsHoldMusic;
@property(getter=isConnected) bool connected;
@property bool hasUpdatedAudio;
@property(getter=isOutgoing,readonly) bool outgoing;
@property(getter=isBlocked,readonly) bool blocked;
@property(readonly) double startTime;
@property(copy,readonly) NSString * destinationID;
@property(readonly) int callIdentifier;
@property(copy) NSString * uniqueProxyIdentifier;
@property(copy,readonly) NSString * callUUID;
@property(copy) NSString * sourceIdentifier;
@property(copy,readonly) NSString * callHistoryIdentifier;
@property(copy) NSString * displayName;
@property(copy,readonly) NSString * callerNameFromNetwork;
@property(copy) NSString * isoCountryCode;
@property(readonly) float localVolume;
@property(retain,readonly) NSData * localFrequency;
@property(retain,readonly) NSData * remoteFrequency;
@property long long provisionalHoldStatus;
@property(getter=isStatusFinal,readonly) bool statusFinal;
@property int transitionStatus;
@property bool requiresAudioReinterruption;
@property(readonly) bool shouldIgnoreStatusChange;
@property bool allowsTTYSettingChanges;
@property(getter=isConnectingToRelay) bool connectingToRelay;
@property(retain,readonly) NSString * conferenceIdentifier;
@property bool isSendingVideo;
@property(readonly) bool isActive;
@property(readonly) bool hasReceivedFirstFrame;
@property(retain,readonly) IMAVChatParticipant * remoteParticipant;
@property(readonly) unsigned int endedReason;
@property(readonly) int endedError;
@property(copy,readonly) NSString * errorAlertTitle;
@property(copy,readonly) NSString * errorAlertMessage;

+ (bool)supportsSecureCoding;

- (void)setConnected:(bool)arg1;
- (double)callDuration;
- (void)setConnectingToRelay:(bool)arg1;
- (bool)isConnectingToRelay;
- (void)setAllowsTTYSettingChanges:(bool)arg1;
- (void)setRequiresAudioReinterruption:(bool)arg1;
- (bool)requiresAudioReinterruption;
- (void)setHasUpdatedAudio:(bool)arg1;
- (bool)hasUpdatedAudio;
- (void)setRequestingHandoff:(bool)arg1;
- (bool)isRequestingHandoff;
- (id)suggestedDisplayName;
- (id)errorAlertMessage;
- (id)errorAlertTitle;
- (bool)hasSupport:(int)arg1;
- (id)contactImageDataWithFormat:(int)arg1;
- (bool)allowsTTYSettingChanges;
- (bool)statusIsProvisional;
- (void)setFaceTimeIDStatus:(int)arg1;
- (id)callDurationString;
- (int)causeCode;
- (bool)isEmergencyCall;
- (void)setWasDialedFromEmergencyUI:(bool)arg1;
- (bool)wasDialedFromEmergencyUI;
- (void)setWasDialAssisted:(bool)arg1;
- (bool)wasDialAssisted;
- (void)setOverrideName:(id)arg1;
- (id)multiLineDisplayName;
- (void)setEndpointOnCurrentDevice:(bool)arg1;
- (bool)wasDeclined;
- (void)disconnectWithReason:(int)arg1;
- (void)setIsOnHold:(bool)arg1;
- (void)setSuggestedDisplayName:(id)arg1;
- (int)transitionStatus;
- (int)abUID;
- (id)_displayNameWithSeparator:(id)arg1;
- (void)setWantsHoldMusic:(bool)arg1;
- (void)setDisconnectedReason:(int)arg1;
- (void)setProvisionalHoldStatus:(long long)arg1;
- (bool)isOnHold;
- (void)_loadCallDetails;
- (void)setTransitionStatus:(int)arg1;
- (void)setUniqueProxyIdentifier:(id)arg1;
- (void)_handleIdentityChange;
- (void)_handleManagesAudioInterruptionsChange;
- (void)_handleCallerIDChange;
- (void)_handleStatusChange;
- (bool)shouldIgnoreStatusChange;
- (long long)provisionalHoldStatus;
- (void)resetProvisionalHoldStatus;
- (id)displayFirstName;
- (bool)isEndpointOnCurrentDevice;
- (void)resetProvisionalStatuses;
- (void)_setPrimitiveDisconnectedReason:(int)arg1;
- (void)_setPrimitiveEndpointOnCurrentDevice:(bool)arg1;
- (void)_setPrimitiveWantsHoldMusic:(bool)arg1;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (void)unhold;
- (void)hold;
- (id)uniqueProxyIdentifier;
- (void)updateWithCall:(id)arg1;
- (bool)isVoicemail;
- (bool)isHostedOnCurrentDevice;
- (id)remoteFrequency;
- (id)conferenceIdentifier;
- (id)localFrequency;
- (float)localVolume;
- (bool)isTTY;
- (bool)playsConnectedSound;
- (bool)needsManualInCallSounds;
- (bool)managesAudioInterruptions;
- (int)faceTimeIDStatus;
- (id)totalDataUsed;
- (id)callHistoryIdentifier;
- (id)callUUID;
- (int)callIdentifier;
- (bool)isAlerting;
- (id)callerNameFromNetwork;
- (id)destinationID;
- (id)remoteParticipant;
- (void)leaveConference;
- (void)joinConference;
- (bool)isConferenced;
- (bool)shouldPlayDTMFTone;
- (bool)isStatusFinal;
- (void)inviteWithCallIdentifier:(int)arg1;
- (bool)setDownlinkMuted:(bool)arg1;
- (bool)isDownlinkMuted;
- (bool)setUplinkMuted:(bool)arg1;
- (bool)isUplinkMuted;
- (int)disconnectedReason;
- (void)answerWithSourceIdentifier:(id)arg1;
- (id)audioMode;
- (int)supportedModelType;
- (void)answer;
- (int)callStatus;
- (bool)isConnected;
- (id)sourceIdentifier;
- (bool)isMuted;
- (bool)hasReceivedFirstFrame;
- (void)setIsSendingVideo:(bool)arg1;
- (bool)isSendingVideo;
- (bool)wantsHoldMusic;
- (void)resetWantsHoldMusic;
- (int)endedError;
- (unsigned int)endedReason;
- (void)setSourceIdentifier:(id)arg1;
- (id)companyName;
- (int)service;
- (bool)isOutgoing;
- (id)audioCategory;
- (int)status;
- (bool)isVideo;
- (double)startTime;
- (void)disconnect;
- (id)displayName;
- (bool)isActive;
- (id)description;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (bool)setMuted:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (id)isoCountryCode;
- (id)localizedLabel;
- (bool)isBlocked;

@end