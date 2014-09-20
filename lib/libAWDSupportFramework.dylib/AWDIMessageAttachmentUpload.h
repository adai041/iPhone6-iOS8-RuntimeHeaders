/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDIMessageAttachmentUpload : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _attachmentSize;
    unsigned int _connectionType;
    int _fzError;
    int _genericError;
    NSString *_guid;
    int _linkQuality;
    unsigned int _messageError;
    unsigned int _tokenError;
    unsigned int _uploadDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int attachmentSize : 1; 
        unsigned int connectionType : 1; 
        unsigned int fzError : 1; 
        unsigned int genericError : 1; 
        unsigned int linkQuality : 1; 
        unsigned int messageError : 1; 
        unsigned int tokenError : 1; 
        unsigned int uploadDuration : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasFzError;
@property int fzError;
@property bool hasMessageError;
@property unsigned int messageError;
@property bool hasTokenError;
@property unsigned int tokenError;
@property bool hasGenericError;
@property int genericError;
@property bool hasUploadDuration;
@property unsigned int uploadDuration;
@property bool hasLinkQuality;
@property int linkQuality;
@property bool hasConnectionType;
@property unsigned int connectionType;
@property bool hasAttachmentSize;
@property unsigned int attachmentSize;


- (unsigned int)uploadDuration;
- (bool)hasUploadDuration;
- (void)setHasUploadDuration:(bool)arg1;
- (void)setUploadDuration:(unsigned int)arg1;
- (unsigned int)attachmentSize;
- (int)genericError;
- (unsigned int)tokenError;
- (unsigned int)messageError;
- (int)fzError;
- (bool)hasAttachmentSize;
- (void)setHasAttachmentSize:(bool)arg1;
- (void)setAttachmentSize:(unsigned int)arg1;
- (bool)hasGenericError;
- (void)setHasGenericError:(bool)arg1;
- (void)setGenericError:(int)arg1;
- (bool)hasTokenError;
- (void)setHasTokenError:(bool)arg1;
- (void)setTokenError:(unsigned int)arg1;
- (bool)hasMessageError;
- (void)setHasMessageError:(bool)arg1;
- (void)setMessageError:(unsigned int)arg1;
- (bool)hasFzError;
- (void)setHasFzError:(bool)arg1;
- (void)setFzError:(int)arg1;
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
- (void)setHasTimestamp:(bool)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (unsigned int)connectionType;
- (bool)hasTimestamp;
- (void)setGuid:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
