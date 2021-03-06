/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class TITextInputTraits, TIDocumentState;

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding> {
    TIDocumentState *_documentState;
    TITextInputTraits *_textInputTraits;
}

@property(retain) TIDocumentState * documentState;
@property(retain) TITextInputTraits * textInputTraits;

+ (id)stateForKeyboardState:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)createDocumentStateIfNecessary;
- (void)setDocumentState:(id)arg1;
- (id)documentState;
- (void)setTextInputTraits:(id)arg1;
- (id)textInputTraits;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
