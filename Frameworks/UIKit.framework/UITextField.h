/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, _UICascadingTextStorage, UITextInputTraits, UITextPosition, UILabel, UITextFieldAtomBackgroundView, NSString, UITextRange, <UITextFieldDelegate>, UIImage, NSAttributedString, UITextInteractionAssistant, UIButton, UIView, <UITextInputTokenizer>, NSLayoutConstraint, _UIBaselineLayoutStrut, UIImageView, UIFont, UITextFieldLabel, UIColor, <UITextInputDelegate>, UITextFieldBackgroundView, UITextFieldBorderView;

@interface UITextField : UIControl <UIKeyboardInput, _UILayoutBaselineUpdating, UITextInputTraits_Private, UIPopoverControllerDelegate, UITextInput, NSCoding> {
    _UICascadingTextStorage *_textStorage;
    long long _borderStyle;
    double _minimumFontSize;
    id _delegate;
    UIImage *_background;
    UIImage *_disabledBackground;
    long long _clearButtonMode;
    UIView *_leftView;
    long long _leftViewMode;
    UIView *_rightView;
    long long _rightViewMode;
    UITextInputTraits *_traits;
    UITextInputTraits *_nonAtomTraits;
    double _fullFontSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _padding;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _selectionRangeWhenNotEditing;
    int _scrollXOffset;
    int _scrollYOffset;
    float _progress;
    UIButton *_clearButton;
    struct CGSize { 
        double width; 
        double height; 
    } _clearButtonOffset;
    struct CGSize { 
        double width; 
        double height; 
    } _leftViewOffset;
    struct CGSize { 
        double width; 
        double height; 
    } _rightViewOffset;
    UITextFieldBorderView *_backgroundView;
    UITextFieldBorderView *_disabledBackgroundView;
    UITextFieldBackgroundView *_systemBackgroundView;
    UITextFieldLabel *_displayLabel;
    UITextFieldLabel *_placeholderLabel;
    UITextFieldLabel *_suffixLabel;
    UITextFieldLabel *_prefixLabel;
    UIImageView *_iconView;
    UILabel *_label;
    double _labelOffset;
    UITextInteractionAssistant *_interactionAssistant;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    UITextFieldAtomBackgroundView *_atomBackgroundView;
    struct { 
        unsigned int verticallyCenterText : 1; 
        unsigned int isAnimating : 4; 
        unsigned int inactiveHasDimAppearance : 1; 
        unsigned int becomesFirstResponderOnClearButtonTap : 1; 
        unsigned int clearsPlaceholderOnBeginEditing : 1; 
        unsigned int adjustsFontSizeToFitWidth : 1; 
        unsigned int fieldEditorAttached : 1; 
        unsigned int canBecomeFirstResponder : 1; 
        unsigned int shouldSuppressShouldBeginEditing : 1; 
        unsigned int inResignFirstResponder : 1; 
        unsigned int undoDisabled : 1; 
        unsigned int explicitAlignment : 1; 
        unsigned int implementsCustomDrawing : 1; 
        unsigned int needsClearing : 1; 
        unsigned int suppressContentChangedNotification : 1; 
        unsigned int allowsEditingTextAttributes : 1; 
        unsigned int usesAttributedText : 1; 
        unsigned int backgroundViewState : 2; 
        unsigned int clearingBehavior : 2; 
    } _textFieldFlags;
    bool_deferringBecomeFirstResponder;
    bool_avoidBecomeFirstResponder;
    bool_setSelectionRangeAfterFieldEditorIsAttached;
    NSLayoutConstraint *_baselineLayoutConstraint;
    _UIBaselineLayoutStrut *_baselineLayoutLabel;
}

