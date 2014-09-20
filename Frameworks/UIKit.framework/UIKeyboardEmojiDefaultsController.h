/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary;

@interface UIKeyboardEmojiDefaultsController : NSObject  {
    NSMutableDictionary *_defaults;
}

+ (id)sharedController;

- (id)defaultsValueForKey:(id)arg1;
- (void)setDefaultsValue:(id)arg1 forKey:(id)arg2;
- (long long)currentSequenceKey;
- (void)setCurrentSequenceKey:(long long)arg1;
- (id)usageHistoryKey;
- (void)setUsageHistoryKey:(id)arg1;
- (id)recentsKey;
- (void)setRecentsKey:(id)arg1;
- (void)setEmojiCategoryDefaultsIndex:(long long)arg1 forCategory:(id)arg2;
- (void)readEmojiDefaults;
- (void)writeEmojiDefaults;
- (void)handleRead:(id)arg1;
- (void)handleWrite:(id)arg1;
- (id)emptyDefaultsDictionary;
- (long long)emojiCategoryDefaultsIndex:(id)arg1;
- (id)init;
- (void)dealloc;

@end
