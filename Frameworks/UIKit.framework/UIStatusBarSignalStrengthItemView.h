/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView  {
    int _signalStrengthRaw;
    int _signalStrengthBars;
    bool_enableRSSI;
    bool_showRSSI;
}


- (id)_stringForRSSI;
- (double)extraRightPadding;
- (id)contentsImage;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end