@property(copy) NSString * text;
@property(copy) NSAttributedString * attributedText;
@property(retain) UIColor * textColor;
@property(retain) UIFont * font;
@property long long textAlignment;
@property long long borderStyle;
@property(copy) NSDictionary * defaultTextAttributes;
@property(copy) NSString * placeholder;
@property(copy) NSAttributedString * attributedPlaceholder;
@property bool clearsOnBeginEditing;
@property bool adjustsFontSizeToFitWidth;
@property double minimumFontSize;
@property <UITextFieldDelegate> * delegate;
@property(retain) UIImage * background;
@property(retain) UIImage * disabledBackground;
@property(getter=isEditing,readonly) bool editing;
@property bool allowsEditingTextAttributes;
@property(copy) NSDictionary * typingAttributes;
@property long long clearButtonMode;
@property(retain) UIView * leftView;
@property long long leftViewMode;
@property(retain) UIView * rightView;
@property long long rightViewMode;
@property(retain) UIView * inputView;
@property(retain) UIView * inputAccessoryView;
@property bool clearsOnInsertion;
@property(setter=_setBaselineLayoutConstraint:,retain) NSLayoutConstraint * _baselineLayoutConstraint;
@property(setter=_setBaselineLayoutLabel:,retain) _UIBaselineLayoutStrut * _baselineLayoutLabel;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property long long autocapitalizationType;
@property long long autocorrectionType;
@property long long spellCheckingType;
@property long long keyboardType;
@property long long keyboardAppearance;
@property long long returnKeyType;
@property bool enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) bool secureTextEntry;
@property struct __CFCharacterSet { }* textTrimmingSet;
@property(retain) UIColor * insertionPointColor;
@property(retain) UIColor * selectionBarColor;
@property(retain) UIColor * selectionHighlightColor;
@property(retain) UIImage * selectionDragDotImage;
@property unsigned long long insertionPointWidth;
@property int textLoupeVisibility;
@property int textSelectionBehavior;
@property id textSuggestionDelegate;
@property bool isSingleLineDocument;
@property bool contentsIsSingleValue;
@property bool acceptsEmoji;
@property bool forceEnableDictation;
@property int emptyContentReturnKeyType;
@property bool returnKeyGoesToNextResponder;
@property bool acceptsFloatingKeyboard;
@property bool acceptsSplitKeyboard;
@property bool displaySecureTextUsingPlainText;
@property bool learnsCorrections;
@property int shortcutConversionType;
@property bool suppressReturnKeyStyling;
@property bool useInterfaceLanguageForLocalization;
@property bool deferBecomingResponder;
@property bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(copy) NSString * autocorrectionContext;
@property(copy) NSString * responseContext;
@property bool disablePrediction;
@property(copy) UITextRange * selectedTextRange;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property(readonly) UITextPosition * beginningOfDocument;
@property(readonly) UITextPosition * endOfDocument;
@property <UITextInputDelegate> * inputDelegate;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(readonly) UIView * textInputView;
@property long long selectionAffinity;

+ (bool)_isCompatibilityTextField;
+ (bool)_isDisplayingShortcutViewController;

