/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSString, UIWindow, UIToolbar, NSMutableArray, <UIModalViewDelegate>, UILabel;

@interface UIModalView : UIView <UITextFieldDelegate> {
    <UIModalViewDelegate> *_delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_bodyTextLabel;
    UILabel *_taglineTextLabel;
    double _startX;
    double _startY;
    id _context;
    long long _cancelButton;
    long long _defaultButton;
    long long _firstOtherButton;
    UIToolbar *_toolbar;
    UIWindow *_originalWindow;
    UIWindow *_dimWindow;
    long long _suspendTag;
    long long _dismissButtonIndex;
    double _bodyTextHeight;
    NSMutableArray *_buttons;
    NSMutableArray *_textFields;
    UIView *_keyboard;
    UIView *_table;
    UIView *_dimView;
    UIView *_sheetView;
    struct { 
        unsigned int numberOfRows : 7; 
        unsigned int delegateAlertSheetButtonClicked : 1; 
        unsigned int delegateDidPresentAlertSheet : 1; 
        unsigned int delegateDidDismissAlertSheet : 1; 
        unsigned int hideButtonBar : 1; 
        unsigned int alertStyle : 3; 
        unsigned int dontDimBackground : 1; 
        unsigned int dismissSuspended : 1; 
        unsigned int dontBlockInteraction : 1; 
        unsigned int sheetWasPoppedUp : 1; 
        unsigned int animating : 1; 
        unsigned int hideWhenDoneAnimating : 1; 
        unsigned int layoutWhenDoneAnimating : 1; 
        unsigned int titleMaxLineCount : 2; 
        unsigned int bodyTextMaxLineCount : 3; 
        unsigned int runsModal : 1; 
        unsigned int runningModal : 1; 
        unsigned int addedTextView : 1; 
        unsigned int addedTableShadows : 1; 
        unsigned int showOverSBAlerts : 1; 
        unsigned int showMinTableContent : 1; 
        unsigned int bodyTextTruncated : 1; 
        unsigned int orientation : 3; 
        unsigned int groupsTextFields : 1; 
        unsigned int delegateBodyTextAlignment : 1; 
        unsigned int delegateClickedButtonAtIndex : 1; 
        unsigned int delegateCancel : 1; 
        unsigned int delegateWillPresent : 1; 
        unsigned int delegateDidPresent : 1; 
        unsigned int delegateWillDismiss : 1; 
        unsigned int delegateDidDismiss : 1; 
        unsigned int popupFromPoint : 1; 
        unsigned int extra : 20; 
        unsigned int dontCallDismissDelegate : 1; 
        unsigned int useAutomaticKB : 1; 
        unsigned int shouldHandleFirstKeyUpEvent : 1; 
        unsigned int cancelWhenDoneAnimating : 1; 
    } _modalViewFlags;
}

@property bool groupsTextFields;
@property <UIModalViewDelegate> * delegate;
@property(copy) NSString * title;
@property(copy) NSString * message;
@property(readonly) long long numberOfButtons;
@property long long cancelButtonIndex;
@property(getter=isVisible,readonly) bool visible;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)topMostAlert;
+ (bool)atLeastOneAlertVisible;
+ (id)visibleAlert;
+ (id)_popupAlertBackground;
+ (struct CGSize { double x1; double x2; })minimumSize;
+ (void)noteOrientationChangingTo:(long long)arg1;

