/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebView, WebNodeHighlightView;

@interface WebHighlightLayer : CALayer  {
    WebNodeHighlightView *_view;
    WebView *_webView;
}


- (id)initWithHighlightView:(id)arg1 webView:(id)arg2;
- (void)layoutSublayers;
- (id)actionForKey:(id)arg1;

@end