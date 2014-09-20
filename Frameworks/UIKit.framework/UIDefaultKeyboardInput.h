/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UITextInputTokenizer>, NSString, <UITextInputDelegate>, UIView, UIImage, UITextRange, NSDictionary, UITextInteractionAssistant, UITextInputTraits, UITextPosition, UIColor;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput, UITextInputPrivate> {
    UITextInputTraits *m_traits;
}

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
@property(copy) UITextRange * selectedTextRange;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property(readonly) UITextPosition * beginningOfDocument;
@property(readonly) UITextPosition * endOfDocument;
@property <UITextInputDelegate> * inputDelegate;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(readonly) UIView * textInputView;
@property long long selectionAffinity;
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
@property(readonly) UITextInteractionAssistant * interactionAssistant;
@property long long selectionGranularity;


- (void)setupPlaceholderTextIfNeeded;
- (bool)isShowingPlaceholder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertCaretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)extendCurrentSelection:(int)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (bool)selectionAtWordStart;
- (bool)selectionAtDocumentStart;
- (int)selectionState;
- (int)wordOffsetInRange:(id)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)rectsForNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)replaceCurrentWordWithText:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRect;
- (void)setForceEnableDictation:(bool)arg1;
- (bool)forceEnableDictation;
- (void)setAcceptsEmoji:(bool)arg1;
- (bool)acceptsEmoji;
- (bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (id)fontForCaretSelection;
- (void)setBecomesEditableWithGestures:(bool)arg1;
- (bool)becomesEditableWithGestures;
- (void)updateSelection;
- (bool)hasContent;
- (void)forwardInvocation:(id)arg1;
- (bool)hasSelection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (id)textColorForCaretSelection;
- (void)selectAll;
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
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (bool)hasText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (id)inputDelegate;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (void)takeTraitsFrom:(id)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)textInputTraits;
- (id)selectionView;
- (id)interactionAssistant;
- (bool)isEditing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (bool)isSecure;
- (void)setSecure:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (bool)isEditable;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)delegate;
- (void)dealloc;

@end
