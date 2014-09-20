/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPImage : CPGraphicObject  {
    struct CPPDFImage { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned int x2; struct CGPDFStream {} *x3; int x4; struct CGImage {} *x5; struct CGAffineTransform { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; } x6; struct CGPDFDictionary {} *x7; double x8; struct CGColor {} *x9; } *imageData;
    boolrenderedBoundsComputed;
}


- (struct CPPDFImage { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned int x2; struct CGPDFStream {} *x3; int x4; struct CGImage {} *x5; struct CGAffineTransform { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; } x6; struct CGPDFDictionary {} *x7; double x8; struct CGColor {} *x9; }*)imageData;
- (void)recomputeRenderedBounds;
- (void)accept:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderedBounds;
- (long long)zOrder;
- (bool)isVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPDFImage:(struct CPPDFImage { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned int x2; struct CGPDFStream {} *x3; int x4; struct CGImage {} *x5; struct CGAffineTransform { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; } x6; struct CGPDFDictionary {} *x7; double x8; struct CGColor {} *x9; }*)arg1;

@end
