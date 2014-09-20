/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTextObject : CPChunk  {
    struct CGPoint { 
        double x; 
        double y; 
    } anchor;
    boolmetricInfoCalculated;
    float maxFontSize;
    double maxFontLineHeight;
}


- (void)calculateMetrics;
- (double)maxFontLineHeight;
- (float)maxFontSize;
- (void)clearCachedInfo;
- (void)translateObjectYBy:(double)arg1;

@end
