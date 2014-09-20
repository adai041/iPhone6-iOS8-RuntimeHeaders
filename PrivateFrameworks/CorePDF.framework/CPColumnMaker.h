/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSMutableArray, CPZone;

@interface CPColumnMaker : NSObject  {
    NSMutableArray *columns;
    CPZone *currentZone;
    NSMutableArray *allParagraphs;
    NSMutableArray *thinHorizontalShapes;
    NSMutableArray *otherShapes;
    NSMutableArray *images;
    NSMutableArray *paragraphWrappers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } pageBounds;
    double maxParagraphDistance;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pageBounds;


- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageBounds;
- (bool)column:(id)arg1 isLinkedBelowTo:(id)arg2;
- (id)chunkAbove:(id)arg1 in:(id)arg2;
- (id)paragraphBelow:(id)arg1 in:(id)arg2;
- (bool)paragraph:(id)arg1 notOnSameShapeAs:(id)arg2;
- (bool)cuttingShapeBetween:(id)arg1 and:(id)arg2;
- (bool)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3;
- (void)anchorImages;
- (void)splitColumns:(id)arg1;
- (bool)canSafelyAdd:(id)arg1 to:(id)arg2;
- (void)callOuts;
- (void)partitionShapes:(id)arg1;
- (bool)closeImagesBetween:(id)arg1 and:(id)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)averageSpacing:(id)arg1;
- (void)intersectionCallout:(id)arg1;
- (bool)paragraph:(id)arg1 isLinkedBelowTo:(id)arg2;
- (id)paragraphAbove:(id)arg1 in:(id)arg2;
- (bool)paragraph:(id)arg1 isBelow:(id)arg2;
- (bool)paragraph:(id)arg1 isAbove:(id)arg2;
- (void)makeColumnsFrom:(id)arg1 zone:(id)arg2;
- (void)setPageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)columns;
- (id)init;
- (void)dealloc;

@end
