/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIWeakRef, NSString, UIAlertController, _UIAlertControllerShimPresenter, NSMutableArray, UIViewController;

@interface UIAlertView : UIView  {
    UIAlertController *_alertController;
    _UIAlertControllerShimPresenter *_presenter;
    NSMutableArray *_actions;
    long long _cancelIndex;
    long long _defaultButtonIndex;
    long long _firstOtherButtonIndex;
    NSString *_message;
    NSString *_subtitle;
    long long _alertViewStyle;
    bool_runsModal;
    id _context;
    bool_hasPreparedAlertActions;
    bool_isPresented;
    bool_alertControllerShouldDismiss;
    bool_handlingAlertActionShouldDismiss;
    bool_dismissingAlertController;
    bool__currentlyRunningModal;
    UIViewController *externalViewControllerForPresentation;
    _UIWeakRef *_weakDelegate;
}

@property id delegate;
@property(copy) NSString * title;
@property(copy) NSString * message;
@property(readonly) long long numberOfButtons;
@property long long cancelButtonIndex;
@property(readonly) long long firstOtherButtonIndex;
@property(getter=isVisible,readonly) bool visible;
@property long long alertViewStyle;
@property bool groupsTextFields;
@property bool showsOverSpringBoardAlerts;
@property(getter=_externalViewControllerForPresentation,setter=_setExternalViewControllerForPresentation:,retain) UIViewController * externalViewControllerForPresentation;
@property(setter=_setCurrentlyRunningModal:) bool _currentlyRunningModal;
@property(retain) _UIWeakRef * weakDelegate;

+ (bool)_isAlertControllerShimClass;
+ (void)applyTransformToAllAlerts:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (bool)_springBoardAlertDisplayingOverApplicationAlert;
+ (void)_setSpringBoardAlertDisplayingOverApplicationAlert:(bool)arg1;
+ (struct CGSize { double x1; double x2; })minimumSize;
+ (id)_alertWindow;
+ (id)_remoteAlertViewWithBlock:(id)arg1;
+ (id)_alertViewForSessionWithRemoteViewController:(id)arg1;
+ (id)_alertViewForWindow:(id)arg1;
+ (void)rtb_displayAlertWithTitle:(id)arg1 message:(id)arg2 leftButtonTitle:(id)arg3 leftButtonAction:(id)arg4 rightButtonTitle:(id)arg5 rightButtonAction:(id)arg6;

