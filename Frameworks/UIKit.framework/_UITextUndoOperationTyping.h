/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableAttributedString;

@interface _UITextUndoOperationTyping : NSUndoTextOperation  {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _replacementRange;
    NSMutableAttributedString *_attributedString;
}


- (bool)supportsCoalescing;
- (void)undoRedo;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inputController:(id)arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)coalesceAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 textStorage:(id)arg4;
- (void)dealloc;

@end
