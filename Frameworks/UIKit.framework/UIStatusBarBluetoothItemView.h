/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarBluetoothItemView : UIStatusBarItemView  {
    bool_connected;
    bool_shouldAnimateConnection;
}


- (void)_blinkAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (double)alphaForConnected:(bool)arg1;
- (void)performPendedActions;
- (id)contentsImage;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)setVisible:(bool)arg1;

@end
