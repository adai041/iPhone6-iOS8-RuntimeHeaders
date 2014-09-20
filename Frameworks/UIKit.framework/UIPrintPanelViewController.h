/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPrintInfo, UIPrintPaper, NSArray, UINavigationController, NSString, UIWindow, UIPopoverController, UIViewController, UIPrintPanelTableViewController, UIPrintInteractionController, PKPrinter;

@interface UIPrintPanelViewController : NSObject <UIPrinterBrowserOwner> {
    UIPrintInteractionController *_printInteractionController;
    UIPrintInfo *_observedPrintInfo;
    UINavigationController *_navigationController;
    UIPrintPanelTableViewController *_tableViewController;
    UIViewController *_parentController;
    UIPopoverController *_poverController;
    UIWindow *_window;
    PKPrinter *_printer;
    bool_dismissed;
    bool_animated;
    bool_observingRotation;
    bool_parentHasNoPopover;
}

@property(retain) PKPrinter * printer;
@property(readonly) long long pageCount;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } pageRange;
@property bool duplex;
@property(readonly) NSArray * paperList;
@property(retain) UIPrintPaper * paper;
@property long long copies;
@property(readonly) bool showDuplex;
@property(readonly) bool showPageRange;
@property(readonly) bool showCopies;
@property(readonly) bool showPaper;
@property(readonly) bool showPaperSelection;
@property(readonly) bool showPrinterWarning;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)showPaperSelection;
- (bool)showPrinterWarning;
- (bool)showCopies;
- (bool)showDuplex;
- (void)startPrinting;
- (void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)presentPrintPanelFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (void)presentPrintPanelAnimated:(bool)arg1;
- (id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2;
- (bool)showPaper;
- (id)paperList;
- (void)setPaper:(id)arg1;
- (id)paper;
- (id)_removeRollsFrom:(id)arg1;
- (void)setPageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pageRange;
- (bool)showPageRange;
- (void)dismissPrintPanel:(bool)arg1 animated:(bool)arg2;
- (void)setCopies:(long long)arg1;
- (long long)copies;
- (void)setDuplex:(bool)arg1;
- (bool)duplex;
- (long long)pageCount;
- (void)controllerDidDisappear;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setPrinter:(id)arg1;
- (id)printer;
- (void)cancelPrinting;
- (bool)filtersPrinters;
- (void)dismissAnimated:(bool)arg1;
- (void)_presentInParentAnimated:(bool)arg1;
- (void)_keyWindowWillRotate:(id)arg1;
- (void)_presentWindow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;

@end
