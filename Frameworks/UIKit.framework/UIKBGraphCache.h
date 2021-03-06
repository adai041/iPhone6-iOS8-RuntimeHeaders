/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScreen, NSMutableDictionary, NSString, NSDictionary;

@interface UIKBGraphCache : NSObject <_UIScreenBasedObject> {
    UIScreen *_screen;
    NSMutableDictionary *_graphCache;
}

@property(readonly) NSMutableDictionary * graphCache;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) UIScreen * _intendedScreen;
@property(readonly) NSDictionary * _options;

+ (id)graphCacheForScreen:(id)arg1;

- (id)graphCache;
- (id)_intendedScreen;
- (bool)_matchingOptions:(id)arg1;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (id)_options;
- (void)dealloc;

@end