- (id)_initWithTelephoneNumber:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(long long)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)buttonTitleAtIndex:(long long)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (long long)numberOfButtons;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
- (long long)firstOtherButtonIndex;
- (void)setDefaultButtonIndex:(long long)arg1;
- (bool)isVisible;
- (void)setMessage:(id)arg1;
- (long long)defaultButtonIndex;
- (id)message;
- (id)title;
- (void)setCancelButtonIndex:(long long)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (long long)cancelButtonIndex;
- (id)delegate;
- (void)setTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)taglineTextView;
- (id)bodyTextView;
- (bool)blocksInteraction;
- (void)setBlocksInteraction:(bool)arg1;
- (void)_slideSheetOut:(bool)arg1;
- (void)popupAlertAnimated:(bool)arg1 fromBarButtonItem:(id)arg2;
- (bool)_dimsBackground;
- (void)_repopupNoAnimation;
- (bool)_manualKeyboardIsVisible;
- (id)destructiveButton;
- (void)setDestructiveButton:(id)arg1;
- (void)_createTitleLabelIfNeeded;
- (void)_truncateViewHeight:(id)arg1 toFitInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withMinimumHeight:(double)arg3;
- (double)_bottomVerticalInset;
- (double)_titleVerticalBottomInset;
- (double)_titleVerticalTopInset;
- (double)_titleHorizontalInset;
- (void)_setupTitleStyle;
- (void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_setAlertSheetStyleFromButtonBar:(id)arg1;
- (void)_appSuspended:(id)arg1;
- (void)_layoutPopupAlertWithOrientation:(long long)arg1 animated:(bool)arg2;
- (void)layoutAnimated:(bool)arg1 withDuration:(double)arg2;
- (void)_rotatingAnimationDidStop:(id)arg1;
- (void)_performPopoutAnimationAnimated:(bool)arg1;
- (void)_hideAnimated:(bool)arg1;
- (void)_repopup;
- (void)_setupInitialFrame;
- (void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_removeAlertWindowOrShowAnOldAlert;
- (void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2;
- (void)_cleanupAfterPopupAnimation;
- (void)_growAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_layoutIfNeeded;
- (void)_temporarilyHideAnimated:(bool)arg1;
- (void)_cancelAnimated:(bool)arg1;
- (bool)_needsKeyboard;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)buttons;
- (void)_buttonClicked:(id)arg1;
- (void)_alertSheetTextFieldReturn:(id)arg1;
- (void)_createSubtitleLabelIfNeeded;
- (void)_createTaglineTextLabelIfNeeded;
- (void)_createBodyTextLabelIfNeeded;
- (bool)_isSBAlert;
- (void)_prepareToBeReplaced;
- (void)replaceAlert:(id)arg1;
- (void)_prepareForDisplay;
- (long long)numberOfLinesInTitle;
- (double)_buttonHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRect;
- (void)setRunsModal:(bool)arg1;
- (bool)dimsBackground;
- (void)setDimsBackground:(bool)arg1;
- (int)alertSheetStyle;
- (void)setAlertSheetStyle:(int)arg1;
- (void)setNumberOfRows:(long long)arg1;
- (struct CGSize { double x1; double x2; })backgroundSize;
- (id)_dimView;
- (void)setDimView:(id)arg1;
- (bool)isBodyTextTruncated;
- (bool)_canShowAlerts;
- (bool)showsOverSpringBoardAlerts;
- (void)setShowsOverSpringBoardAlerts:(bool)arg1;
- (id)tableView;
- (bool)tableShouldShowMinimumContent;
- (void)setTableShouldShowMinimumContent:(bool)arg1;
- (long long)bodyMaxLineCount;
- (void)setBodyTextMaxLineCount:(long long)arg1;
- (long long)titleMaxLineCount;
- (void)setTitleMaxLineCount:(long long)arg1;
- (long long)suspendTag;
- (void)setSuspendTag:(long long)arg1;
- (void)layoutAnimated:(bool)arg1;
- (long long)_currentOrientation;
- (bool)requiresPortraitOrientation;
- (void)_performPopup:(bool)arg1;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)_presentSheetFromView:(id)arg1 above:(bool)arg2;
- (void)popupAlertAnimated:(bool)arg1;
- (void)popupAlertAnimated:(bool)arg1 atOffset:(double)arg2;
- (bool)groupsTextFields;
- (void)setGroupsTextFields:(bool)arg1;
- (long long)buttonCount;
- (void)_setDefaultButton:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)_addButtonWithTitle:(id)arg1;
- (id)_addButtonWithTitleText:(id)arg1;
- (void)setTaglineText:(id)arg1;
- (id)bodyText;
- (void)setBodyText:(id)arg1;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(long long)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)textField;
- (long long)textFieldCount;
- (bool)runsModal;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (void)_setTextFieldsHidden:(bool)arg1;
- (void)dismissAnimated:(bool)arg1;
- (void)dismiss;
- (id)keyboard;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (void)userDidCancelPopoverView:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_defaultButton;
- (void)setDefaultButton:(id)arg1;
- (id)defaultButton;
- (double)_maxHeight;
- (id)textFieldAtIndex:(long long)arg1;
- (void)layout;
- (bool)_isAnimating;
- (long long)numberOfRows;
- (void)setContext:(id)arg1;
- (bool)canBecomeFirstResponder;
- (id)context;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end