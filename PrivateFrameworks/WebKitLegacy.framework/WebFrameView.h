/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebFrameViewPrivate, WebFrame, WAKView<WebDocumentView>;

@interface WebFrameView : WAKView <WebCoreFrameView> {
    WebFrameViewPrivate *_private;
}

@property(readonly) WebFrame * webFrame;
@property(readonly) WAKView<WebDocumentView> * documentView;
@property bool allowsScrolling;
@property(readonly) bool documentViewShouldHandlePrint;

+ (bool)_canShowMIMETypeAsHTML:(id)arg1;
+ (Class)_viewClassForMIMEType:(id)arg1 allowingPlugins:(bool)arg2;
+ (id)_viewTypesAllowImageTypeOmission:(bool)arg1;

- (void)printDocumentView;
- (bool)documentViewShouldHandlePrint;
- (id)_webcore_effectiveFirstResponder;
- (bool)_firstResponderIsFormControl;
- (void)_goBack;
- (void)_goForward;
- (void)_forwardMouseEvent:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (bool)_pageInBlockProgressionDirection:(bool)arg1;
- (float)_horizontalKeyboardScrollDistance;
- (bool)_scrollLineHorizontally:(bool)arg1;
- (bool)_scrollLineVertically:(bool)arg1;
- (bool)_scrollHorizontallyBy:(float)arg1;
- (float)_horizontalPageScrollDistance;
- (bool)_pageHorizontally:(bool)arg1;
- (bool)_scrollVerticallyBy:(float)arg1;
- (bool)_pageVertically:(bool)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (bool)_scrollToEndOfDocument;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (bool)_scrollToBeginningOfDocument;
- (bool)_isFlippedDocument;
- (bool)_isVerticalDocument;
- (bool)_scrollOverflowInDirection:(unsigned long long)arg1 granularity:(unsigned long long)arg2;
- (void)setNextKeyView:(id)arg1;
- (bool)scrollView:(id)arg1 shouldScrollToPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)keyDown:(id)arg1;
- (void)finalize;
- (bool)acceptsFirstResponder;
- (id)webFrame;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAllowsScrolling:(bool)arg1;
- (id)documentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (bool)isOpaque;
- (bool)becomeFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)allowsScrolling;
- (float)_verticalKeyboardScrollDistance;
- (struct Frame { int (**x1)(); unsigned int x2; struct HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct FrameDestructionObserver {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; struct MainFrame {} *x4; struct Page {} *x5; struct RefPtr<WebCore::Settings> { struct Settings {} *x_6_1_1; } x6; struct FrameTree { struct Frame {} *x_7_1_1; struct Frame {} *x_7_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_7_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_7_1_4; struct RefPtr<WebCore::Frame> { struct Frame {} *x_5_2_1; } x_7_1_5; struct Frame {} *x_7_1_6; struct RefPtr<WebCore::Frame> { struct Frame {} *x_7_2_1; } x_7_1_7; struct Frame {} *x_7_1_8; unsigned int x_7_1_9; } x7; struct FrameLoader { struct Frame {} *x_8_1_1; struct FrameLoaderClient {} *x_8_1_2; struct unique_ptr<WebCore::PolicyChecker, std::__1::default_delete<WebCore::PolicyChecker> > { struct __compressed_pair<WebCore::PolicyChecker *, std::__1::default_delete<WebCore::PolicyChecker> > { struct PolicyChecker {} *x_1_3_1; } x_3_2_1; } x_8_1_3; struct unique_ptr<WebCore::HistoryController, std::__1::default_delete<WebCore::HistoryController> > { struct __compressed_pair<WebCore::HistoryController *, std::__1::default_delete<WebCore::HistoryController> > { struct HistoryController {} *x_1_3_1; } x_4_2_1; } x_8_1_4; struct ResourceLoadNotifier { struct Frame {} *x_5_2_1; } x_8_1_5; struct unique_ptr<WebCore::SubframeLoader, std::__1::default_delete<WebCore::SubframeLoader> > { struct __compressed_pair<WebCore::SubframeLoader *, std::__1::default_delete<WebCore::SubframeLoader> > { struct SubframeLoader {} *x_1_3_1; } x_6_2_1; } x_8_1_6; struct FrameLoaderStateMachine { int x_7_2_1; } x_8_1_7; struct unique_ptr<WebCore::IconController, std::__1::default_delete<WebCore::IconController> > { struct __compressed_pair<WebCore::IconController *, std::__1::default_delete<WebCore::IconController> > { struct IconController {} *x_1_3_1; } x_8_2_1; } x_8_1_8; struct MixedContentChecker { struct Frame {} *x_9_2_1; } x_8_1_9; struct unique_ptr<WebCore::FrameLoader::FrameProgressTracker, std::__1::default_delete<WebCore::FrameLoader::FrameProgressTracker> > { struct __compressed_pair<WebCore::FrameLoader::FrameProgressTracker *, std::__1::default_delete<WebCore::FrameLoader::FrameProgressTracker> > { struct FrameProgressTracker {} *x_1_3_1; } x_10_2_1; } x_8_1_10; int x_8_1_11; int x_8_1_12; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_13_2_1; } x_8_1_13; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_14_2_1; } x_8_1_14; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_15_2_1; } x_8_1_15; boolx_8_1_16; boolx_8_1_17; boolx_8_1_18; boolx_8_1_19; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_20_2_1; } x_8_1_20; boolx_8_1_21; boolx_8_1_22; boolx_8_1_23; int x_8_1_24; boolx_8_1_25; struct RefPtr<WebCore::SerializedScriptValue> { struct SerializedScriptValue {} *x_26_2_1; } x_8_1_26; boolx_8_1_27; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_28_2_1; unsigned int x_28_2_2 : 1; unsigned int x_28_2_3 : 1; int x_28_2_4; int x_28_2_5; int x_28_2_6; int x_28_2_7; int x_28_2_8; int x_28_2_9; int x_28_2_10; int x_28_2_11; int x_28_2_12; int x_28_2_13; } x_8_1_28; struct Timer<WebCore::FrameLoader> { int (**x_29_2_1)(); double x_29_2_2; double x_29_2_3; double x_29_2_4; int x_29_2_5; unsigned int x_29_2_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_29_2_7; struct function<void ()>={type=[24C] {} x_29_2_8; struct __base<void ()> {} *x_29_2_9; } x_8_1_29; } x8; boolx9; boolx10; struct Frame {} *x11; struct HashSet<WebCore::Frame *, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> > { struct HashTable<WebCore::Frame *, WebCore::Frame *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> > { struct Frame {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_12_1_1; } x12; boolx13; boolx14; boolx15; boolx16; int x17; struct RefPtr<WebCore::FrameNetworkingContext> { struct FrameNetworkingContext {} *x_18_1_1; } x18; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_19_1_1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; int x_19_1_4; int x_19_1_5; int x_19_1_6; int x_19_1_7; int x_19_1_8; int x_19_1_9; int x_19_1_10; int x_19_1_11; int x_19_1_12; int x_19_1_13; } x19; struct RefPtr<WebCore::HistoryItem> { struct HistoryItem {} *x_20_1_1; } x20; struct unique_ptr<WebCore::PageActivityAssertionToken, std::__1::default_delete<WebCore::PageActivityAssertionToken> > { struct __compressed_pair<WebCore::PageActivityAssertionToken *, std::__1::default_delete<WebCore::PageActivityAssertionToken> > { struct PageActivityAssertionToken {} *x_1_2_1; } x_21_1_1; } x21; }*)_web_frame;
- (id)_webView;
- (void)_frameSizeChanged;
- (float)_verticalPageScrollDistance;
- (void)_install;
- (id)_makeDocumentViewForDataSource:(id)arg1;
- (Class)_viewClassForMIMEType:(id)arg1;
- (void)_setWebFrame:(id)arg1;
- (void)_setDocumentView:(id)arg1;
- (id)_scrollView;
- (Class)_customScrollViewClass;
- (id)_largestChildWithScrollBars;
- (float)_area;
- (bool)_hasScrollBars;
- (id)_largestScrollableChild;
- (bool)_isScrollable;
- (id)_contentView;
- (void)frameSizeChanged;

@end