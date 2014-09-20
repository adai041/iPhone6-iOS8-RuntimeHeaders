/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSSet, CPBitmapStore;

@interface UIKeyboardCache : NSObject  {
    CPBitmapStore *_store;
    NSSet *_layouts;
    bool_isCommitting;
}

+ (bool)enabled;
+ (id)sharedInstance;

- (id)uniqueLayoutsFromInputModes:(id)arg1;
- (void)displayView:(id)arg1 fromLayout:(id)arg2;
- (struct CGImage { }*)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;
- (struct CGImage { }*)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;
- (void)displayView:(id)arg1 imageWidth:(double)arg2 fromLayout:(id)arg3;
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;
- (void)updateCacheForInputModes:(id)arg1;
- (void)clearNonPersistentCache;
- (void)commitTransaction;
- (id)init;
- (void)dealloc;

@end
