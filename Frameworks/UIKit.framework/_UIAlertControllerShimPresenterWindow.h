/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIAlertController;

@interface _UIAlertControllerShimPresenterWindow : UIWindow  {
    UIAlertController *_alertController;
}

@property(retain,readonly) UIAlertController * alertController;

+ (bool)_isSystemWindow;

- (id)_presentationViewController;
- (void)presentAlertController:(id)arg1 animated:(bool)arg2 completionBlock:(id)arg3;
- (id)alertController;
- (id)init;
- (void)dealloc;

@end
