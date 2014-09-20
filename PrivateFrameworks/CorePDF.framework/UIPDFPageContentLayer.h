/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CALayer;

@interface UIPDFPageContentLayer : CALayer <UIPDFSelectionLayer> {
    CALayer *_selectionLayer;
}


- (void)setSelectionNeedsDisplay;
- (void)layoutSublayers;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)init;
- (void)setNeedsDisplay;
- (void)dealloc;

@end
