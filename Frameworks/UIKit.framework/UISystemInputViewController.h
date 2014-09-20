/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSArray, UIKeyboard, UIResponder<UITextInput>;

@interface UISystemInputViewController : UIInputViewController  {
    NSMutableDictionary *_accessoryViews;
    NSMutableDictionary *_accessoryConstraints;
    UIResponder<UITextInput> *_persistentDelegate;
    UIKeyboard *_keyboard;
    NSArray *_keyboardConstraits;
}

@property(retain) UIResponder<UITextInput> * persistentDelegate;
@property(retain) UIKeyboard * keyboard;
@property(retain) NSArray * keyboardConstraits;

+ (bool)_requiresProxyInterface;

- (void)setPersistentDelegate:(id)arg1;
- (void)setAccessoryView:(id)arg1 forEdge:(long long)arg2;
- (id)persistentDelegate;
- (id)constraitsForEdge:(long long)arg1;
- (void)setConstraits:(id)arg1 forEdge:(long long)arg2;
- (void)setKeyboardConstraits:(id)arg1;
- (id)constraintFromView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4;
- (id)keyboardConstraits;
- (id)accessoryViewForEdge:(long long)arg1;
- (void)setKeyboard:(id)arg1;
- (id)_keyboard;
- (id)keyboard;
- (void)updateViewConstraints;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (bool)_disableAutomaticKeyboardBehavior;
- (id)init;
- (void)dealloc;

@end
