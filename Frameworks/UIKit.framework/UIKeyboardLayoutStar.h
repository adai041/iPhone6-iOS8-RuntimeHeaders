/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, UIKBBackgroundView, UISwipeGestureRecognizer, UIKeyboardKeyplaneTransition, UIKeyboardSplitTransitionView, UIView, NSString, UIKBRenderConfig, UIKBTree, UIDelayedAction, NSMutableSet, UIKBKeyplaneView, NSTimer, CADisplayLink, _UIKeyboardTypingSpeedLogger;

@interface UIKeyboardLayoutStar : UIKeyboardLayout  {
    UIKBTree *_keyboard;
    UIKBTree *_keyplane;
    NSString *_keyboardName;
    NSString *_keyplaneName;
    long long _appearance;
    UIKBTree *_activeKey;
    UIKBKeyplaneView *_keyplaneView;
    UIKBBackgroundView *_backgroundView;
    double _prevTouchUpTime;
    double _prevTouchDownTime;
    int _prevUpActions;
    NSMutableDictionary *_keyboards;
    NSMutableDictionary *_allKeyplaneViews;
    NSMutableSet *_allKeyplaneKeycaps;
    NSMutableSet *_validInputStrings;
    NSString *_localizedInputKey;
    struct __CFDictionary { } *_extendedTouchInfoMap;
    int _preferredTrackingChangeCount;
    int _shiftTrackingChangeCount;
    NSMutableSet *_accentInfo;
    NSMutableSet *_hasAccents;
    id _spaceTarget;
    SEL _spaceAction;
    SEL _spaceLongAction;
    id _returnTarget;
    SEL _returnAction;
    SEL _returnLongAction;
    id _deleteTarget;
    SEL _deleteAction;
    SEL _deleteLongAction;
    bool_shift;
    bool_autoshift;
    bool_settingShift;
    bool_didLongPress;
    NSString *_preTouchKeyplaneName;
    bool_revertKeyplaneAfterTouch;
    bool_wasShifted;
    bool_swipeDetected;
    bool_showIntlKey;
    bool_showDictationKey;
    bool_suppressDeactivateKeys;
    bool_shiftLockReady;
    double _shiftLockFirstTapTime;
    UISwipeGestureRecognizer *_rightSwipeRecognizer;
    UISwipeGestureRecognizer *_leftSwipeRecognizer;
    UISwipeGestureRecognizer *_upSwipeRecognizer;
    UIKeyboardKeyplaneTransition *_keyplaneTransition;
    UIKeyboardSplitTransitionView *_transitionView;
    double _initialSplitProgress;
    double _finalSplitProgress;
    double _initialPinchSeparation;
    double _pinchSeparationValues[4];
    bool_pinchDetected;
    double _autoSplitLastUpdate;
    double _autoSplitElapsedTime;
    CADisplayLink *_displayLink;
    bool_ghostKeysEnabled;
    UIDelayedAction *_delayedCentroidUpdate;
    bool_isRebuilding;
    long long _initialBias;
    bool_edgeSwipeDetected;
    bool_edgeSwipeInhibited;
    double _initialEdgeTranslation;
    double _edgeSwipeProgress;
    double _edgeSwipeVelocity;
    NSString *_layoutTag;
    bool_preRotateShift;
    NSString *_preRotateKeyplaneName;
    UIDelayedAction *_multitapAction;
    bool_unshiftAfterMultitap;
    int _multitapCount;
    UIKBTree *_multitapKey;
    UIView *_flickPopupView;
    NSMutableDictionary *_compositeImages;
    NSTimer *_flickPopuptimer;
    id _touchInfo;
    UIView *_dimKeyboardImageView;
    bool_keyboardImageViewIsDim;
    bool_isOutOfBounds;
    NSMutableSet *_keysUnderIndicator;
    _UIKeyboardTypingSpeedLogger *_typingSpeedLogger;
    int playKeyClickSoundOn;
    UIKBRenderConfig *_renderConfig;
}

@property(readonly) UIKBTree * keyboard;
@property(readonly) UIKBTree * keyplane;
@property(copy) NSString * keyboardName;
@property(copy) NSString * keyplaneName;
@property(readonly) NSString * localizedInputMode;
@property(copy) NSString * localizedInputKey;
@property(retain) UIKBTree * activeKey;
@property bool shift;
@property bool autoShift;
@property bool didLongPress;
@property(getter=isRotating,readonly) bool rotating;
@property(readonly) bool showsInternationalKey;
@property(readonly) bool showsDictationKey;
@property(copy) NSString * preTouchKeyplaneName;
@property(retain) UIKBRenderConfig * renderConfig;
@property(retain) NSString * layoutTag;
@property int playKeyClickSoundOn;

