/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerApMetrics : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _apAwakeDuration;
    unsigned int _cpuPowerMicroWatt;
    unsigned int _dramPowerMicroWatt;
    unsigned int _gpuPowerMicroWatt;
    unsigned int _socPowerMicroWatt;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int apAwakeDuration : 1; 
        unsigned int cpuPowerMicroWatt : 1; 
        unsigned int dramPowerMicroWatt : 1; 
        unsigned int gpuPowerMicroWatt : 1; 
        unsigned int socPowerMicroWatt : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasCpuPowerMicroWatt;
@property unsigned int cpuPowerMicroWatt;
@property bool hasSocPowerMicroWatt;
@property unsigned int socPowerMicroWatt;
@property bool hasGpuPowerMicroWatt;
@property unsigned int gpuPowerMicroWatt;
@property bool hasDramPowerMicroWatt;
@property unsigned int dramPowerMicroWatt;
@property bool hasApAwakeDuration;
@property unsigned int apAwakeDuration;


- (unsigned int)apAwakeDuration;
- (unsigned int)dramPowerMicroWatt;
- (unsigned int)gpuPowerMicroWatt;
- (unsigned int)socPowerMicroWatt;
- (unsigned int)cpuPowerMicroWatt;
- (bool)hasApAwakeDuration;
- (void)setHasApAwakeDuration:(bool)arg1;
- (bool)hasDramPowerMicroWatt;
- (void)setHasDramPowerMicroWatt:(bool)arg1;
- (bool)hasGpuPowerMicroWatt;
- (void)setHasGpuPowerMicroWatt:(bool)arg1;
- (bool)hasSocPowerMicroWatt;
- (void)setHasSocPowerMicroWatt:(bool)arg1;
- (bool)hasCpuPowerMicroWatt;
- (void)setHasCpuPowerMicroWatt:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setApAwakeDuration:(unsigned int)arg1;
- (void)setDramPowerMicroWatt:(unsigned int)arg1;
- (void)setGpuPowerMicroWatt:(unsigned int)arg1;
- (void)setCpuPowerMicroWatt:(unsigned int)arg1;
- (void)setSocPowerMicroWatt:(unsigned int)arg1;
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
