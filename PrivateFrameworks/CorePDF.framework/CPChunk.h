/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPChunk : CPObject  {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } bounds;
    boolshrinksWithChildren;
    booldirtyBounds;
    unsigned int position;
    long long insertionOrder;
}

+ (float)chooseReferenceFontSizeFrom:(float)arg1 and:(float)arg2;

- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (double)top;
- (double)right;
- (double)left;
- (double)bottom;
- (void)setChildren:(id)arg1;
- (void)setChunkPosition:(unsigned int)arg1;
- (void)translateObjectYBy:(double)arg1;
- (bool)intersectsChild:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShrinksWithChildren:(bool)arg1;
- (bool)shrinksWithChildren;
- (bool)boundsEqualsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 accuracy:(double)arg2;
- (bool)geometricallyContains:(id)arg1;
- (bool)overlapsVerticallyWith:(id)arg1;
- (bool)overlapsHorizontallyWith:(id)arg1;
- (void)orderedInsert:(id)arg1 usingSelector:(SEL)arg2;
- (int)clusterLevelHint;
- (long long)compareChunkPosition:(id)arg1;
- (long long)compareYDescendingX:(id)arg1;
- (long long)compareYDescending:(id)arg1;
- (long long)compareYBounds:(id)arg1;
- (long long)compareY:(id)arg1;
- (long long)compareLinearBounds:(id)arg1;
- (long long)compareXBounds:(id)arg1;
- (long long)compareZDescending:(id)arg1;
- (long long)compareZ:(id)arg1;
- (long long)compareInsertionOrder:(id)arg1;
- (long long)compareX:(id)arg1;
- (long long)compareAnchorYDescending:(id)arg1;
- (long long)compareAnchorX:(id)arg1;
- (long long)compareAnchorY:(id)arg1;
- (void)setInsertionOrder:(long long)arg1;
- (float)referenceAdvanceWidth;
- (float)clusterGapTo:(id)arg1;
- (id)describeBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustToPointBoundary:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)opticalLeading;
- (void)accept:(id)arg1;
- (unsigned int)chunkPosition;
- (long long)insertionOrder;
- (float)advanceDeltaAfterSpace;
- (float)absoluteGapTo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderedBounds;
- (id)newTakeChildrenAmong:(id)arg1;
- (id)newTakeChildren;
- (void)fitBoundsToChildren;
- (void)addChildrenOf:(id)arg1;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)resizeWith:(id)arg1;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
- (long long)compareTopDescending:(id)arg1;
- (struct CGSize { double x1; double x2; })advance;
- (void)removeAll;
- (float)fontSize;
- (void)setAnchor:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })anchor;
- (void)sortUsingSelector:(SEL)arg1;
- (double)center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)rotationAngle;

@end
