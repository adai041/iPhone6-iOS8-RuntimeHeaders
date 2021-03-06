/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSDictionary, CUIPSDGradient;

@interface CUIThemeSchemaRendition : CUIThemeRendition  {
    NSDictionary *cuiInfo;
    unsigned long long _nimages;
    struct CGImage {} *_image[9];
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _layoutRects[9];
    struct CGSize { 
        double width; 
        double height; 
    } _intrinsicSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _elementRect;
    long long _columnSlices;
    long long _rowSlices;
    struct { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInsets;
    CUIPSDGradient *_gradient;
}

@property(readonly) unsigned long long numberOfSlices;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }* sliceRects;
@property(readonly) CUIPSDGradient * gradient;


- (unsigned short)presentationState;
- (unsigned short)look;
- (id)stringForValue:(unsigned short)arg1;
- (id)scaleLocalizedString;
- (id)lookLocalizedString;
- (id)drawingLayerLocalizedString;
- (id)dimension2LocalizedString;
- (id)dimension1LocalizedString;
- (id)presentationStateLocalizedString;
- (id)sizeLocalizedString;
- (id)previousValueLocalizedString;
- (id)valueLocalizedString;
- (id)directionLocalizedString;
- (id)previousStateLocalizedString;
- (id)stateLocalizedString;
- (id)typeLocalizedString;
- (struct CGPoint { double x1; double x2; })renditionCoordinatesForPartFeatures:(long long)arg1;
- (long long)rowSlices;
- (long long)columnSlices;
- (id)defaultTemplateName;
- (id)coreUIOptions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })edgeInsets:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectangle;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)sliceRects;
- (unsigned short)previousValue;
- (unsigned short)previousState;
- (unsigned short)keyScale;
- (unsigned short)drawingLayer;
- (unsigned short)dimension2;
- (unsigned short)dimension1;
- (id)referenceImage;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(long long)arg3;
- (unsigned long long)numberOfSlices;
- (id)slices;
- (id)gradient;
- (struct { double x1; double x2; double x3; double x4; })contentInsets;
- (id)stringForState:(unsigned short)arg1;
- (id).cxx_construct;
- (unsigned short)direction;
- (unsigned short)value;
- (double)scale;
- (unsigned short)identifier;
- (unsigned short)state;
- (id)description;
- (unsigned short)layer;
- (unsigned short)size;
- (void)dealloc;

@end
