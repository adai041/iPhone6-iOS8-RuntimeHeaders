/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILongPressGestureRecognizer, NSString, UITextChecker, _UITextServiceSession, UITapGestureRecognizer;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant  {
    long long _selectionOperation;
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    UITextChecker *_textChecker;
    unsigned long long _options;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _caretBeforeTap;
    NSString *_wordBeforeTap;
    UITapGestureRecognizer *_singleTapGesture;
    UILongPressGestureRecognizer *_loupeGesture;
}

@property(retain,readonly) UITapGestureRecognizer * singleTapGesture;
@property(retain,readonly) UILongPressGestureRecognizer * loupeGesture;


- (void)showTextServiceFor:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)hideTextStyleOptions;
- (void)showTextStyleOptions;
- (void)scheduleReplacementsForText:(id)arg1;
- (void)scheduleChineseTransliterationForText:(id)arg1;
- (void)selectWithTapGestureAt:(struct CGPoint { double x1; double x2; })arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)selectTextForReplacement:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)showReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (bool)shouldTryReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)scheduleReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)selectionChangedWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(long long)arg2;
- (void)selectionChangedWithGestureAt:(struct CGPoint { double x1; double x2; })arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)showDictionaryFor:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)selectionChangedWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (void)selectionChangedWithGestureAt:(struct CGPoint { double x1; double x2; })arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4;
- (void)rangeSelectionMoved:(struct CGPoint { double x1; double x2; })arg1 withTouchPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)rangeSelectionEnded:(struct CGPoint { double x1; double x2; })arg1;
- (void)rangeSelectionStarted:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containerAllowsSelection;
- (bool)requiresImmediateUpdate;
- (bool)containerAllowsSelectionTintOnly;
- (void)updateWithMagnifierTerminalPoint:(bool)arg1;
- (void)scrollSelectionToVisible;
- (id)_asText;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)loupeGesture:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)twoFingerSingleTap:(id)arg1;
- (void)oneFingerTripleTap:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerDoubleTap:(id)arg1;
- (bool)containerIsPlainStyleAtom;
- (bool)containerIsAtom;
- (bool)containerIsBrowserView;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)singleTapGesture;
- (id)loupeGesture;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (void)selectWord;
- (void)selectAll:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)selectionChanged;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;

@end
