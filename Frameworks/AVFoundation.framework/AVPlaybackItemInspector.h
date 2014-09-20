/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector  {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
}

@property(getter=_playbackItem,setter=_setPlaybackItem:,retain) struct OpaqueFigPlaybackItem { }* playbackItem;


- (void)finalize;
- (id)commonMetadata;
- (id)lyrics;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 trackIDs:(id)arg2;
- (void)_setPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (long long)trackCount;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)trackIDs;
- (bool)providesPreciseDurationAndTiming;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;

@end
