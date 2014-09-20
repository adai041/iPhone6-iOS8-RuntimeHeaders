/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class PKPrinter;

@interface UIPrinterSetupDisplayPINViewController : UIViewController  {
    PKPrinter *_printer;
}

@property(retain) PKPrinter * printer;


- (void)showDisplayMessage:(long long)arg1;
- (void)enterPIN;
- (id)initWithPrinter:(id)arg1;
- (void)setPrinter:(id)arg1;
- (id)printer;
- (void)viewDidAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;

@end
