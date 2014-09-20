/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSObject<OS_dispatch_queue>, NSMutableArray, AVWeakReference;

@interface AVFigAssetTrackInspector : AVAssetTrackInspector  {
    struct OpaqueFigAsset { } *_figAsset;
    struct OpaqueFigFormatReader { } *_figFormatReader;
    struct OpaqueFigAssetTrack { } *_figAssetTrack;
    struct OpaqueFigTrackReader { } *_figTrackReader;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    NSMutableArray *_loadingBatches;
    AVWeakReference *_weakReferenceToAsset;
}


- (long long)totalSampleDataLength;
- (void)finalize;
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
- (id)asset;
- (bool)isEnabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)layer;
- (void)dealloc;
- (bool)isPlayable;
- (long long)_loadStatusForFigAssetTrackProperty:(id)arg1 returningError:(int*)arg2;
- (void)_removeFigNotifications;
- (void)_addFigNotifications;
- (unsigned int)_figMediaType;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;
- (id)_loadingBatches;
- (struct OpaqueFigSimpleMutex { }*)_loadingMutex;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (id)_trackReferences;
- (bool)isExcludedFromAutoselectionInTrackGroup;
- (long long)alternateGroupID;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSampleDuration;
- (id)loudnessInfo;
- (float)estimatedDataRate;
- (bool)requiresFrameReordering;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaDecodeTimeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaPresentationTimeRange;
- (bool)isSelfContained;
- (int)playabilityValidationResult;
- (struct OpaqueFigAssetTrack { }*)_figAssetTrack;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (int)naturalTimeScale;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (float)preferredVolume;

@end