+ (id)sharedRivenKeyplaneGenerator;
+ (id)keyboardWithName:(id)arg1 screenTraits:(id)arg2;
+ (id)keyboardFromFactoryWithName:(id)arg1 screen:(id)arg2;
+ (void)accessibilitySensitivityChanged;
+ (struct CGSize { double x1; double x2; })keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2;
+ (Class)_subclassForScreenTraits:(id)arg1;

- (id)localizedInputKey;
- (void)setDidLongPress:(bool)arg1;
- (bool)didLongPress;
- (void)setAutoShift:(bool)arg1;
- (bool)autoShift;
- (bool)shift;
- (void)setKeyboardName:(id)arg1;
- (id)currentKeyplaneView;
- (void)handleDelayedCentroidUpdate;
- (struct CGImage { }*)renderedKeyplaneWithToken:(id)arg1 split:(bool)arg2;
- (struct CGPoint { double x1; double x2; })applyError:(struct CGPoint { double x1; double x2; })arg1 toKey:(id)arg2;
- (bool)keyHasAccentedVariants:(id)arg1;
- (void)cancelTouchIfNecessaryForInfo:(id)arg1;
- (void)swipeDetected:(id)arg1;
- (void)updateShiftKeyState;
- (void)handleKeyboardMenusForTouch:(id)arg1;
- (void)fadeMenu:(id)arg1 forKey:(id)arg2 withDelay:(double)arg3;
- (void)upActionShift;
- (void)fadeMenu:(id)arg1 forKey:(id)arg2;
- (void)continueFromInternationalActionForTouchUp:(id)arg1 withActions:(long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(bool)arg5 prevActions:(long long)arg6 executionContext:(id)arg7;
- (bool)shouldYieldToControlCenterForFlickWithInitialPoint:(struct CGPoint { double x1; double x2; })arg1 finalPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)completeSendStringActionForTouchUp:(id)arg1 withActions:(long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(bool)arg5 prevActions:(long long)arg6 executionContext:(id)arg7;
- (bool)shouldSendStringForFlick:(id)arg1;
- (void)touchMultitapTimer;
- (bool)shouldSendTouchUpToRecorder:(id)arg1;
- (bool)shouldSendTouchUpToInputManager:(id)arg1;
- (void)completeRetestForTouchUp:(id)arg1 timestamp:(double)arg2 interval:(double)arg3 executionContext:(id)arg4;
- (id)activeTouchForInteraction:(int)arg1;
- (bool)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2;
- (void)refreshGhostKeyState;
- (bool)predictionGestureDetectedForTouchInfo:(id)arg1;
- (unsigned int)upActionFlagsForKey:(id)arg1;
- (void)completeHitTestForTouchDragged:(id)arg1 hitKey:(id)arg2;
- (bool)touchPassesDragThreshold:(id)arg1;
- (void)interpretTouchesForSplit;
- (void)interpretTouchesForEdgeSwipe;
- (bool)edgeSwipeGestureEnabled;
- (void)completeDeleteActionForTouchDownWithActions:(unsigned long long)arg1 executionContext:(id)arg2;
- (id)infoForTouch:(id)arg1;
- (void)downActionShiftWithKey:(id)arg1;
- (id)keyplaneNameForRevertAfterTouch;
- (id)preTouchKeyplaneName;
- (void)completeSendStringActionForTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3;
- (void)incrementPunctuationIfNeeded:(id)arg1;
- (id)createKeyEventForStringAction:(id)arg1 forKey:(id)arg2 isPopupVariant:(bool)arg3 isMultitap:(bool)arg4 isFlick:(bool)arg5;
- (void)completeCommitTouchesPrecedingTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3;
- (bool)shouldCommitPrecedingTouchesForTouchDownWithActions:(unsigned long long)arg1;
- (void)playKeyClickSound;
- (void)hideMenu:(id)arg1 forKey:(id)arg2;
- (bool)shouldSkipResponseToGlobeKey:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (int)playKeyClickSoundOn;
- (void)touchDownWithKey:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 executionContext:(id)arg3;
- (void)clearInfoForTouch:(id)arg1;
- (void)performHitTestForTouchInfo:(id)arg1 touchStage:(int)arg2 executionContextPassingUIKBTree:(id)arg3;
- (void)completeHitTestForTouchDown:(id)arg1 executionContext:(id)arg2;
- (id)generateInfoForTouch:(id)arg1;
- (void)_autoSplit:(id)arg1;
- (void)finishSplitTransition;
- (void)finishSplit;
- (double)interpretPinchSeparationValues;
- (void)setPlayKeyClickSoundOn:(int)arg1;
- (void)prepareForSplitTransition;
- (void)rebuildKeyplaneTransitionWithTargetBias:(long long)arg1;
- (long long)currentKeyboardBias;
- (id)keyboardLayoutWithBias:(long long)arg1;
- (void)finishHandBiasTransition;
- (long long)biasForKeyboard:(id)arg1;
- (id)_keyplaneVariantsKeyForString:(id)arg1;
- (void)showMenu:(id)arg1 forKey:(id)arg2;
- (id)touchForKey:(id)arg1;
- (void)showPopupVariantsForKey:(id)arg1;
- (unsigned int)downActionFlagsForKey:(id)arg1;
- (void)clearHandwritingStrokesIfNeededAndNotify:(bool)arg1;
- (id)activeMultitapCompleteKey;
- (void)handleMultitapTimerFired;
- (void)multitapExpired;
- (void)multitapInterrupted;
- (id)multitapCompleteKeys;
- (bool)handwritingPlane;
- (bool)isLongPressedKey:(id)arg1;
- (id)activeKey;
- (int)keycodeForKey:(id)arg1;
- (bool)shouldPreventInputManagerHitTestingForKey:(id)arg1;
- (id)keyHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)keyHitTestWithoutCharging:(struct CGPoint { double x1; double x2; })arg1;
- (id)keyHitTestClosestToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)keyHitTestContainingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldHitTestKey:(id)arg1;
- (id)initialKeyplaneNameWithKBStarName:(id)arg1;
- (void)setKeyboardName:(id)arg1 appearance:(long long)arg2;
- (bool)shouldMergeKey:(id)arg1;
- (bool)supportStylingWithKey:(id)arg1;
- (void)updateTransitionWithFlags:(int)arg1;
- (void)rebuildSplitTransitionView;
- (void)updateGlobeKeyDisplayString;
- (void)updateCachedKeyplaneKeycaps;
- (void)updateLayoutTags;
- (int)stateForManipulationKey:(id)arg1;
- (int)stateForStylingKey:(id)arg1;
- (int)stateForDictationKey:(id)arg1;
- (int)stateForMultitapReverseKey:(id)arg1;
- (int)stateForKeyplaneSwitchKey:(id)arg1;
- (int)stateForShiftKey:(id)arg1;
- (id)defaultKeyplaneForKeyplane:(id)arg1;
- (id)cacheIdentifierForKeyplaneNamed:(id)arg1;
- (id)cacheTokenForKeyplane:(id)arg1;
- (void)updateMoreAndInternationalKeys;
- (void)updateKeyboardForKeyplane:(id)arg1;
- (bool)useScaledGeometrySet;
- (id)splitNameForKeyplane:(id)arg1;
- (bool)canReuseKeyplaneView;
- (bool)shouldShowDictationKey;
- (int)stateForKey:(id)arg1;
- (struct CGImage { }*)renderedImageWithStateFallbacksForToken:(id)arg1;
- (struct CGImage { }*)cachedCompositeImageWithCacheKey:(id)arg1;
- (void)updateLocalizedKeysOnKeyplane:(id)arg1;
- (void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (int)displayTypeHintForMoreKey;
- (int)displayTypeHintForShiftKey;
- (void)refreshForRivenPreferences;
- (void)setKeyplaneName:(id)arg1;
- (void)setLocalizedInputKey:(id)arg1;
- (void)updateBackgroundIfNeeded;
- (int)visualStyleForKeyboardIfSplit:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1 onKeyplaneName:(id)arg2;
- (id)splitNameForKeyplaneName:(id)arg1;
- (id)defaultNameForKeyplaneName:(id)arg1;
- (void)flushKeyCache:(id)arg1;
- (void)setPreTouchKeyplaneName:(id)arg1;
- (void)setActiveKey:(id)arg1;
- (void)clearAllTouchInfo;
- (void)cancelDelayedCentroidUpdate;
- (void)accessibilitySensitivityChanged;
- (void)cancelMultitapTimer;
- (void)uninstallGestureRecognizers;
- (void)refreshForDictationAvailablityDidChange;
- (id)keyplane;
- (bool)showsDictationKey;
- (bool)showsInternationalKey;
- (struct CGImage { }*)renderedImageWithToken:(id)arg1;
- (void)installGestureRecognizers;
- (void)deactivateActiveKeysClearingTouchInfo:(bool)arg1 clearingDimming:(bool)arg2;
- (bool)performSpaceAction;
- (bool)canForceTouchCommit:(id)arg1;
- (void)touchCancelled:(id)arg1 executionContext:(id)arg2;
- (void)touchUp:(id)arg1 executionContext:(id)arg2;
- (void)touchDragged:(id)arg1 executionContext:(id)arg2;
- (void)touchDown:(id)arg1 executionContext:(id)arg2;
- (SEL)handlerForNotification:(id)arg1;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint { double x1; double x2; })arg2 shouldTypeVariants:(bool)arg3 baseKeyForVariants:(bool)arg4;
- (id)simulateTouch:(struct CGPoint { double x1; double x2; })arg1;
- (void)changeToKeyplane:(id)arg1;
- (id)keyplaneNamed:(id)arg1;
- (id)keyplaneForKey:(id)arg1;
- (id)baseKeyForString:(id)arg1;
- (void)setPasscodeOutlineAlpha:(double)arg1;
- (id)localizedInputMode;
- (id)keyboardName;
- (id)keyplaneName;
- (void)finishSplitTransitionWithProgress:(double)arg1;
- (void)setSplit:(bool)arg1 animated:(bool)arg2;
- (void)updateLocalizedKeys:(bool)arg1;
- (bool)isShiftKeyBeingHeld;
- (bool)isShiftKeyPlaneChooser;
- (bool)ignoresShiftState;
- (void)setReturnKeyEnabled:(bool)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (double)hitBuffer;
- (bool)canProduceString:(id)arg1;
- (void)longPressAction;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)updateBackgroundCorners;
- (void)restoreDefaultsForAllKeys;
- (void)didClearInput;
- (void)triggerSpaceKeyplaneSwitchIfNecessary;
- (bool)usesAutoShift;
- (void)setTextEditingTraits:(id)arg1;
- (unsigned long long)textEditingKeyMask;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)updateKeyCentroids;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)deleteHandwritingStrokesAtIndexes:(id)arg1;
- (void)fadeWithInvocation:(id)arg1;
- (void)setAutoshift:(bool)arg1;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (id)currentKeyplane;
- (bool)performReturnAction;
- (void)didRotate;
- (void)willRotate;
- (id)keyboard;
- (void)setHideKeysUnderIndicator:(bool)arg1;
- (id)activationIndicatorView;
- (bool)shouldShowIndicator;
- (void)showSplitTransitionView:(bool)arg1;
- (bool)pinchSplitGestureEnabled;
- (void)setSplitProgress:(double)arg1;
- (bool)pinchDetected;
- (struct CGSize { double x1; double x2; })dragGestureSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (void)setLayoutTag:(id)arg1;
- (id)layoutTag;
- (bool)isAlphabeticPlane;
- (bool)canMultitap;
- (bool)hasAccentKey;
- (bool)hasCandidateKeys;
- (void)deactivateActiveKeys;
- (void)clearUnusedObjects:(bool)arg1;
- (id)candidateList;
- (void)setRenderConfig:(id)arg1;
- (id)renderConfig;
- (void)logHandwritingData;
- (void)setKeyboardAppearance:(long long)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)willMoveToWindow:(id)arg1;
- (id)scriptingInfoWithChildren;
- (double)lastTouchUpTimestamp;
- (bool)isRotating;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)removeFromSuperview;
- (void)setShift:(bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKeyForTouchInfo:(id)arg1 key:(id)arg2;
- (id)popupKeyViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLastKeyWithRepresentedString:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForKeyWithRepresentedString:(id)arg1;
- (id)keyWithRepresentedString:(id)arg1;
- (id)overlayCharacterImageForKey:(id)arg1 direction:(int)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 flickString:(id)arg4 popupInfo:(id)arg5;
- (id)getPopupBackgroundImageForKey:(id)arg1 direction:(int)arg2 popupInfo:(id)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)getFlickCompositeImageForKey:(id)arg1 direction:(int)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)handleDismissFlickView;
- (void)handlePopupView;
- (void)setCompositeImage:(id)arg1 forKey:(id)arg2;
- (id)compositeImageForKey:(id)arg1;
- (void)activateCompositeKey:(id)arg1 direction:(int)arg2 flickString:(id)arg3 popupInfo:(id)arg4;
- (void)populateFlickPopupsForKey:(id)arg1;
- (void)showFlickView:(int)arg1 withKey:(id)arg2 flickString:(id)arg3;
- (void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(bool)arg4;
- (id)flickStringForInputKey:(id)arg1 direction:(int)arg2;
- (void)handleFlick:(id)arg1;
- (void)handlePopupView:(id)arg1;
- (id)flickPopupStringForKey:(id)arg1 withString:(id)arg2;
- (void)setKeyboardDim:(bool)arg1 amount:(double)arg2 withDuration:(double)arg3;
- (void)setKeyboardDim:(bool)arg1;
- (void)handleDismissFlickView:(id)arg1;
- (void)setDisableInteraction:(bool)arg1;
- (void)_resizeForKeyplaneSize:(struct CGSize { double x1; double x2; })arg1 splitWidthsChanged:(bool)arg2;

@end
