/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface _UIWebViewSettings : NSObject <NSCopying> {
    bool_allowsInlineMediaPlayback;
    bool_mediaPlaybackRequiresUserAction;
    bool_mediaPlaybackAllowsAirPlay;
    bool_suppressesIncrementalRendering;
    unsigned long long _dataDetectorTypes;
    NSString *_customUserAgent;
}

@property unsigned long long dataDetectorTypes;
@property bool allowsInlineMediaPlayback;
@property bool mediaPlaybackRequiresUserAction;
@property bool mediaPlaybackAllowsAirPlay;
@property bool suppressesIncrementalRendering;
@property(copy) NSString * customUserAgent;

+ (id)defaultSettings;

- (id)_encodeAsDictionary;
- (id)_initWithDictionary:(id)arg1;
- (id)customUserAgent;
- (bool)mediaPlaybackRequiresUserAction;
- (void)setMediaPlaybackRequiresUserAction:(bool)arg1;
- (bool)allowsInlineMediaPlayback;
- (void)setAllowsInlineMediaPlayback:(bool)arg1;
- (void)setSuppressesIncrementalRendering:(bool)arg1;
- (bool)suppressesIncrementalRendering;
- (bool)mediaPlaybackAllowsAirPlay;
- (void)setMediaPlaybackAllowsAirPlay:(bool)arg1;
- (void)setCustomUserAgent:(id)arg1;
- (unsigned long long)dataDetectorTypes;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end