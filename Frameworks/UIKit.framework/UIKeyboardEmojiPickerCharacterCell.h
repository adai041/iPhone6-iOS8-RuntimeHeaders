/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIKeyboardEmojiInputController, UIView;

@interface UIKeyboardEmojiPickerCharacterCell : UITableViewCell  {
    NSArray *_characters;
    NSString *_emojiString;
    UIKeyboardEmojiInputController *_inputController;
    UIView *_pressIndicator;
}

@property(retain) NSArray * characters;
@property UIKeyboardEmojiInputController * inputController;
@property(retain) UIView * pressIndicator;

+ (id)emojiFontAttributes;

- (id)characters;
- (void)setCharacters:(id)arg1;
- (void)setPressIndicator:(id)arg1;
- (id)pressIndicator;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
