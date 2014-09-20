/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMRange, UIResponder<UITextInputPrivate>, UITextRange;

@interface UITextSelection : NSObject  {
    UIResponder<UITextInputPrivate> *_document;
    long long _granularity;
    UITextRange *_selectedRange;
    UITextRange *_base;
    UITextRange *_initialExtent;
    bool_isCommitting;
}

@property(readonly) UIResponder<UITextInputPrivate> * document;
@property(retain) UITextRange * selectedRange;
@property long long granularity;
@property(readonly) bool isCommitting;
@property(retain) UITextRange * base;
@property(retain) UITextRange * initialExtent;
@property(getter=_domRange,readonly) DOMRange * domRange;


- (bool)pointAtStartOfLine:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)offsetInMarkedText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })closestCaretRectForPoint:(struct CGPoint { double x1; double x2; })arg1 inSelection:(bool)arg2;
- (id)initialExtent;
- (void)setInitialExtent:(id)arg1;
- (void)setBase:(id)arg1;
- (id)base;
- (struct CGPoint { double x1; double x2; })clipPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (bool)isCommitting;
- (bool)setRangedSelectionExtentPoint:(struct CGPoint { double x1; double x2; })arg1 baseIsStart:(bool)arg2 allowFlipping:(bool)arg3;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)smartExtendRangedSelection:(int)arg1 downstream:(bool)arg2;
- (bool)setRangedSelectionExtentPoint:(struct CGPoint { double x1; double x2; })arg1 baseIsStart:(bool)arg2;
- (void)setSelectionWithFirstPoint:(struct CGPoint { double x1; double x2; })arg1 secondPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)_domRange;
- (id)wordContainingCaretSelection;
- (bool)pointAtEndOfLine:(struct CGPoint { double x1; double x2; })arg1;
- (void)moveCaretToBoundaryOfWhitespaceOrLine;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)clearRangedSelectionInitialExtent;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)setGranularity:(long long)arg1;
- (void)alterSelection:(struct CGPoint { double x1; double x2; })arg1 granularity:(long long)arg2;
- (id)selectionRects;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectAtBeginOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectAtEndOfDocument;
- (long long)granularity;
- (bool)hasEditableSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRect;
- (void)collapseSelection;
- (void)clearSelection;
- (id)selectedText;
- (void)selectAll;
- (void)selectionChanged;
- (void)setSelectedRange:(id)arg1;
- (void)commit;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectedRange;
- (void)invalidate;
- (void)dealloc;

@end
