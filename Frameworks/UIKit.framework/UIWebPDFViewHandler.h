/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class WebPDFNSNumberFormatter, NSMapTable, NSDictionary, UIDocumentPasswordView, NSObject<UIWebPDFViewHandlerDelegate>, UIAlertView, UIColor, _UIHighlightView, UIView, UIWebPDFView, _UIRotatingAlertController, NSArray, UIWebPDFLabelView;

@interface UIWebPDFViewHandler : NSObject <UIWebPDFViewPrivateDelegate, UIDocumentPasswordViewDelegate, _UIRotatingAlertControllerDelegate, UIWebPDFViewDelegate, _UIWebDoubleTapDelegate, _UIWebRotationDelegate> {
    UIWebPDFView *_pdfView;
    bool_scalesPageToFit;
    double _initialZoomScale;
    NSObject<UIWebPDFViewHandlerDelegate> *_pdfHandlerDelegate;
    _UIHighlightView *_linkHighlightView;
    UIWebPDFLabelView *_pageLabelView;
    bool_showPageLabels;
    bool_showsShadowsForHTMLContent;
    bool_cachedScrollViewShadowsState;
    UIDocumentPasswordView *_passwordEntryView;
    NSMapTable *_searchControllers;
    UIColor *_backgroundColorForUnRenderedContent;
    bool_hideActivityIndicatorForUnRenderedContent;
    bool_hidePageViewsUntilReadyToRender;
    WebPDFNSNumberFormatter *_labelViewFormatter;
    struct _PDFHistoryItem { 
        boolrestorePending; 
        boolisInitialScale; 
        double zoomScale; 
        struct CGPoint { 
            double x; 
            double y; 
        } contentOffset; 
    } _pendingHistoryItemRestore;
    _UIRotatingAlertController *_linkActionSheet;
    NSDictionary *_linkActionInfo;
    NSArray *_linkActions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _rectOfInterest;
    bool_rectOfInterestConsidersHeight;
    UIAlertView *_currentAlert;
}

@property(readonly) UIWebPDFView * pdfView;
@property(readonly) UIView * frontView;
@property bool scalesPageToFit;
@property bool showPageLabels;
@property NSObject<UIWebPDFViewHandlerDelegate> * pdfHandlerDelegate;
@property(retain) UIColor * backgroundColorForUnRenderedContent;
@property bool hideActivityIndicatorForUnRenderedContent;
@property bool hidePageViewsUntilReadyToRender;


