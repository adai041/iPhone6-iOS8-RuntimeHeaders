/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface _UIPathLazyImageAsset : UIImageAsset  {
    bool_imagesHaveBeenLoaded;
    bool_haveCGCacheImages;
    NSArray *_imagePaths;
}

@property(copy) NSArray * imagePaths;
@property bool haveCGCacheImages;


- (bool)haveCGCacheImages;
- (id)imagePaths;
- (void)_clearResolvedImageResources;
- (void)setHaveCGCacheImages:(bool)arg1;
- (void)setImagePaths:(id)arg1;
- (id)imageWithTraitCollection:(id)arg1;
- (void)dealloc;

@end
