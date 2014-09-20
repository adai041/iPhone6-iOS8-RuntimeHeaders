/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIPopoverPresentationControllerDelegate>, <_UIRotatingAlertControllerDelegate>, UIViewController;

@interface _UIRotatingAlertController : UIAlertController  {
    <_UIRotatingAlertControllerDelegate> *_rotatingSheetDelegate;
    unsigned long long _arrowDirections;
    bool_isRotating;
    bool_readyToPresentAfterRotation;
    UIViewController *_presentedViewControllerWhileRotating;
    <UIPopoverPresentationControllerDelegate> *_popoverPresentationControllerDelegateWhileRotating;
}

@property <_UIRotatingAlertControllerDelegate> * rotatingSheetDelegate;
@property unsigned long long arrowDirections;


- (unsigned long long)arrowDirections;
- (id)rotatingSheetDelegate;
- (void)_updateSheetPositionAfterRotation;
- (void)_didRotateAndLayout;
- (bool)presentSheetFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setArrowDirections:(unsigned long long)arg1;
- (bool)presentSheet;
- (void)setRotatingSheetDelegate:(id)arg1;
- (void)doneWithSheet;
- (void)didRotate;
- (void)willRotate;
- (id)init;
- (void)dealloc;

@end