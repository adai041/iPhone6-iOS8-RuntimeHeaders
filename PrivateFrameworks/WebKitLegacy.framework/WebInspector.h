/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebView, WebInspectorFrontend;

@interface WebInspector : NSObject  {
    WebView *_webView;
    WebInspectorFrontend *_frontend;
}


- (void)releaseFrontend;
- (void)setFrontend:(id)arg1;
- (void)evaluateInFrontend:(id)arg1 script:(id)arg2;
- (void)attach:(id)arg1;
- (void)setJavaScriptProfilingEnabled:(bool)arg1;
- (bool)isJavaScriptProfilingEnabled;
- (void)stopProfilingJavaScript:(id)arg1;
- (void)startProfilingJavaScript:(id)arg1;
- (void)toggleProfilingJavaScript:(id)arg1;
- (bool)isProfilingJavaScript;
- (void)stopDebuggingJavaScript:(id)arg1;
- (void)startDebuggingJavaScript:(id)arg1;
- (void)toggleDebuggingJavaScript:(id)arg1;
- (void)showConsole:(id)arg1;
- (void)webViewClosed;
- (id)initWithWebView:(id)arg1;
- (void)setTimelineProfilingEnabled:(bool)arg1;
- (bool)isTimelineProfilingEnabled;
- (bool)isDebuggingJavaScript;
- (void)showWindow;
- (void)close:(id)arg1;
- (void)detach:(id)arg1;
- (void)dealloc;
- (void)show:(id)arg1;

@end
