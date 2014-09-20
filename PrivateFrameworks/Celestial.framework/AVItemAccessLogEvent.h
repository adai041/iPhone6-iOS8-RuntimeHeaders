/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSString, AVItemAccessLogEventInternal, NSDate;

@interface AVItemAccessLogEvent : NSObject <NSCopying> {
    AVItemAccessLogEventInternal *_playerItemAccessLogEvent;
}

@property(readonly) long long numberOfSegmentsDownloaded;
@property(readonly) NSDate * playbackStartDate;
@property(readonly) NSString * URI;
@property(readonly) NSString * serverAddress;
@property(readonly) long long numberOfServerAddressChanges;
@property(readonly) NSString * playbackSessionID;
@property(readonly) double playbackStartOffset;
@property(readonly) double segmentsDownloadedDuration;
@property(readonly) double durationWatched;
@property(readonly) long long numberOfStalls;
@property(readonly) long long numberOfBytesTransferred;
@property(readonly) double observedBitrate;
@property(readonly) double indicatedBitrate;
@property(readonly) long long numberOfDroppedVideoFrames;


- (void)finalize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)dealloc;
- (long long)numberOfSegmentsDownloaded;
- (long long)numberOfDroppedVideoFrames;
- (double)indicatedBitrate;
- (double)observedBitrate;
- (long long)numberOfBytesTransferred;
- (long long)numberOfStalls;
- (double)durationWatched;
- (double)segmentsDownloadedDuration;
- (double)playbackStartOffset;
- (id)playbackSessionID;
- (long long)numberOfServerAddressChanges;
- (id)serverAddress;
- (id)URI;
- (id)playbackStartDate;

@end
