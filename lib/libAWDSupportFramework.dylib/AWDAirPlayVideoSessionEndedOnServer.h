/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayVideoSessionEndedOnServer : PBCodable <NSCopying> {
    double _bandwidthMax;
    double _bandwidthMean;
    double _bandwidthStdDev;
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _fastFowards;
    unsigned int _localFairPlayCount;
    unsigned int _localNonFairPlayCount;
    unsigned int _pauses;
    unsigned int _readyToPlayMs;
    int _reason;
    unsigned int _remoteFairPlayCount;
    unsigned int _remoteNonFairPlayCount;
    unsigned int _rewinds;
    NSString *_sessionUUID;
    unsigned int _stallCount;
    struct { 
        unsigned int bandwidthMax : 1; 
        unsigned int bandwidthMean : 1; 
        unsigned int bandwidthStdDev : 1; 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int fastFowards : 1; 
        unsigned int localFairPlayCount : 1; 
        unsigned int localNonFairPlayCount : 1; 
        unsigned int pauses : 1; 
        unsigned int readyToPlayMs : 1; 
        unsigned int reason : 1; 
        unsigned int remoteFairPlayCount : 1; 
        unsigned int remoteNonFairPlayCount : 1; 
        unsigned int rewinds : 1; 
        unsigned int stallCount : 1; 
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
@property bool hasPauses;
@property unsigned int pauses;
@property bool hasRewinds;
@property unsigned int rewinds;
@property bool hasFastFowards;
@property unsigned int fastFowards;
@property bool hasReadyToPlayMs;
@property unsigned int readyToPlayMs;
@property bool hasStallCount;
@property unsigned int stallCount;
@property bool hasBandwidthStdDev;
@property double bandwidthStdDev;
@property bool hasBandwidthMean;
@property double bandwidthMean;
@property bool hasBandwidthMax;
@property double bandwidthMax;
@property bool hasLocalFairPlayCount;
@property unsigned int localFairPlayCount;
@property bool hasLocalNonFairPlayCount;
@property unsigned int localNonFairPlayCount;
@property bool hasRemoteFairPlayCount;
@property unsigned int remoteFairPlayCount;
@property bool hasRemoteNonFairPlayCount;
@property unsigned int remoteNonFairPlayCount;


- (unsigned int)fastFowards;
- (unsigned int)rewinds;
- (bool)hasFastFowards;
- (void)setHasFastFowards:(bool)arg1;
- (void)setFastFowards:(unsigned int)arg1;
- (bool)hasRewinds;
- (void)setHasRewinds:(bool)arg1;
- (void)setRewinds:(unsigned int)arg1;
- (unsigned int)remoteNonFairPlayCount;
- (unsigned int)remoteFairPlayCount;
- (unsigned int)localNonFairPlayCount;
- (unsigned int)localFairPlayCount;
- (double)bandwidthMax;
- (double)bandwidthMean;
- (double)bandwidthStdDev;
- (unsigned int)stallCount;
- (unsigned int)readyToPlayMs;
- (bool)hasRemoteNonFairPlayCount;
- (void)setHasRemoteNonFairPlayCount:(bool)arg1;
- (void)setRemoteNonFairPlayCount:(unsigned int)arg1;
- (bool)hasRemoteFairPlayCount;
- (void)setHasRemoteFairPlayCount:(bool)arg1;
- (void)setRemoteFairPlayCount:(unsigned int)arg1;
- (bool)hasLocalNonFairPlayCount;
- (void)setHasLocalNonFairPlayCount:(bool)arg1;
- (void)setLocalNonFairPlayCount:(unsigned int)arg1;
- (bool)hasLocalFairPlayCount;
- (void)setHasLocalFairPlayCount:(bool)arg1;
- (void)setLocalFairPlayCount:(unsigned int)arg1;
- (bool)hasBandwidthMax;
- (void)setHasBandwidthMax:(bool)arg1;
- (void)setBandwidthMax:(double)arg1;
- (bool)hasBandwidthMean;
- (void)setHasBandwidthMean:(bool)arg1;
- (void)setBandwidthMean:(double)arg1;
- (bool)hasBandwidthStdDev;
- (void)setHasBandwidthStdDev:(bool)arg1;
- (void)setBandwidthStdDev:(double)arg1;
- (bool)hasStallCount;
- (void)setHasStallCount:(bool)arg1;
- (void)setStallCount:(unsigned int)arg1;
- (bool)hasReadyToPlayMs;
- (void)setHasReadyToPlayMs:(bool)arg1;
- (void)setReadyToPlayMs:(unsigned int)arg1;
- (unsigned int)pauses;
- (bool)hasPauses;
- (void)setHasPauses:(bool)arg1;
- (void)setPauses:(unsigned int)arg1;
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
