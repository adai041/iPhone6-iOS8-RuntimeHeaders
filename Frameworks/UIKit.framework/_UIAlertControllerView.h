/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIAlertControllerActionView, UICollectionView, UIView<UIAlertControllerBackgroundView>, UILabel, _UIKeyboardLayoutAlignmentView, NSMutableArray, UIView, NSLayoutConstraint, UIAlertControllerVisualStyle, NSString, UIAlertController, _UIAlertControllerShadowedScrollView, _UIAlertControllerCollectionViewFlowLayout;

@interface _UIAlertControllerView : UIView <UICollectionViewDataSource, UIScrollViewDelegate> {
    UIAlertController *_alertController;
    UIView *_roundedCornersView;
    UICollectionView *_actionCollectionView;
    _UIAlertControllerCollectionViewFlowLayout *_flowLayout;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIView *_contentViewControllerContainerView;
    _UIAlertControllerActionView *_discreteCancelActionView;
    UIView<UIAlertControllerBackgroundView> *_backdropView;
    _UIAlertControllerShadowedScrollView *_contentScrollView;
    UIView *_contentScrollViewContentView;
    UIView *_contentView;
    UIView *_foregroundView;
    UIView *_dimmingView;
    _UIKeyboardLayoutAlignmentView *_keyboardLayoutAlignmentView;
    UIView *_keyboardLayoutAlignmentAvailableSpaceView;
    UIAlertControllerVisualStyle *_visualStyle;
    long long _layoutOrientation;
    bool_inPopover;
    bool_hasDimmingView;
    bool_showsCancelAction;
    bool_cancelActionIsDiscrete;
    bool_shouldHaveBackdropView;
    bool_alignsToKeyboard;
    NSMutableArray *_backdropViewConstraints;
    NSMutableArray *_dimmingViewConstraints;
    NSMutableArray *_dimmingViewForegroundViewTopConstraints;
    NSMutableArray *_dimmingViewForegroundViewBottomConstraints;
    NSMutableArray *_dimmingViewConstraintsForAlertStyle;
    NSMutableArray *_dimmingViewConstraintsForActionSheetStyle;
    NSMutableArray *_noDimmingViewConstraints;
    bool_hasCachedLargestActionDimension;
    struct CGSize { 
        double width; 
        double height; 
    } _largestActionDimension;
    NSLayoutConstraint *_foregroundViewWidthConstraint;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_titleLabelTopAlignmentConstraint;
    NSLayoutConstraint *_messageLabelTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerViewLeftConstraint;
    NSLayoutConstraint *_contentViewControllerViewRightConstraint;
    NSLayoutConstraint *_contentViewControllerViewTopConstraint;
    NSLayoutConstraint *_contentViewControllerViewBottomConstraint;
    NSLayoutConstraint *_contentScrollViewBottomConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_collectionViewTopAlignmentConstraint;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_collectionViewWidthConstraint;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_discreteCancelActionViewTopConstraint;
    NSLayoutConstraint *_discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint *_discreteCancelActionViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewHeightConstraint;
    NSLayoutConstraint *_backdropViewBottomConstraint;
    NSLayoutConstraint *_backdropViewRightConstraint;
}

@property UIAlertController * alertController;
@property(readonly) UIView * _foregroundView;
@property(readonly) UIView * _dimmingView;
@property(readonly) _UIAlertControllerCollectionViewFlowLayout * _flowLayout;
@property long long layoutOrientation;
@property(setter=_setVisualStyle:,retain) UIAlertControllerVisualStyle * _visualStyle;
@property bool inPopover;
@property bool hasDimmingView;
@property bool showsCancelAction;
@property bool cancelActionIsDiscrete;
@property bool shouldHaveBackdropView;
@property bool alignsToKeyboard;
@property(retain) NSLayoutConstraint * foregroundViewWidthConstraint;
@property(retain) NSLayoutConstraint * contentViewTopConstraint;
@property(retain) NSLayoutConstraint * contentViewBottomConstraint;
@property(retain) NSLayoutConstraint * titleLabelTopAlignmentConstraint;
@property(retain) NSLayoutConstraint * messageLabelTopAlignmentConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerViewLeftConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerViewRightConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerViewTopConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerViewBottomConstraint;
@property(retain) NSLayoutConstraint * contentScrollViewBottomConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerContainerViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerContainerViewWidthConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerContainerViewHeightConstraint;
@property(retain) NSLayoutConstraint * collectionViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint * centerXConstraint;
@property(retain) NSLayoutConstraint * centerYConstraint;
@property(retain) NSLayoutConstraint * widthConstraint;
@property(retain) NSLayoutConstraint * heightConstraint;
@property(retain) NSLayoutConstraint * collectionViewWidthConstraint;
@property(retain) NSLayoutConstraint * collectionViewHeightConstraint;
@property(retain) NSLayoutConstraint * discreteCancelActionViewTopConstraint;
@property(retain) NSLayoutConstraint * discreteCancelActionViewLeadingConstraint;
@property(retain) NSLayoutConstraint * discreteCancelActionViewWidthConstraint;
@property(retain) NSLayoutConstraint * discreteCancelActionViewHeightConstraint;
@property(retain) NSLayoutConstraint * backdropViewBottomConstraint;
@property(retain) NSLayoutConstraint * backdropViewRightConstraint;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)_retroactivelyRequiresConstraintBasedLayout;
+ (void)initialize;

