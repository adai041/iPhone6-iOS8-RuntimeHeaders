/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class WKWebView<UIScrollViewDelegate>, WKScrollViewDelegateForwarder, <UIScrollViewDelegate>;

@interface WKScrollView : UIWebScrollView  {
    <UIScrollViewDelegate> *_externalDelegate;
    WKScrollViewDelegateForwarder *_delegateForwarder;
    WKWebView<UIScrollViewDelegate> *_internalDelegate;
}

@property WKWebView<UIScrollViewDelegate> * internalDelegate;


- (id)internalDelegate;
- (void)setInternalDelegate:(id)arg1;
- (void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_currentTopLeftRubberbandAmount;
- (void)_updateDelegate;
- (void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(bool*)arg5;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end