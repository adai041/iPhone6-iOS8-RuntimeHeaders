/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableIndexSet, UITableViewRowData, NSMutableArray, UITableView;

@interface _UITableViewUpdateSupport : NSObject  {
    long long oldSection;
    long long newSection;
    long long oldGlobalRow;
    long long newGlobalRow;
    UITableView *tableView;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } visibleRows;
    NSArray *updateItems;
    UITableViewRowData *oldRowData;
    UITableViewRowData *newRowData;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } oldRowRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } newRowRange;
    NSMutableIndexSet *rows;
    NSMutableIndexSet *movedRows;
    NSMutableIndexSet *movedSections;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } oldTableViewVisibleBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } newTableViewVisibleBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } tableViewVisibleBoundsUnion;
    double tableViewVisibleBoundsOffset;
    long long oldSectionCount;
    long long newSectionCount;
    long long *oldSectionMap;
    long long *newSectionMap;
    long long oldGlobalRowCount;
    long long newGlobalRowCount;
    long long *oldGlobalRowMap;
    long long *newGlobalRowMap;
    id *animatedCells;
    id *animatedHeaders;
    id *animatedFooters;
    long long globalReorderingRow;
    id _context;
    NSMutableArray *viewAnimations;
    NSMutableArray *deletedSections;
    NSMutableArray *insertedSections;
    NSMutableArray *gaps;
}


- (void)_setupAnimations;
- (id)initWithTableView:(id)arg1 updateItems:(id)arg2 oldRowData:(id)arg3 newRowData:(id)arg4 oldRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 newRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 context:(id)arg7;
- (void)dealloc;
- (void)_setupAnimationForTableFooter;
- (void)_setupAnimationForTableHeader;
- (void)_setupAnimationsForExistingHeadersAndFooters;
- (void)_setupAnimationsForExistingOffscreenCells;
- (void)_setupAnimationsForDeletedHeadersAndFooters;
- (void)_setupAnimationsForDeletedCells;
- (void)_setupAnimationsForInsertedHeadersAndFooters;
- (void)_setupAnimationsForNewlyInsertedCells;
- (void)_setupAnimationForReorderingRow;
- (void)_setupAnimationsForExistingVisibleCells;
- (void)_computeAutomaticAnimationTypes;
- (void)_computeGaps;
- (void)_setupAnimationStructures;
- (void)_computeRowUpdates;
- (void)_computeSectionUpdates;
- (void)_computeVisibleBounds;
- (void)_validateAnimatedCells;
- (id)_imageViewForView:(id)arg1;
- (bool)_isReloadSectionUpdate;
- (void)_setupDeleteAnimationForFooterInSection:(long long)arg1 withTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupDeleteAnimationForHeaderInSection:(long long)arg1 withTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_addBottomShadowViewViewForViewAnimation:(id)arg1;
- (void)_setupInsertAnimationForFooterInSection:(long long)arg1 withTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupInsertAnimationForHeaderInSection:(long long)arg1 withTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;

@end