- (bool)alignsToKeyboard;
- (void)setHeightConstraint:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (void)setCenterYConstraint:(id)arg1;
- (void)setCenterXConstraint:(id)arg1;
- (id)centerYConstraint;
- (id)centerXConstraint;
- (id)contentViewControllerViewBottomConstraint;
- (id)contentViewControllerViewTopConstraint;
- (id)contentViewControllerViewRightConstraint;
- (id)contentViewControllerViewLeftConstraint;
- (void)setContentViewControllerContainerViewHeightConstraint:(id)arg1;
- (id)contentViewControllerContainerViewHeightConstraint;
- (void)setContentViewControllerContainerViewWidthConstraint:(id)arg1;
- (id)contentViewControllerContainerViewWidthConstraint;
- (void)setContentViewControllerViewBottomConstraint:(id)arg1;
- (void)setContentViewControllerViewTopConstraint:(id)arg1;
- (void)setContentViewControllerViewRightConstraint:(id)arg1;
- (void)setContentViewControllerViewLeftConstraint:(id)arg1;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_reevaluateSuperviewSizingConstraints;
- (bool)_shouldTreatEmptyStringsAsNil;
- (void)_prepareBackdropViewConstraints;
- (bool)_hasAttributedMessage;
- (bool)_hasAttributedTitle;
- (void)_updateInsets;
- (void)_updateCornerRadius;
- (void)_updateBackdrop;
- (void)_updateVisualAltitude;
- (void)_updateLabelMaximumLines;
- (void)_updateLabelTextColor;
- (void)_updateLabelFontSizes;
- (bool)_actionLayoutIsVertical;
- (bool)_wantsHorizontalAlert;
- (id)defaultAction;
- (id)_orderedActionsForCollectionView;
- (id)_actionsForCollectionView;
- (bool)_shouldHaveCancelActionInCollectionView;
- (void)_actionLayoutDirectionChanged;
- (void)setContentViewTopConstraint:(id)arg1;
- (id)contentViewTopConstraint;
- (bool)hasDimmingView;
- (void)setBackdropViewBottomConstraint:(id)arg1;
- (id)backdropViewBottomConstraint;
- (void)updateDefaultAction;
- (void)setCollectionViewTopAlignmentConstraint:(id)arg1;
- (id)collectionViewTopAlignmentConstraint;
- (void)setContentScrollViewBottomConstraint:(id)arg1;
- (id)contentScrollViewBottomConstraint;
- (void)setContentViewControllerContainerViewTopAlignmentConstraint:(id)arg1;
- (id)contentViewControllerContainerViewTopAlignmentConstraint;
- (void)setMessageLabelTopAlignmentConstraint:(id)arg1;
- (id)messageLabelTopAlignmentConstraint;
- (void)setTitleLabelTopAlignmentConstraint:(id)arg1;
- (id)titleLabelTopAlignmentConstraint;
- (void)setContentViewBottomConstraint:(id)arg1;
- (id)contentViewBottomConstraint;
- (void)setBackdropViewRightConstraint:(id)arg1;
- (id)backdropViewRightConstraint;
- (bool)shouldHaveBackdropView;
- (void)_removeDiscreteCancelActionView;
- (void)setDiscreteCancelActionViewHeightConstraint:(id)arg1;
- (id)discreteCancelActionViewHeightConstraint;
- (void)setDiscreteCancelActionViewWidthConstraint:(id)arg1;
- (id)discreteCancelActionViewWidthConstraint;
- (void)setDiscreteCancelActionViewLeadingConstraint:(id)arg1;
- (id)discreteCancelActionViewLeadingConstraint;
- (void)setDiscreteCancelActionViewTopConstraint:(id)arg1;
- (id)discreteCancelActionViewTopConstraint;
- (id)_bottomMostViewToAlignDiscreteCancelActionViewTo;
- (double)_marginBetweenContentAndDiscreteCancelAction;
- (bool)_hasDiscreteCancelAction;
- (void)setCollectionViewHeightConstraint:(id)arg1;
- (id)collectionViewHeightConstraint;
- (void)setCollectionViewWidthConstraint:(id)arg1;
- (id)collectionViewWidthConstraint;
- (struct CGSize { double x1; double x2; })_collectionViewSizeForHorizontalLayout:(bool)arg1 itemSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setForegroundViewWidthConstraint:(id)arg1;
- (double)_layoutWidthForHorizontalLayout:(bool)arg1;
- (id)foregroundViewWidthConstraint;
- (bool)_canLayOutActionsHorizontally;
- (bool)cancelActionIsDiscrete;
- (bool)showsCancelAction;
- (struct CGSize { double x1; double x2; })_itemSizeForHorizontalLayout:(bool)arg1;
- (bool)_wantsHorizontalCollectionViewLayout;
- (struct CGSize { double x1; double x2; })_minimumSizeForAllActions;
- (bool)hasDiscreteHorizontalCancelAction;
- (double)_idealLayoutWidth;
- (long long)_numberOfActionsForCollectionView;
- (bool)_wantsHorizontalActionSheet;
- (double)_availableWidthForHorizontalLayout:(bool)arg1;
- (double)_verticalLayoutWidth;
- (bool)_horizontalLayoutCanUseFullWidth;
- (struct CGSize { double x1; double x2; })_sizeForLayoutWidthDetermination;
- (double)_labelHorizontalInsets;
- (bool)_buttonsAreTopMost;
- (void)_invalidateFlowLayout;
- (void)_prepareDimmingViewConstraints;
- (void)_applyCollectionViewConstraints;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyMessageConstraints;
- (void)_applyTitleConstraints;
- (void)_applyViewConstraints;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareDimmingView;
- (void)_prepareCancelView;
- (void)_prepareActionCollectionView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareMesssageLabel;
- (void)_prepareTitleLabel;
- (void)_prepareContentScrollView;
- (void)_prepareContentView;
- (void)_prepareForegroundView;
- (void)_prepareViewsAndAddConstraints;
- (void)_updateCellStyle:(id)arg1;
- (bool)_hasMessage;
- (bool)_hasTitle;
- (void)setInPopover:(bool)arg1;
- (void)_contentSizeChanged;
- (id)alertController;
- (struct CGSize { double x1; double x2; })_contentViewControllerSize;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (void)setShowsCancelAction:(bool)arg1;
- (void)_sizeOfContentViewControllerChanged;
- (void)_removeContentViewController;
- (id)_visualStyle;
- (id)cancelAction;
- (void)setCancelActionIsDiscrete:(bool)arg1;
- (void)_setVisualStyle:(id)arg1;
- (void)_recomputeAlignedDescriptiveLabelTextWidth;
- (void)setAlignsToKeyboard:(bool)arg1;
- (void)setShouldHaveBackdropView:(bool)arg1;
- (void)setHasDimmingView:(bool)arg1;
- (id)_flowLayout;
- (void)setAlertController:(id)arg1;
- (void)_propertiesChanged;
- (void)_actionsChanged;
- (bool)inPopover;
- (id)heightConstraint;
- (id)widthConstraint;
- (double)_idealWidth;
- (id)_dimmingView;
- (id)contentViewController;
- (id)message;
- (void)setLayoutOrientation:(long long)arg1;
- (long long)layoutOrientation;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_updateStyle;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)setTintAdjustmentMode:(long long)arg1;
- (long long)tintAdjustmentMode;
- (id)title;
- (id)actions;
- (id)_foregroundView;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
