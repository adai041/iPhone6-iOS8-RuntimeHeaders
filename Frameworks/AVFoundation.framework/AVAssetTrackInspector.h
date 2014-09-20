/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVWeakReference, NSString, NSLocale, NSDictionary;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {
    AVWeakReference *_weakReference;
    long long _synthesizeMediaCharacteristicsOnce;
    NSArray *_cachedMediaCharacteristics;
}

@property(readonly) int trackID;
@property(getter=_figMediaType,readonly) unsigned int figMediaType;
@property(getter=_figTrackReader,readonly) struct OpaqueFigTrackReader { }* figTrackReader;
@property(getter=_figAssetTrack,readonly) struct OpaqueFigAssetTrack { }* figAssetTrack;
@property(readonly) NSString * mediaType;
@property(readonly) NSArray * formatDescriptions;
@property(getter=isPlayable,readonly) bool playable;
@property(getter=isEnabled,readonly) bool enabled;
@property(getter=isSelfContained,readonly) bool selfContained;
@property(readonly) long long totalSampleDataLength;
@property(readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property(readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } mediaPresentationTimeRange;
@property(readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } mediaDecodeTimeRange;
@property(readonly) bool requiresFrameReordering;
@property(readonly) int naturalTimeScale;
@property(readonly) float estimatedDataRate;
@property(readonly) NSString * languageCode;
@property(readonly) NSArray * mediaCharacteristics;
@property(readonly) NSString * extendedLanguageTag;
@property(readonly) NSLocale * locale;
@property(readonly) struct CGSize { double x1; double x2; } naturalSize;
@property(readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property(readonly) long long layer;
@property(readonly) float preferredVolume;
@property(readonly) NSDictionary * loudnessInfo;
@property(readonly) float nominalFrameRate;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minSampleDuration;
@property(copy,readonly) NSArray * segments;
@property(readonly) NSArray * commonMetadata;
@property(readonly) NSArray * availableMetadataFormats;
@property(readonly) long long alternateGroupID;
@property(getter=isExcludedFromAutoselectionInTrackGroup,readonly) bool excludedFromAutoselectionInTrackGroup;
@property(readonly) struct CGSize { double x1; double x2; } dimensions;
@property(getter=_trackReferences,readonly) NSDictionary * trackReferences;
@property(readonly) bool hasProtectedContent;
@property(readonly) int playabilityValidationResult;

+ (id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;

- (long long)totalSampleDataLength;
- (id)extendedLanguageTag;
- (int)trackID;
- (id)mediaType;
- (id)commonMetadata;
- (float)nominalFrameRate;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (bool)hasProtectedContent;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)formatDescriptions;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)languageCode;
- (struct CGSize { double x1; double x2; })dimensions;
- (id)locale;
- (bool)isEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (long long)layer;
- (void)dealloc;
- (bool)isPlayable;
- (unsigned int)_figMediaType;
- (id)_trackReferences;
- (bool)isExcludedFromAutoselectionInTrackGroup;
- (long long)alternateGroupID;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })samplePresentationTimeForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSampleDuration;
- (id)loudnessInfo;
- (float)estimatedDataRate;
- (bool)requiresFrameReordering;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaDecodeTimeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaPresentationTimeRange;
- (id)mediaCharacteristics;
- (bool)isSelfContained;
- (int)playabilityValidationResult;
- (struct OpaqueFigAssetTrack { }*)_figAssetTrack;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)_weakReference;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (int)naturalTimeScale;
- (float)preferredVolume;

@end
