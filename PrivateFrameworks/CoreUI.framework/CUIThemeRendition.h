/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSString, NSData;

@interface CUIThemeRendition : NSObject  {
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    } _stackKey[16];
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } *_key;
    long long _type;
    unsigned int _subtype;
    unsigned int _scale;
    struct { 
        unsigned int isHeaderFlaggedFPO : 1; 
        unsigned int isExcludedFromContrastFilter : 1; 
        unsigned int isVectorBased : 1; 
        unsigned int isOpaque : 1; 
        unsigned int reserved : 28; 
    } _renditionFlags;
    long long _templateRenderingMode;
    long long _artworkStatus;
    unsigned long long _colorSpaceID;
    NSString *_name;
    NSData *_srcData;
    long long _validLookGradation;
    double _opacity;
    int _blendMode;
    NSString *_utiType;
    int _exifOrientation;
}

@property double opacity;
@property int blendMode;
@property int exifOrientation;

+ (Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned int)arg2;
+ (id)filteredCSIDataFromBaseCSIData:(id)arg1;
+ (id)displayNameForRenditionType:(long long)arg1;

- (bool)isValidForLookGradation:(long long)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;
- (id)_initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(long long)arg3;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (long long)artworkStatus;
- (bool)isHeaderFlaggedFPO;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(long long)arg3;
- (double)gradientDrawingAngle;
- (id)sliceInformation;
- (struct CGImage { }*)unslicedImage;
- (id)maskForSliceIndex:(long long)arg1;
- (bool)isScaled;
- (id)imageForSliceIndex:(long long)arg1;
- (bool)isTiled;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg1;
- (void)_initializeRenditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)effectPreset;
- (unsigned long long)colorSpaceID;
- (bool)isVectorBased;
- (id)utiType;
- (unsigned int)gradientStyle;
- (struct CGPDFDocument { }*)pdfDocument;
- (void)setExifOrientation:(int)arg1;
- (id)gradient;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)key;
- (id)metrics;
- (void)setOpacity:(double)arg1;
- (double)opacity;
- (bool)isOpaque;
- (id)name;
- (long long)templateRenderingMode;
- (int)exifOrientation;
- (id)data;
- (unsigned int)subtype;
- (long long)type;
- (double)scale;
- (id)description;
- (void)dealloc;
- (void)setBlendMode:(int)arg1;
- (int)blendMode;

@end
