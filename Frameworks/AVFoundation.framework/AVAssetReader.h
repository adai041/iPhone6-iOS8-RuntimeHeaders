/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAsset, NSArray, AVAssetReaderInternal, NSError;

@interface AVAssetReader : NSObject  {
    AVAssetReaderInternal *_priv;
}

@property(retain,readonly) AVAsset * asset;
@property(readonly) long long status;
@property(readonly) NSError * error;
@property struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property(readonly) NSArray * outputs;
@property(getter=_figAssetReader,readonly) struct OpaqueFigAssetReader { }* figAssetReader;

+ (id)assetReaderWithAsset:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (id)_errorForOSStatus:(int)arg1;

- (void)addOutput:(id)arg1;
- (void)finalize;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)error;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (bool)startReading;
- (long long)status;
- (id)asset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)description;
- (id)init;
- (void)dealloc;
- (struct OpaqueFigAssetReader { }*)_figAssetReader;
- (void)_handleServerDiedNotification;
- (bool)canAddOutput:(id)arg1;
- (void)_transitionToStatus:(long long)arg1 failureError:(id)arg2;
- (bool)_canAddOutput:(id)arg1 exceptionReason:(id*)arg2;
- (void)_tearDownFigAssetReader;
- (id)initWithAsset:(id)arg1 error:(id*)arg2;
- (void)cancelReading;
- (id)outputs;

@end