- (void)_setExternalViewControllerForPresentation:(id)arg1;
- (id)_externalViewControllerForPresentation;
- (void)_showByReplacingPreviousAlertAnimated:(bool)arg1;
- (void)_useLegacyUI:(bool)arg1;
- (bool)_isSBAlert;
- (void)_updateFrameForDisplay;
- (void)_prepareToBeReplaced;
- (void)setKeyboardShowsOnPopup:(bool)arg1;
- (bool)_shouldUseUndoStyle;
- (void)_showByReplacingAlert:(id)arg1 animated:(bool)arg2;
- (id)_representedModalItem;
- (id)_representedModalItemView;
- (void)replaceAlert:(id)arg1;
- (void)_prepareForDisplay;
- (int)numberOfLinesInTitle;
- (double)_buttonHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRect;
- (void)setRunsModal:(bool)arg1;
- (bool)dimsBackground;
- (void)setDimsBackground:(bool)arg1;
- (bool)forceHorizontalButtonsLayout;
- (void)setForceHorizontalButtonsLayout:(bool)arg1;
- (int)alertSheetStyle;
- (void)setAlertSheetStyle:(int)arg1;
- (void)setNumberOfRows:(long long)arg1;
- (struct CGSize { double x1; double x2; })backgroundSize;
- (id)_dimView;
- (void)setDimView:(id)arg1;
- (bool)isBodyTextTruncated;
- (id)taglineTextLabel;
- (bool)_canShowAlerts;
- (bool)showsOverSpringBoardAlerts;
- (void)setShowsOverSpringBoardAlerts:(bool)arg1;
- (id)tableView;
- (bool)tableShouldShowMinimumContent;
- (void)setTableShouldShowMinimumContent:(bool)arg1;
- (int)bodyMaxLineCount;
- (void)setBodyTextMaxLineCount:(int)arg1;
- (int)titleMaxLineCount;
- (void)setTitleMaxLineCount:(int)arg1;
- (int)suspendTag;
- (void)setSuspendTag:(int)arg1;
- (void)layoutAnimated:(bool)arg1;
- (long long)_currentOrientation;
- (bool)requiresPortraitOrientation;
- (void)_performPopup:(bool)arg1;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (void)showWithAnimationType:(int)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)_presentSheetFromView:(id)arg1 above:(bool)arg2;
- (void)popupAlertAnimated:(bool)arg1;
- (void)popupAlertAnimated:(bool)arg1 animationType:(int)arg2;
- (void)popupAlertAnimated:(bool)arg1 atOffset:(double)arg2;
- (bool)groupsTextFields;
- (void)setGroupsTextFields:(bool)arg1;
- (int)buttonCount;
- (id)buttonTitleAtIndex:(long long)arg1;
- (id)_buttonAtIndex:(long long)arg1;
- (void)_updateButtonTitles;
- (id)buttonAtIndex:(long long)arg1;
- (id)_destructiveButton;
- (void)_setDestructiveButton:(id)arg1;
- (void)_setDefaultButton:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2 buttonClass:(Class)arg3;
- (id)_addButtonWithTitle:(id)arg1;
- (id)_addButtonWithTitleText:(id)arg1;
- (void)setAlertViewStyle:(long long)arg1;
- (void)setTaglineText:(id)arg1;
- (id)bodyText;
- (void)setBodyText:(id)arg1;
- (void)_changeButtonTitleAtIndex:(long long)arg1 toTitle:(id)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (void)_setAccessoryViewController:(id)arg1;
- (id)bodyTextLabel;
- (void)_endRunningModallyIfNecessary;
- (void)_beginRunningModallyIfNecessary;
- (id)textField;
- (void)_setIsPresented:(bool)arg1;
- (void)_showAnimated:(bool)arg1;
- (void)_updateFirstOtherButtonEnabledState;
- (id)_addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (void)_textDidChangeInTextField:(id)arg1;
- (long long)_maximumNumberOfTextFieldsForCurrentStyle;
- (int)textFieldCount;
- (long long)alertViewStyle;
- (long long)numberOfButtons;
- (bool)_currentlyRunningModal;
- (void)_setCurrentlyRunningModal:(bool)arg1;
- (bool)runsModal;
- (void)_prepareAlertActions;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (id)_alertController;
- (id)weakDelegate;
- (void)setWeakDelegate:(id)arg1;
- (void)_updateMessageAndSubtitle;
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;
- (bool)_prepareToDismissForTappedIndex:(long long)arg1;
- (void)_dismissForTappedIndex:(long long)arg1;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
- (long long)firstOtherButtonIndex;
- (void)setDefaultButtonIndex:(long long)arg1;
- (void)_setTextFieldsHidden:(bool)arg1;
- (void)dismissAnimated:(bool)arg1;
- (void)dismiss;
- (bool)isVisible;
- (id)keyboard;
- (void)setMessage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (void)_setAccessoryView:(id)arg1;
- (id)_defaultButton;
- (id)_titleLabel;
- (void)setDefaultButton:(id)arg1;
- (id)defaultButton;
- (double)_maxHeight;
- (id)textFieldAtIndex:(long long)arg1;
- (long long)defaultButtonIndex;
- (id)message;
- (void)layout;
- (bool)_isAnimating;
- (long long)numberOfRows;
- (id)titleLabel;
- (void)setContext:(id)arg1;
- (id)context;
- (id)title;
- (void)_useUndoStyle:(bool)arg1;
- (void)setCancelButtonIndex:(long long)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (long long)cancelButtonIndex;
- (id)delegate;
- (void)setTitle:(id)arg1;
- (id)window;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)show;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 leftButtonTitle:(id)arg3 leftButtonAction:(id)arg4 rightButtonTitle:(id)arg5 rightButtonAction:(id)arg6;

@end
