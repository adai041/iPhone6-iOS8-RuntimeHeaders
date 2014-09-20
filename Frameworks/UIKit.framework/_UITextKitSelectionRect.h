/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextKitSelectionRect : UITextSelectionRect  {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _rect;
    bool_containsEnd;
    bool_containsStart;
    bool_vertical;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property bool containsStart;
@property bool containsEnd;
@property(getter=isVertical) bool vertical;

+ (id)selectionRectWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void)setVertical:(bool)arg1;
- (void)setContainsStart:(bool)arg1;
- (void)setContainsEnd:(bool)arg1;
- (bool)containsEnd;
- (long long)writingDirection;
- (bool)containsStart;
- (bool)isVertical;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (id)description;

@end
