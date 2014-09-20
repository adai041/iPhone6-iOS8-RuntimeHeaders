/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@class NSURL, NSString;

@interface PLImageDataInfo : NSObject  {
    bool_deliveredPlaceholder;
    bool_canDownloadFromCloud;
    long long _deliveredFormat;
    NSURL *_URL;
    NSString *_sandboxExtensionToken;
    NSString *_UTI;
    long long _EXIFOrientation;
}

@property long long deliveredFormat;
@property bool deliveredPlaceholder;
@property bool canDownloadFromCloud;
@property(retain) NSURL * URL;
@property(retain) NSString * sandboxExtensionToken;
@property(retain) NSString * UTI;
@property long long EXIFOrientation;


- (void)setDeliveredPlaceholder:(bool)arg1;
- (bool)deliveredPlaceholder;
- (void)setEXIFOrientation:(long long)arg1;
- (void)setCanDownloadFromCloud:(bool)arg1;
- (void)setDeliveredFormat:(long long)arg1;
- (void)setUTI:(id)arg1;
- (id)UTI;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)dealloc;
- (void)setSandboxExtensionToken:(id)arg1;
- (id)sandboxExtensionToken;
- (long long)EXIFOrientation;
- (bool)canDownloadFromCloud;
- (long long)deliveredFormat;

@end
