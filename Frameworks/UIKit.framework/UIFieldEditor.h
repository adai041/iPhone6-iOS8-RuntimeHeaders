/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextInputController, UITextRange, <UITextInputTokenizer>, NSTextContainer, NSDictionary, UIAutoscroll, UIView, _UICascadingTextStorage, NSString, UITextField, NSTimer, UITextPosition, _UIFieldEditorContentView, _UIFieldEditorLayoutManager, <UITextInputDelegate>;

@interface UIFieldEditor : UIScrollView <UITextInputControllerDelegate, NSLayoutManagerDelegate, NSUITextViewCommonMethods, UIAutoscrollContainer, UITextInput, UITextAutoscrolling, UIKeyboardInput> {
    UITextInputController *_inputController;
    UITextField *_proxiedView;
    UIAutoscroll *_autoscroll;
    NSTextContainer *_textContainer;
    _UIFieldEditorLayoutManager *_layoutManager;
    _UICascadingTextStorage *_textStorage;
    struct { 
        unsigned int delegateRespondsToFieldEditorDidChange : 1; 
        unsigned int delegateRespondsToShouldInsertText : 1; 
        unsigned int delegateRespondsToShouldReplaceWithText : 1; 
        unsigned int suppressScrollToSelection : 1; 
        unsigned int clearOnNextEdit : 1; 
    } _feFlags;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _padding;
    _UIFieldEditorContentView *_contentView;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _unobscuredSecureRange;
    NSTimer *_obscureLastCharacterTimer;
    struct CGPoint { 
        double x; 
        double y; 
    } _textContainerOrigin;
    double _contentWidth;
    _UIFieldEditorContentView *_passcodeStyleCutoutView;
    struct CGPoint { 
        double x; 
        double y; 
    } _autoscrollContentOffset;
}

@property struct CGPoint { double x1; double x2; } autoscrollContentOffset;
@property(copy) NSDictionary * typingAttributes;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property long long layoutOrientation;
@property NSTextContainer * textContainer;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } markedRange;
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

+ (id)excludedElementsForHTML;
+ (id)sharedFieldEditor;
+ (id)activeFieldEditor;
+ (void)releaseSharedInstance;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)_inputController;
- (bool)hasMarkedText;
- (unsigned long long)characterOffsetAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)revealSelection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (void)updateAutoscroll:(id)arg1;
- (id)textColorForCaretSelection;
- (id)_textSelectingContainer;
- (void)selectAll;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateInsertionPointStateAndRestartTimer:(bool)arg1;
- (id)linkTextAttributes;
- (void)setLayoutOrientation:(long long)arg1;
- (long long)layoutOrientation;
- (void)setTextContainer:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 avoidAdditionalLayout:(bool)arg2;
- (bool)isHorizontallyResizable;
- (struct CGSize { double x1; double x2; })minSize;
- (void)invalidateTextContainerOrigin;
- (void)setConstrainedFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textContainerInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 glyphPosition:(struct CGPoint { double x1; double x2; })arg5 characterIndex:(unsigned long long)arg6;
- (long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
- (unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const long long*)arg3 characterIndexes:(const unsigned long long*)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (void)textInputDidChangeSelection:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textInput:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 toCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)textInputDidChange:(id)arg1;
- (void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2;
- (bool)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)_hasDictationPlaceholder;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedRange;
- (struct CGPoint { double x1; double x2; })_textContainerOrigin;
- (id)_textStorage;
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
- (bool)_clearOnEditIfNeeded;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_unobscuredSecureRange;
- (struct CGPoint { double x1; double x2; })textContainerOrigin;
- (id)_layoutManager;
- (void)clearText;
- (bool)hasText;
- (int)atomStyle;
- (bool)drawsAsAtom;
- (void)_scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)inputDelegate;
- (void)setText:(id)arg1 andSetCaretSelectionAfterText:(bool)arg2;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (void)setAttributedText:(id)arg1 andSetCaretSelectionAfterText:(bool)arg2;
- (id)_textContainer;
- (void)_setValue:(id)arg1 forTextAttribute:(id)arg2;
- (id)typingAttributes;
- (void)_obscureLastCharacter;
- (void)setSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_textInputTraits;
- (void)setTypingAttributes:(id)arg1;
- (void)_cancelObscureLastCharacterTimer;
- (id)textInputView;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(bool)arg3;
- (int)scrollYOffset;
- (void)cancelAutoscroll;
- (int)scrollXOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (id)textColor;
- (id)textInputTraits;
- (void)scrollSelectionToVisible:(bool)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (bool)keyboardInputChanged:(id)arg1;
- (bool)keyboardInputShouldDelete:(id)arg1;
- (bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3;
- (id)interactionAssistant;
- (bool)_isPasscodeStyle;
- (bool)_shouldObscureInput;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (void)_performWhileSuppressingDelegateNotifications:(id)arg1;
- (void)becomeFieldEditorForView:(id)arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forContentView:(id)arg2;
- (bool)isEditing;
- (id)font;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)setStyle:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (void)setAutoscrollContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })autoscrollContentOffset;
- (id)_responderForBecomeFirstResponder;
- (bool)isFirstResponder;
- (id)proxiedView;
- (id)style;
- (void)setText:(id)arg1;
- (id)text;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderExternalTouchRectForWindow:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)undoManager;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_deleteBackwardAndNotify:(bool)arg1;

@end
