/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class AVItem, NSDictionary;

@interface AVPlaybackItem : NSObject  {
    id _delegate;
    AVItem *_avItem;
    struct OpaqueFigPlaybackItem { } *_fpItem;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _currentDuration;
    struct CGSize { 
        double width; 
        double height; 
    } _currentSize;
    bool_currentSizeIsValid;
    bool_isPreparingForInspectionInitialSamples;
    bool_isPreparingForInspectionAccurateDuration;
    bool_isInPlayQueue;
    double _bookmarkTime;
    NSDictionary *_streamStateNotificationInfo;
    NSDictionary *_lyricsNotificationInfo;
    NSDictionary *_inspectionNotificationInfo;
    NSDictionary *_playToEndNotificationInfo;
}

@property(retain) NSDictionary * inspectionNotificationInfo;
@property(retain) NSDictionary * playToEndNotificationInfo;
@property(retain) NSDictionary * streamStateNotificationInfo;
@property(retain) NSDictionary * lyricsNotificationInfo;
@property bool isInPlayQueue;
@property(readonly) bool isPreparingForInspection;
@property bool isPreparingForInspectionInitialSamples;
@property bool isPreparingForInspectionAccurateDuration;

+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)arg1 stringURLToNSURLWithKey:(id)arg2 inArrayOfDictionaries:(id)arg3;

- (id)attributeForKey:(id)arg1;
- (void)setBookmarkTime:(double)arg1;
- (void)removeFromPlayQueue:(struct OpaqueFigPlayer { }*)arg1;
- (bool)addToPlayQueue:(struct OpaqueFigPlayer { }*)arg1 afterItem:(struct OpaqueFigPlaybackItem { }*)arg2;
- (id)initWithDelegate:(id)arg1 item:(id)arg2;
- (void)fpItemNotificationInfo:(id)arg1;
- (void)setIsInPlayQueue:(bool)arg1;
- (id)propertiesNeededForInspection;
- (void)setIsPreparingForInspectionAccurateDuration:(bool)arg1;
- (void)setIsPreparingForInspectionInitialSamples:(bool)arg1;
- (void)fpItemNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)applyBookmarkTime;
- (void)applyAttributesFromAVItemToFPItem:(id)arg1;
- (void)addFPListeners;
- (id)fpNotificationNames;
- (void)cacheCurrentSize;
- (void)cacheCurrentDuration;
- (bool)isInPlayQueue;
- (bool)isPreparingForInspection;
- (bool)isPreparingForInspectionAccurateDuration;
- (bool)isPreparingForInspectionInitialSamples;
- (void)setPlayToEndNotificationInfo:(id)arg1;
- (void)setInspectionNotificationInfo:(id)arg1;
- (void)setLyricsNotificationInfo:(id)arg1;
- (void)setStreamStateNotificationInfo:(id)arg1;
- (void)removeFPListeners;
- (id)streamStateNotificationInfo;
- (id)lyricsNotificationInfo;
- (id)playToEndNotificationInfo;
- (void)stealControlOfAVItem;
- (void)makeReadyForInspection;
- (id)inspectionNotificationInfo;
- (struct OpaqueFigPlaybackItem { }*)fpItem;
- (void)ensureFPItem;
- (id)avItem;
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(long long)arg3;
- (id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(bool)arg3 maxCount:(long long)arg4;
- (id)formatDetailsForTracks;
- (void)setItemAttribute:(id)arg1 value:(id)arg2 forKey:(id)arg3 error:(id*)arg4;
- (id)itemAttribute:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;

@end