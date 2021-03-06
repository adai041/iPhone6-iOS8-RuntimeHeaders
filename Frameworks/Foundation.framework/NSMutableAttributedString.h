/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableAttributedString : NSAttributedString  {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedString:(id)arg2;
- (void)appendAttributedString:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAttributedString:(id)arg1;
- (void)endEditing;
- (void)beginEditing;
- (id)mutableString;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addAttributesWeakly:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeCharactersWithAttribute:(id)arg1;
- (void)replaceAttribute:(id)arg1 value:(id)arg2 withValue:(id)arg3;
- (void)trimWhitespace;
- (void)replaceNewlinesWithSpaces;
- (void)convertWritingDirectionToBidiControlCharacters;
- (bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (bool)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (void)unscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)subscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)superscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAlignment:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1;
- (void)setBaseWritingDirection:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)fixAttachmentAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixFontAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_setAttributeFixingInProgress:(bool)arg1;
- (bool)_attributeFixingInProgress;
- (void)convertBidiControlCharactersToWritingDirection;
- (bool)_shouldSetOriginalFontAttribute;
- (void)_ui_restoreOriginalFontAttributes;
- (void)setTextColor:(id)arg1 font:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)dd_appendAttributedString:(id)arg1;
- (void)dd_chopResults;
- (void)dd_offsetResultsBy:(long long)arg1;
- (void)dd_urlifyResult:(id)arg1 withBlock:(id)arg2 referenceDate:(id)arg3 context:(id)arg4;
- (void)dd_resetResults;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2;

@end
