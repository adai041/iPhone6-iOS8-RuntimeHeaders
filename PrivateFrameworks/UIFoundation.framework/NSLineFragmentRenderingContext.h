/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class CUICatalog, CUIStyleEffectConfiguration;

@interface NSLineFragmentRenderingContext : NSObject  {
    void *_runs;
    long long _numRuns;
    unsigned short *_glyphs;
    struct CGSize { double x1; double x2; } *_advancements;
    double _leftSideDelta;
    double _lineWidth;
    double _leftControlWidth;
    double _rightControlWidth;
    double _elasticWidth;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _imageBounds;
    struct { 
        unsigned int _isRTL : 1; 
        unsigned int _vAdvance : 1; 
        unsigned int _flipped : 1; 
        unsigned int _usesSimpleTextEffects : 1; 
        unsigned int _reserved : 28; 
    } _flags;
    CUICatalog *_catalog;
    CUIStyleEffectConfiguration *_styleEffects;
}

@property(retain) CUICatalog * cuiCatalog;
@property(retain) CUIStyleEffectConfiguration * cuiStyleEffects;
@property(getter=_usesSimpleTextEffects,setter=_setUsesSimpleTextEffects:) bool usesSimpleTextEffects;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)finalize;
- (void)setCuiStyleEffects:(id)arg1;
- (void)setCuiCatalog:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageBounds;
- (bool)isRTL;
- (double)elasticWidth;
- (double)lineFragmentWidth;
- (void)getMaximumAscender:(double*)arg1 minimumDescender:(double*)arg2;
- (struct CGSize { double x1; double x2; })sizeWithBehavior:(long long)arg1 usesFontLeading:(bool)arg2 baselineDelta:(double*)arg3;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithRuns:(struct __CFArray { }*)arg1 glyphOrigin:(double)arg2 lineFragmentWidth:(double)arg3 elasticWidth:(double)arg4 usesScreenFonts:(bool)arg5 isRTL:(bool)arg6;
- (id)cuiStyleEffects;
- (id)cuiCatalog;
- (oneway void)release;
- (bool)_usesSimpleTextEffects;
- (void)_setUsesSimpleTextEffects:(bool)arg1;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)dealloc;

@end