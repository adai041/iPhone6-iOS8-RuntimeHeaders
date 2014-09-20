/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextInputTraits, UIView;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate> {
    UIView *m_snapshot;
    UITextInputTraits *m_defaultTraits;
    boolm_typingDisabled;
    boolm_minimized;
    boolm_respondingToImplGeometryChange;
    long long m_orientation;
    long long m_idiom;
    boolm_hasExplicitOrientation;
}

@property bool caretBlinks;
@property bool caretVisible;
@property long long keyboardIdiom;
@property bool typingEnabled;
@property(getter=isMinimized) bool minimized;
@property bool showsCandidatesInline;

+ (bool)splitKeyboardEnabled;
+ (bool)shouldMinimizeForHardwareKeyboard;
+ (bool)respondsToProxGesture;
+ (bool)isOnScreen;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrameForInterfaceOrientation:(long long)arg1;
+ (void)initImplementationNow;
+ (void)_clearActiveKeyboard;
+ (void)makeKeyboardActive:(id)arg1 forScreen:(id)arg2;
+ (void)clearActiveForScreen:(id)arg1;
+ (id)activeKeyboardForScreen:(id)arg1;
+ (void)removeAllDynamicDictionaries;
+ (bool)isInHardwareKeyboardMode;
+ (struct CGSize { double x1; double x2; })keyboardSizeForInterfaceOrientation:(long long)arg1;
+ (struct CGSize { double x1; double x2; })defaultSizeForInterfaceOrientation:(long long)arg1;
+ (struct CGSize { double x1; double x2; })sizeForInterfaceOrientation:(long long)arg1;
+ (id)activeKeyboard;
+ (struct CGSize { double x1; double x2; })defaultSize;

- (void)setKeyboardIdiom:(long long)arg1;
- (long long)keyboardIdiom;
- (void)setShowsCandidatesInline:(bool)arg1;
- (bool)showsCandidatesInline;
- (void)_setPasscodeOutlineAlpha:(double)arg1;
- (id)targetWindow;
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;
- (void)setShowPredictionBar:(bool)arg1;
- (bool)showPredictionBar;
- (void)displayLayer:(id)arg1;
- (void)setTypingEnabled:(bool)arg1;
- (bool)typingEnabled;
- (id)defaultTextInputTraits;
- (bool)hasAutocorrectPrompt;
- (void)setOrientation:(long long)arg1;
- (id)initLazily;
- (id)initWithDefaultSize;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(bool)arg2;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(bool)arg2;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })geometryForImplHeightDelta:(double)arg1;
- (void)maximize;
- (void)minimize;
- (void)keyboardMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })geometryForMinimize:(bool)arg1;
- (void)setDisableInteraction:(bool)arg1;
- (bool)disableInteraction;
- (void)setCursorLocation:(long long)arg1;
- (long long)cursorLocation;
- (void)takeSnapshot;
- (void)clearSnapshot;
- (bool)isActivePerScreen;
- (void)clearActivePerScreenIfNeeded;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lazily:(bool)arg2;
- (void)autoAdjustOrientationForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)autoAdjustOrientation;
- (bool)caretVisible;
- (bool)returnKeyEnabled;
- (void)responseContextDidChange;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)setCorrectionLearningAllowed:(bool)arg1;
- (bool)caretBlinks;
- (bool)canDismiss;
- (void)setMinimized:(bool)arg1;
- (void)_resizeForKeyplaneSize:(struct CGSize { double x1; double x2; })arg1 splitWidthsChanged:(bool)arg2;
- (void)removeAutocorrectPrompt;
- (void)setReturnKeyEnabled:(bool)arg1;
- (void)setCaretVisible:(bool)arg1;
- (void)geometryChangeDone:(bool)arg1;
- (void)prepareForGeometryChange;
- (bool)shouldSaveMinimizationState;
- (bool)isMinimized;
- (void)acceptAutocorrection;
- (int)textEffectsVisibilityLevel;
- (void)_setRenderConfig:(id)arg1;
- (void)activate;
- (void)setCaretBlinks:(bool)arg1;
- (void)updateLayout;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)deactivate;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)_moveWithEvent:(id)arg1;
- (bool)canHandleEvent:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_deactivateForBackgrounding;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (long long)interfaceOrientation;
- (bool)isActive;
- (id)delegate;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)didMoveToWindow;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)manualKeyboardWasOrderedOut;
- (void)manualKeyboardWillBeOrderedOut;
- (void)manualKeyboardWasOrderedIn;
- (void)manualKeyboardWillBeOrderedIn;
- (void)_acceptCurrentCandidate;
- (void)_setInputMode:(id)arg1;
- (id)_typeCharacter:(id)arg1 withError:(struct CGPoint { double x1; double x2; })arg2 shouldTypeVariants:(bool)arg3 baseKeyForVariants:(bool)arg4;
- (id)_touchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setSplit:(bool)arg1;
- (void)_setUndocked:(bool)arg1;
- (void)_changeToKeyplane:(id)arg1;
- (id)_keyplaneNamed:(id)arg1;
- (id)_keyplaneForKey:(id)arg1;
- (id)_baseKeyForRepresentedString:(id)arg1;
- (long long)_positionInCandidateList:(id)arg1;
- (bool)_hasCandidates;
- (id)_getAutocorrection;
- (void)_setAutocorrects:(bool)arg1;
- (id)_getLocalizedInputMode;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
- (bool)_isAutomaticKeyboard;

@end
