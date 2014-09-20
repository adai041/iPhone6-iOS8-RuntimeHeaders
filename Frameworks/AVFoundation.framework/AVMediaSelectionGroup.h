/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaSelectionGroupInternal, NSArray, AVMediaSelectionOption;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;
}

@property(readonly) NSArray * options;
@property(readonly) AVMediaSelectionOption * defaultOption;
@property(readonly) bool allowsEmptySelection;

+ (id)playableMediaSelectionOptionsFromArray:(id)arg1;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2;

- (void)finalize;
- (id)asset;
- (id)options;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(bool)arg2;
- (id)defaultOption;
- (bool)_matchesGroupID:(id)arg1 mediaType:(id)arg2;
- (id)_groupID;
- (id)_groupMediaType;
- (bool)allowsEmptySelection;
- (bool)_isStreamingGroup;
- (id)_weakReference;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;

@end
