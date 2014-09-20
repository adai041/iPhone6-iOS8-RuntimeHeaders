/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayScreenSessionEndedOnClient : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _avgBitrate;
    unsigned int _avgEstimatedBandwidth;
    unsigned int _avgUsedBandwidth;
    unsigned int _clearScreens;
    unsigned int _configChanges;
    unsigned int _cpuAvg;
    unsigned int _duration;
    unsigned int _forcedRefreshes;
    unsigned int _framesSent;
    int _reason;
    unsigned int _resumes;
    unsigned int _retransmitAvg;
    unsigned int _rttAvg;
    NSString *_sessionUUID;
    unsigned int _suspends;
    unsigned int _unclearScreens;
    unsigned int _wifiChannel;
    int _wifiRSSI;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int avgBitrate : 1; 
        unsigned int avgEstimatedBandwidth : 1; 
        unsigned int avgUsedBandwidth : 1; 
        unsigned int clearScreens : 1; 
        unsigned int configChanges : 1; 
        unsigned int cpuAvg : 1; 
        unsigned int duration : 1; 
        unsigned int forcedRefreshes : 1; 
        unsigned int framesSent : 1; 
        unsigned int reason : 1; 
        unsigned int resumes : 1; 
        unsigned int retransmitAvg : 1; 
        unsigned int rttAvg : 1; 
        unsigned int suspends : 1; 
        unsigned int unclearScreens : 1; 
        unsigned int wifiChannel : 1; 
        unsigned int wifiRSSI : 1; 
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
@property bool hasFramesSent;
@property unsigned int framesSent;
@property bool hasConfigChanges;
@property unsigned int configChanges;
@property bool hasClearScreens;
@property unsigned int clearScreens;
@property bool hasUnclearScreens;
@property unsigned int unclearScreens;
@property bool hasSuspends;
@property unsigned int suspends;
@property bool hasResumes;
@property unsigned int resumes;
@property bool hasForcedRefreshes;
@property unsigned int forcedRefreshes;
@property bool hasAvgEstimatedBandwidth;
@property unsigned int avgEstimatedBandwidth;
@property bool hasAvgUsedBandwidth;
@property unsigned int avgUsedBandwidth;
@property bool hasAvgBitrate;
@property unsigned int avgBitrate;
@property bool hasRetransmitAvg;
@property unsigned int retransmitAvg;
@property bool hasRttAvg;
@property unsigned int rttAvg;
@property bool hasCpuAvg;
@property unsigned int cpuAvg;
@property bool hasWifiRSSI;
@property int wifiRSSI;
@property bool hasWifiChannel;
@property unsigned int wifiChannel;


- (unsigned int)wifiChannel;
- (int)wifiRSSI;
- (unsigned int)cpuAvg;
- (unsigned int)rttAvg;
- (unsigned int)retransmitAvg;
- (unsigned int)avgBitrate;
- (unsigned int)avgUsedBandwidth;
- (unsigned int)avgEstimatedBandwidth;
- (unsigned int)framesSent;
- (bool)hasWifiChannel;
- (void)setHasWifiChannel:(bool)arg1;
- (void)setWifiChannel:(unsigned int)arg1;
- (bool)hasWifiRSSI;
- (void)setHasWifiRSSI:(bool)arg1;
- (void)setWifiRSSI:(int)arg1;
- (bool)hasCpuAvg;
- (void)setHasCpuAvg:(bool)arg1;
- (void)setCpuAvg:(unsigned int)arg1;
- (bool)hasRttAvg;
- (void)setHasRttAvg:(bool)arg1;
- (bool)hasRetransmitAvg;
- (void)setHasRetransmitAvg:(bool)arg1;
- (void)setRetransmitAvg:(unsigned int)arg1;
- (bool)hasAvgBitrate;
- (void)setHasAvgBitrate:(bool)arg1;
- (void)setAvgBitrate:(unsigned int)arg1;
- (bool)hasAvgUsedBandwidth;
- (void)setHasAvgUsedBandwidth:(bool)arg1;
- (void)setAvgUsedBandwidth:(unsigned int)arg1;
- (bool)hasAvgEstimatedBandwidth;
- (void)setHasAvgEstimatedBandwidth:(bool)arg1;
- (void)setAvgEstimatedBandwidth:(unsigned int)arg1;
- (bool)hasFramesSent;
- (void)setHasFramesSent:(bool)arg1;
- (void)setFramesSent:(unsigned int)arg1;
- (unsigned int)forcedRefreshes;
- (unsigned int)resumes;
- (unsigned int)suspends;
- (unsigned int)unclearScreens;
- (unsigned int)clearScreens;
- (unsigned int)configChanges;
- (bool)hasForcedRefreshes;
- (void)setHasForcedRefreshes:(bool)arg1;
- (void)setForcedRefreshes:(unsigned int)arg1;
- (bool)hasResumes;
- (void)setHasResumes:(bool)arg1;
- (void)setResumes:(unsigned int)arg1;
- (bool)hasSuspends;
- (void)setHasSuspends:(bool)arg1;
- (void)setSuspends:(unsigned int)arg1;
- (bool)hasUnclearScreens;
- (void)setHasUnclearScreens:(bool)arg1;
- (void)setUnclearScreens:(unsigned int)arg1;
- (bool)hasClearScreens;
- (void)setHasClearScreens:(bool)arg1;
- (void)setClearScreens:(unsigned int)arg1;
- (bool)hasConfigChanges;
- (void)setHasConfigChanges:(bool)arg1;
- (void)setConfigChanges:(unsigned int)arg1;
- (bool)hasReason;
- (void)setHasReason:(bool)arg1;
- (id)sessionUUID;
- (bool)hasSessionUUID;
- (void)setSessionUUID:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setRttAvg:(unsigned int)arg1;
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
