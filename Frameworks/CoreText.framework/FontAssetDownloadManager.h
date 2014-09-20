/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSSet, NSMutableDictionary;

@interface FontAssetDownloadManager : NSObject  {
    struct TCFRef<const __CFArray *> { 
        struct __CFArray {} *fRef; 
    } fDescriptors;
    struct TCFRef<const __CFSet *> { 
        struct __CFSet {} *fRef; 
    } fMandatoryAttributes;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fProgressCallbackBlock;

    NSMutableDictionary *fProgressParams;
    NSMutableDictionary *fDownloadOptions;
    NSSet *fPreciousFontLanguages;
}

+ (id)availableFontAttributesArray;
+ (id)displayNameForCurrentUser:(id)arg1;
+ (id)enabledKeyboardLanguages;
+ (bool)shouldRetryWithServer;
+ (bool)shouldTryServer;
+ (bool)shouldIgnoreFontAsset:(id)arg1;
+ (Class)getASAssetQueryClass;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void)downloadFontAssets;
- (id)initWithDescriptors:(struct __CFArray { }*)arg1 andMandatoryAttributes:(struct __CFSet { }*)arg2 withBlock:(id)arg3;
- (id)preciousFontLanguages;
- (bool)activateFontsFromAssetURL:(id)arg1;
- (void)setGarbageCollectionBehaviorForAsset:(id)arg1;
- (bool)assetStalled:(id)arg1;
- (void)setDownloadOptionsForMobileAsset;
- (id)extractMatchingAssetsForDescriptor:(struct __CTFontDescriptor { }*)arg1 from:(id)arg2 withFailInfo:(bool*)arg3 andFontFilePaths:(id)arg4;
- (id)availableMobileAssets:(bool)arg1 error:(id*)arg2;
- (id)doFinalMatching;
- (bool)executeDownloadingFontAssets:(id)arg1 forDescriptors:(id)arg2 andFontFilePaths:(id)arg3;
- (void)setProgressParam:(id)arg1 forKey:(id)arg2;
- (unsigned long long)calculateDownloadSize:(id)arg1;
- (id)mobileAssetsForUnmatched:(id)arg1 andFontFilePaths:(id)arg2;
- (id)getUnmatchedDescriptors;
- (bool)callProgressCallbak:(unsigned int)arg1;

@end
