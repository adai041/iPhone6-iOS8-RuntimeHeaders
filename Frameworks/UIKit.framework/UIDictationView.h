/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardDicationBackground, _UISiriWaveyView, UIDictationMeterView, NSString, UIButton;

@interface UIDictationView : UIView <_UISiriWaveyViewDelegate> {
    UIKeyboardDicationBackground *_background;
    UIButton *_endpointButton;
    UIButton *_endpointButtonLandscape;
    UIButton *_waveTapEndpointButton;
    int _state;
    bool_keyboardInTransition;
    bool_automaticAppearanceWasEnabled;
    _UISiriWaveyView *_waveyView;
    UIDictationMeterView *_meterView;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (struct CGSize { double x1; double x2; })viewSize;
+ (Class)dictationViewClass;
+ (struct CGSize { double x1; double x2; })layoutSize;
+ (id)activeInstance;
+ (id)sharedInstance;

- (struct CGPoint { double x1; double x2; })positionForShow;
- (void)applicationEnteredBackground;
- (struct CGSize { double x1; double x2; })currentScreenSize;
- (float)audioLevelForWaveyView:(id)arg1;
- (id)endpointButton;
- (struct CGPoint { double x1; double x2; })backgroundOffset;
- (id)createEndpointButtonWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 action:(SEL)arg2;
- (void)endpointButtonPressed;
- (bool)drawsOwnBackground;
- (void)returnToKeyboard;
- (bool)isShowing;
- (void)prepareForReturnToKeyboard;
- (id)endpointButtonImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pressed:(bool)arg2;
- (void)finishReturnToKeyboard;
- (void)highlightEndpointButton;
- (void)applicationWillResignActive;
- (bool)visible;
- (void)keyboardDidShow:(id)arg1;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (void)setState:(int)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)show;

@end
