/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCompositionInternal, NSArray;

@interface AVComposition : AVAsset <NSMutableCopying> {
    AVCompositionInternal *_priv;
}

@property(readonly) NSArray * tracks;
@property(readonly) struct CGSize { double x1; double x2; } naturalSize;

+ (void)initialize;

- (id)tracks;
- (void)finalize;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)_setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (int)_createEmptyMutableCompositionIfNeeded;
- (id)_mutableTracks;
- (id)_newTrackForIndex:(long long)arg1;
- (void)_loadAssetInspectorAndLoaderOnce;
- (id)_initWithComposition:(id)arg1;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)_assetInspector;
- (id)_assetInspectorLoader;

@end
