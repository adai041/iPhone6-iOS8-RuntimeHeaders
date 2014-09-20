/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBBNonDataMetrics : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _aPWakeCacheFlushCnt;
    unsigned int _idlePowerMicroWatt;
    unsigned int _oOSPowerMicroWatt;
    unsigned int _registrationPowerMicroWatt;
    unsigned int _scanPowerMicroWatt;
    unsigned int _voicePowerMicroWatt;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int aPWakeCacheFlushCnt : 1; 
        unsigned int idlePowerMicroWatt : 1; 
        unsigned int oOSPowerMicroWatt : 1; 
        unsigned int registrationPowerMicroWatt : 1; 
        unsigned int scanPowerMicroWatt : 1; 
        unsigned int voicePowerMicroWatt : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasScanPowerMicroWatt;
@property unsigned int scanPowerMicroWatt;
@property bool hasOOSPowerMicroWatt;
@property unsigned int oOSPowerMicroWatt;
@property bool hasRegistrationPowerMicroWatt;
@property unsigned int registrationPowerMicroWatt;
@property bool hasIdlePowerMicroWatt;
@property unsigned int idlePowerMicroWatt;
@property bool hasVoicePowerMicroWatt;
@property unsigned int voicePowerMicroWatt;
@property bool hasAPWakeCacheFlushCnt;
@property unsigned int aPWakeCacheFlushCnt;


- (unsigned int)aPWakeCacheFlushCnt;
- (unsigned int)voicePowerMicroWatt;
- (unsigned int)idlePowerMicroWatt;
- (unsigned int)registrationPowerMicroWatt;
- (unsigned int)oOSPowerMicroWatt;
- (unsigned int)scanPowerMicroWatt;
- (bool)hasAPWakeCacheFlushCnt;
- (void)setHasAPWakeCacheFlushCnt:(bool)arg1;
- (void)setAPWakeCacheFlushCnt:(unsigned int)arg1;
- (bool)hasVoicePowerMicroWatt;
- (void)setHasVoicePowerMicroWatt:(bool)arg1;
- (void)setVoicePowerMicroWatt:(unsigned int)arg1;
- (bool)hasIdlePowerMicroWatt;
- (void)setHasIdlePowerMicroWatt:(bool)arg1;
- (void)setIdlePowerMicroWatt:(unsigned int)arg1;
- (bool)hasRegistrationPowerMicroWatt;
- (void)setHasRegistrationPowerMicroWatt:(bool)arg1;
- (void)setRegistrationPowerMicroWatt:(unsigned int)arg1;
- (bool)hasOOSPowerMicroWatt;
- (void)setHasOOSPowerMicroWatt:(bool)arg1;
- (void)setOOSPowerMicroWatt:(unsigned int)arg1;
- (bool)hasScanPowerMicroWatt;
- (void)setHasScanPowerMicroWatt:(bool)arg1;
- (void)setScanPowerMicroWatt:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
