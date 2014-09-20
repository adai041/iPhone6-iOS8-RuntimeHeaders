/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDNetworkUsage : PBCodable <NSCopying> {
    unsigned long long _cellIn;
    unsigned long long _cellOut;
    unsigned long long _wifiIn;
    unsigned long long _wifiOut;
    NSString *_bundleName;
    unsigned int _numConnections;
    struct { 
        unsigned int cellIn : 1; 
        unsigned int cellOut : 1; 
        unsigned int wifiIn : 1; 
        unsigned int wifiOut : 1; 
        unsigned int numConnections : 1; 
    } _has;
}

@property(readonly) bool hasBundleName;
@property(retain) NSString * bundleName;
@property bool hasWifiIn;
@property unsigned long long wifiIn;
@property bool hasWifiOut;
@property unsigned long long wifiOut;
@property bool hasCellIn;
@property unsigned long long cellIn;
@property bool hasCellOut;
@property unsigned long long cellOut;
@property bool hasNumConnections;
@property unsigned int numConnections;


- (unsigned int)numConnections;
- (bool)hasNumConnections;
- (void)setHasNumConnections:(bool)arg1;
- (bool)hasCellOut;
- (void)setHasCellOut:(bool)arg1;
- (bool)hasCellIn;
- (void)setHasCellIn:(bool)arg1;
- (bool)hasWifiOut;
- (void)setHasWifiOut:(bool)arg1;
- (bool)hasWifiIn;
- (void)setHasWifiIn:(bool)arg1;
- (bool)hasBundleName;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)bundleName;
- (void)setNumConnections:(unsigned int)arg1;
- (void)setCellOut:(unsigned long long)arg1;
- (void)setCellIn:(unsigned long long)arg1;
- (void)setWifiOut:(unsigned long long)arg1;
- (void)setWifiIn:(unsigned long long)arg1;
- (void)setBundleName:(id)arg1;
- (unsigned long long)wifiOut;
- (unsigned long long)wifiIn;
- (unsigned long long)cellOut;
- (unsigned long long)cellIn;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
