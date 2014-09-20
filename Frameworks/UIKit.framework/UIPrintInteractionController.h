/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIPrintInfo, UIPrintPaper, NSArray, UIPrintFormatter, UIPrintPageRenderer, PKPrinter, <UIPrintInteractionControllerDelegate>;

@interface UIPrintInteractionController : NSObject  {
    bool_hidesNumberOfCopies;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    unsigned long long _backgroundTaskIdentifier;
    id _printState;
    bool_showsPageRange;
    bool_showsPaperSelectionForLoadedPapers;
    UIPrintInfo *_printInfo;
    <UIPrintInteractionControllerDelegate> *_delegate;
    UIPrintPaper *_printPaper;
    UIPrintPageRenderer *_printPageRenderer;
    UIPrintFormatter *_printFormatter;
    id _printingItem;
    NSArray *_printingItems;
    <UIPrintInteractionControllerDelegate> *_printActivityDelegate;
}

@property(retain) UIPrintInfo * printInfo;
@property <UIPrintInteractionControllerDelegate> * delegate;
@property bool showsPageRange;
@property bool showsNumberOfCopies;
@property bool showsPaperSelectionForLoadedPapers;
@property(readonly) UIPrintPaper * printPaper;
@property(retain) UIPrintPageRenderer * printPageRenderer;
@property(retain) UIPrintFormatter * printFormatter;
@property(copy) id printingItem;
@property(copy) NSArray * printingItems;
@property <UIPrintInteractionControllerDelegate> * printActivityDelegate;
@property(readonly) long long pageCount;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } pageRange;
@property(retain) PKPrinter * printer;
@property(retain) UIPrintPaper * paper;

+ (bool)canPrintData:(id)arg1;
+ (bool)canPrintURL:(id)arg1;
+ (id)printableUTIs;
+ (id)sharedPrintController;
+ (bool)isPrintingAvailable;

- (oneway void)release;
- (void)setPrintActivityDelegate:(id)arg1;
- (id)printActivityDelegate;
- (void)setPrintingItems:(id)arg1;
- (id)printingItems;
- (void)setPrintFormatter:(id)arg1;
- (id)printFormatter;
- (id)printPaper;
- (void)setShowsPaperSelectionForLoadedPapers:(bool)arg1;
- (bool)showsPaperSelectionForLoadedPapers;
- (void)setShowsPageRange:(bool)arg1;
- (bool)showsPageRange;
- (void)setPrintInfo:(id)arg1;
- (void)setShowsNumberOfCopies:(bool)arg1;
- (bool)showsNumberOfCopies;
- (bool)printToPrinter:(id)arg1 completionHandler:(id)arg2;
- (void)setPrintingItem:(id)arg1;
- (id)_printItem:(id)arg1;
- (id)_printPageRenderer:(id)arg1;
- (void)_printPage;
- (void)_preparePrintInfo;
- (id)_paperForContentType:(long long)arg1;
- (void)_startPrinting;
- (void)_updatePrintPaper;
- (id)_paperForPDFItem:(id)arg1 withDuplexMode:(long long)arg2;
- (id)printingItem;
- (void)_endPrintJob:(bool)arg1 error:(id)arg2;
- (void)_setPrintInfoState:(int)arg1;
- (bool)_setupPrintPanel:(id)arg1;
- (void)_cleanPrintState;
- (bool)_canShowPaperList;
- (bool)_canShowCopies;
- (bool)_canShowPageRange;
- (bool)_canShowDuplex;
- (void)setPaper:(id)arg1;
- (id)paper;
- (struct CGSize { double x1; double x2; })_printItemContentSize;
- (void)setPageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pageRange;
- (void)_updatePageCount;
- (void)_printPanelDidDismiss;
- (void)_printPanelWillDismiss:(bool)arg1;
- (void)_printPanelDidPresent;
- (id)_currentPrintInfo;
- (id)printPageRenderer;
- (void)setPrintPageRenderer:(id)arg1;
- (bool)presentFromBarButtonItem:(id)arg1 animated:(bool)arg2 completionHandler:(id)arg3;
- (bool)presentAnimated:(bool)arg1 completionHandler:(id)arg2;
- (bool)presentFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3 completionHandler:(id)arg4;
- (id)printInfo;
- (long long)pageCount;
- (void)setPrinter:(id)arg1;
- (id)printer;
- (void)dismissAnimated:(bool)arg1;
- (id)_init;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)_cancelManualPrintPage;
- (void)_manualPrintPage;
- (void)_enableManualPrintPage:(bool)arg1;

@end