- (void)setPdfHandlerDelegate:(id)arg1;
- (id)pdfHandlerDelegate;
- (bool)showPageLabels;
- (void)revealSearchResult:(id)arg1 andZoomIn:(bool)arg2;
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg1;
- (void)removeViewFromSuperview;
- (id)findOnPageHighlighter;
- (void)clearSearchControllerForHighlighter:(id)arg1;
- (id)searchControllerForHighlighter:(id)arg1;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)_resultRects:(id)arg1 andResultViews:(id)arg2 forSearchResult:(id)arg3 inViewCoordinates:(id)arg4;
- (void)scrollToPageNumber:(long long)arg1 animate:(bool)arg2;
- (id)createPageLabel;
- (id)_getLabelViewFormatter;
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg1 restoringZoomScale:(double)arg2 andScrollPt:(struct CGPoint { double x1; double x2; })arg3;
- (void)_updateViewHierarchyForDocumentView:(id)arg1 ignoreIfSame:(bool)arg2;
- (void)updatePageNumberLabelWithUserScrolling:(bool)arg1 animated:(bool)arg2;
- (void)_showPasswordEntryViewForFile:(id)arg1;
- (void)_postdidDetermineDocumentBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForDocumentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)restoreStateFromPendingHistoryItem;
- (void)adjustZoomScalesForScrollView;
- (void)_adjustContentOffsetForKeyboardIfNeeded;
- (void)_showPasswordErrorAlert;
- (void)_showLinkSheet:(id)arg1;
- (void)performAction:(id)arg1 fromAlertController:(id)arg2;
- (id)_actionsForInteractionInfo:(id)arg1;
- (id)_actionForType:(int)arg1;
- (void)highlightRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_completeLinkClickWithURLString:(id)arg1;
- (void)_completeLinkClickWithURL:(id)arg1;
- (void)_notifyDelegateDidClickLink:(id)arg1;
- (void)_notifyDelegateWillClickLink:(id)arg1;
- (id)createLinkHighlight;
- (void)_adjustZoomScalesForScrollViewInternal:(id)arg1;
- (double)_pinValueForVerticalEdge:(unsigned long long)arg1 inScrollView:(id)arg2;
- (unsigned long long)_verticalEdgeForContentOffsetInScrollView:(id)arg1;
- (void)_ensurePDFViewInHierarchyForWebDocView:(id)arg1;
- (void)_createPDFViewIfNeeded:(id)arg1;
- (void)_removePDFViewIfWebDocViewIsNotSamePDF:(id)arg1;
- (void)_removePDFViewIfWebDocViewIsNotPDF:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForPasswordView:(id)arg1;
- (void)_replacePDFViewIfPresentWithWebDocView:(id)arg1;
- (id)_getPDFDocumentViewForWebView:(id)arg1;
- (id)_scroller:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForPdfView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)clearLinkHighlight;
- (void)clearActionSheet;
- (void)clearAllViews;
- (void)_setSearchControllerDocumentToSearch:(id)arg1;
- (void)clearPageLabel;
- (void)setHideActivityIndicatorForUnRenderedContent:(bool)arg1;
- (bool)hideActivityIndicatorForUnRenderedContent;
- (id)backgroundColorForUnRenderedContent;
- (void)setHidePageViewsUntilReadyToRender:(bool)arg1;
- (bool)hidePageViewsUntilReadyToRender;
- (void)handleLongPressOnLink:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)handleLinkClick:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)resetZoom:(id)arg1;
- (void)pdfView:(id)arg1 zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forPoint:(struct CGPoint { double x1; double x2; })arg3 considerHeight:(bool)arg4;
- (void)didDetermineDocumentBounds:(id)arg1;
- (id)passwordForPDFView:(id)arg1;
- (void)ensureCorrectPagesAreInstalled:(bool)arg1;
- (void)setBackgroundColorForUnRenderedContent:(id)arg1;
- (void)didScroll:(id)arg1;
- (id)frontView;
- (id)_absoluteUrlRelativeToDocumentURL:(id)arg1;
- (bool)considerHeightOfRectOfInterestForRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeRectForRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)heightToKeepVisible;
- (double)minimumVerticalContentOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterestForRotation;
- (void)updateBoundariesOfScrollView:(id)arg1 withScales:(struct { double x1; double x2; double x3; })arg2;
- (struct { double x1; double x2; double x3; })scalesForContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)handleScrollToAnchor:(id)arg1;
- (void)updateViewHierarchyForDocumentViewLoadComplete:(id)arg1;
- (void)updateViewHierarchyForDocumentViewNewLoad:(id)arg1;
- (void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)arg1;
- (void)rotateEnclosingScrollViewToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShowPageLabels:(bool)arg1;
- (void)setScalesPageToFit:(bool)arg1;
- (void)updateViewSettings;
- (id)pdfView;
- (bool)scalesPageToFit;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectInHostViewForSheet:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialPresentationRectInHostViewForSheet:(id)arg1;
- (id)hostViewForSheet:(id)arg1;
- (bool)considerHeightForDoubleTap;
- (struct { double x1; double x2; double x3; })doubleTapScalesForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;
- (double)currentDocumentScale;
- (double)zoomedDocumentScale;
- (id)enclosingScrollView;
- (double)minimumScaleForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2;
- (id)contentView;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)init;
- (void)dealloc;

@end
