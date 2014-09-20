/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, NSString, UIInputSwitcherTableView, UIKBTree, UIKeyboardLayoutStar, UIInputSwitcherShadowView, UIInputSwitcherSelectionExtraView, UIDimmingView;

@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate> {
    UIInputSwitcherTableView *m_table;
    UIInputSwitcherShadowView *m_shadowView;
    UIInputSwitcherSelectionExtraView *m_selExtraView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } m_referenceRect;
    double m_pointerOffset;
    boolm_scrollable;
    boolm_startAutoscroll;
    boolm_scrolling;
    boolm_shouldFade;
    struct CGPoint { 
        double x; 
        double y; 
    } m_point;
    double m_scrollStartTime;
    int m_scrollDirection;
    NSTimer *m_scrollTimer;
    int m_visibleRows;
    int m_firstVisibleRow;
    int m_mode;
    UIDimmingView *m_dimmingView;
    bool_usesStraightLeftEdge;
    bool_usesDarkTheme;
    UIKBTree *_referenceKey;
    UIKeyboardLayoutStar *_layout;
}

@property int mode;
@property(readonly) bool usesTable;
@property bool usesStraightLeftEdge;
@property bool usesDarkTheme;
@property UIKBTree * referenceKey;
@property UIKeyboardLayoutStar * layout;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)viewThatContainsBaseKey;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popupRect;
- (double)minYOfLastTableCellForSelectionExtraView;
- (bool)centerPopUpOverKey;
- (id)subtitleFont;
- (id)titleForItemAtIndex:(int)arg1;
- (void)setUsesDarkTheme:(bool)arg1;
- (void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(bool)arg2;
- (id)subtitleFontForItemAtIndex:(int)arg1;
- (id)subtitleForItemAtIndex:(int)arg1;
- (id)fontForItemAtIndex:(int)arg1;
- (id)localizedTitleForItemAtIndex:(int)arg1;
- (int)indexForIndexPath:(id)arg1;
- (void)didSelectItemAtIndex:(int)arg1;
- (void)endScrolling:(id)arg1;
- (void)setNeedsDisplayForTopBottomCells;
- (void)setNeedsDisplayForCell:(id)arg1;
- (void)_delayedFade;
- (void)toggleKeyboardPredictionPreference;
- (id)predictiveSwitch;
- (id)referenceKey;
- (void)setKeyboardDimmed:(bool)arg1;
- (void)setReferenceKey:(id)arg1;
- (int)_internationalKeyRoundedCornerInLayout:(id)arg1;
- (void)performShowAnimation;
- (void)insertSelExtraView;
- (void)highlightRow:(int)arg1;
- (long long)defaultSelectedIndex;
- (bool)usesDimmingView;
- (void)setupShadowViewWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUsesStraightLeftEdge:(bool)arg1;
- (struct CGSize { double x1; double x2; })preferredSize;
- (bool)usesShadowView;
- (bool)usesTable;
- (id)maskForShadowViewBlurredBackground;
- (bool)usesDarkTheme;
- (bool)usesStraightLeftEdge;
- (void)showAsHUD;
- (void)autoscrollTimerFired:(id)arg1;
- (void)stopAnyAutoscrolling;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)selectItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)fade;
- (void)fadeWithDelay:(double)arg1;
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;
- (void)dimmingViewWasTapped:(id)arg1;
- (long long)numberOfItems;
- (id)dimmingView;
- (bool)isVisible;
- (void)setLayout:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (int)mode;
- (void)setMode:(int)arg1;
- (id)table;
- (id)layout;
- (id)font;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)applicationWillSuspend:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)show;
- (void)hide;

@end