- (id)disabledBackground;
- (void)_setBaselineLayoutLabel:(id)arg1;
- (id)_baselineLayoutLabel;
- (id)_baselineLayoutConstraint;
- (void)_setBackgroundStrokeWidth:(double)arg1;
- (void)_setBackgroundFillColor:(id)arg1;
- (void)_setBackgroundStrokeColor:(id)arg1;
- (id)selectedAttributedText;
- (void)setLabelOffset:(float)arg1;
- (void)setBecomesFirstResponderOnClearButtonTap:(bool)arg1;
- (void)_resetSelectionUI;
- (void)_clearSelectionUI;
- (void)setInactiveHasDimAppearance:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRect;
- (void)setClearButtonStyle:(int)arg1;
- (void)setTextAutorresizesToFit:(bool)arg1;
- (void)setAutoresizesTextToFit:(bool)arg1;
- (id)_dictationInterpretations;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (void)setClearsPlaceholderOnBeginEditing:(bool)arg1;
- (void)_setPrefix:(id)arg1;
- (void)_updateSuffix:(id)arg1;
- (id)attributedPlaceholder;
- (void)setAttributedPlaceholder:(id)arg1;
- (id)defaultTextAttributes;
- (void)setDefaultTextAttributes:(id)arg1;
- (id)_textLabelView;
- (void)_setSystemBackgroundViewActive:(bool)arg1;
- (struct CGSize { double x1; double x2; })_rightViewOffset;
- (struct CGPoint { double x1; double x2; })_scrollOffset;
- (id)actualFont;
- (bool)_isShowingPrefix;
- (void)_createInteractionAssistant;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedCaretRectForCaretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isUndoEnabled;
- (bool)_implementsCustomDrawing;
- (void)drawBorder:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_endedEditing;
- (void)_applicationResuming:(id)arg1;
- (void)drawPrefixInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawSuffixInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawPlaceholderInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)_marginTop;
- (void)finishedSettingPlaceholder;
- (void)createPlaceholderIfNecessary;
- (void)_invalidateBaselineLayoutConstraints;
- (void)_setAttributedText:(id)arg1 onFieldEditorAndSetCaretSelectionAfterText:(bool)arg2;
- (void)finishedSettingTextOrAttributedText;
- (bool)_textNeedsSanitizing:(id)arg1;
- (id)_attributedText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })borderRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_prefixFrame;
- (bool)clearsPlaceholderOnBeginEditing;
- (void)_updateAutosizeStyleIfNeeded;
- (void)_updateAtomBackground;
- (void)_updatePlaceholderPosition;
- (bool)_isShowingPlaceholder;
- (void)_setUpBaselineLayoutConstraintsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_baselineLayoutConstraintConstantForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_baselineLeftViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)rightViewMode;
- (long long)leftViewMode;
- (bool)_showsClearButtonWhenEmpty;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_atomBackgroundViewFrame;
- (bool)_showsAtomBackground;
- (bool)_hasContent;
- (long long)borderStyle;
- (bool)_heightShouldBeMini;
- (void)setFont:(id)arg1 fullFontSize:(float)arg2;
- (bool)_showsRightView;
- (bool)_showsClearButton:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clearButtonRect;
- (void)_updateAtomTextColor;
- (id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3;
- (float)_marginTopForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)actualMinimumFontSize;
- (void)_syncTypingAttributesWithDefaultAttribute:(id)arg1;
- (id)customOverlayContainer;
- (void)setSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_initialScrollDidFinish:(id)arg1;
- (void)scrollTextFieldToVisible;
- (bool)_shouldEndEditing;
- (id)clearButton;
- (long long)clearButtonMode;
- (void)_createBaselineLayoutLabelIfNecessary;
- (struct CGSize { double x1; double x2; })_textSizeUsingFullFontSize:(bool)arg1;
- (void)_sizeChanged:(bool)arg1;
- (void)_setNeedsStyleRecalc;
- (void)_stopObservingFieldEditorScroll;
- (bool)clearsOnBeginEditing;
- (void)_updateTextLabel;
- (id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForLabel:(id)arg1 inTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)createTextLabelWithTextColor:(id)arg1;
- (void)_setBaselineLayoutConstraint:(id)arg1;
- (void)setAtomStyle:(int)arg1;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLabel:(id)arg2;
- (bool)_inPopover;
- (void)_selectionMayChange:(id)arg1;
- (struct CGSize { double x1; double x2; })_textSize;
- (void)_updateBaselineInformationDependentOnBounds;
- (bool)_wantsBaselineUpdatingFollowingConstraintsPass;
- (id)_placeholderView;
- (void)setClearsOnBeginEditing:(bool)arg1;
- (float)paddingBottom;
- (void)setPaddingRight:(float)arg1;
- (void)setPaddingBottom:(float)arg1;
- (unsigned long long)offsetInMarkedTextForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setSuffix:(id)arg1 withColor:(id)arg2;
- (id)_textInputViewForAddingGestureRecognizers;
- (bool)_useGesturesForEditableContent;
- (void)setClearingBehavior:(int)arg1;
- (void)setDrawsAsAtom:(bool)arg1;
- (int)clearingBehavior;
- (id)_text;
- (Class)_systemBackgroundViewClass;
- (Class)_placeholderLabelClass;
- (long long)_suffixLabelTextAlignment;
- (void)_clearBackgroundViews;
- (void)_updateBackgroundViewsAnimated:(bool)arg1;
- (float)paddingRight;
- (long long)_currentTextAlignment;
- (bool)_showsLeftView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_suffixFrame;
- (bool)_hasSuffixField;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_availableTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forEditing:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })_clearButtonSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_fieldEditorAttached;
- (bool)_showsClearButtonWhenNonEmpty:(bool)arg1;
- (float)paddingLeft;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (void)_updateButtons;
- (id)_clearButton;
- (void)setPaddingLeft:(float)arg1;
- (void)_setEnabled:(bool)arg1 animated:(bool)arg2;
- (id)searchText;
- (void)setClearButtonMode:(long long)arg1;
- (void)setDisabledBackground:(id)arg1;
- (void)setLeftViewMode:(long long)arg1;
- (id)_placeholderLabel;
- (void)_activateSelectionView;
- (void)__resumeBecomeFirstResponder;
- (id)_systemBackgroundView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_partsShouldBeMini;
- (void)_setRightViewOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setRightViewMode:(long long)arg1;
- (void)setPaddingTop:(float)arg1;
- (float)paddingTop;
- (void)setClearButtonOffset:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })clearButtonOffset;
- (void)_setLeftViewOffset:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_leftViewOffset;
- (id)placeholder;
- (void)setBackground:(id)arg1;
- (id)background;
- (void)setTextCentersHorizontally:(bool)arg1;
- (void)setTextCentersVertically:(bool)arg1;
- (void)setUndoEnabled:(bool)arg1;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (void)_clearButtonClicked:(id)arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)setContinuousSpellCheckingEnabled:(bool)arg1;
- (id)rightView;
- (id)leftView;
- (void)setRightView:(id)arg1;
- (void)setLeftView:(id)arg1;
- (bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_availableTextRectExcludingButtonsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_placeholderColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconRect;
- (void)setBorderStyle:(long long)arg1;
- (void)setIcon:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)shadowBlur;
- (void)setShadowBlur:(double)arg1;
- (double)minimumFontSize;
- (void)setMinimumFontSize:(double)arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_isDisplayingReferenceLibraryViewController;
- (id)automaticallySelectedOverlay;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)select:(id)arg1;
- (id)selectedText;
- (void)disableClearsOnInsertion;
- (bool)clearsOnInsertion;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hasSelection;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_define:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)replace:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)layoutTilesNow;
- (void)setClearsOnInsertion:(bool)arg1;
- (void)selectAll:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (id)_proxyTextInput;
- (id)webView;
- (bool)allowsEditingTextAttributes;
- (void)setAllowsEditingTextAttributes:(bool)arg1;
- (void)setLabel:(id)arg1;
- (id)viewForBaselineLayout;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)_requiresKeyboardResetOnReload;
- (id)inputAccessoryView;
- (id)inputView;
- (bool)canResignFirstResponder;
- (void)_resignFirstResponder;
- (void)_becomeFirstResponder;
- (void)setAnimating:(bool)arg1;
- (void)setPlaceholder:(id)arg1;
- (id)_inputController;
- (bool)hasMarkedText;
- (unsigned long long)characterOffsetAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (void)selectAll;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)metadataDictionariesForDictationResults;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)tokenizer;
- (void)setInputDelegate:(id)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (id)markedTextStyle;
- (id)markedTextRange;
- (id)selectedTextRange;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)clearText;
- (bool)hasText;
- (int)atomStyle;
- (bool)drawsAsAtom;
- (void)_scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (id)inputDelegate;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (id)typingAttributes;
- (long long)textAlignment;
- (void)attachFieldEditor:(id)arg1;
- (void)willAttachFieldEditor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editRect;
- (void)takeTraitsFrom:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)willDetachFieldEditor:(id)arg1;
- (id)textInputView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)cancelAutoscroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (id)textColor;
- (id)textInputTraits;
- (void)selectAllFromFieldEditor:(id)arg1;
- (void)_sanitizeText:(id)arg1;
- (bool)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 toCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)fieldEditorDidChange:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (bool)keyboardInputChanged:(id)arg1;
- (bool)keyboardInputShouldDelete:(id)arg1;
- (bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3;
- (id)selectionView;
- (id)interactionAssistant;
- (struct CGPoint { double x1; double x2; })_originForTextFieldLabel:(id)arg1;
- (bool)_shouldObscureInput;
- (id)_fieldEditor;
- (id)textLabel;
- (bool)isEditing;
- (id)font;
- (bool)adjustsFontSizeToFitWidth;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)_updateLabel;
- (id)attributedText;
- (void)setContentVerticalAlignment:(long long)arg1;
- (id)shadowColor;
- (void)setAttributedText:(id)arg1;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (void)setProgress:(float)arg1;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)tintColorDidChange;
- (bool)canBecomeFirstResponder;
- (bool)_canDrawContent;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)_windowBecameKey;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowColor:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)setTextAlignment:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderExternalTouchRectForWindow:(id)arg1;
- (bool)isEditable;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (bool)becomeFirstResponder;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)resignFirstResponder;
- (id)undoManager;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)_backgroundView;
- (id)delegate;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)backgroundColor;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isAccessibilityElementByDefault;
- (void)_setPasscodeStyleAlpha:(double)arg1;
- (void)_updateForPasscodeAppearance;
- (double)_passcodeStyleAlpha;
- (bool)_isPasscodeStyle;
- (id)_scriptingInfo;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;

@end