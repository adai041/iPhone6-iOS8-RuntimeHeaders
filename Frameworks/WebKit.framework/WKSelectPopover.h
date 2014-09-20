/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class WKContentView;

@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl> {
    WKContentView *_view;
    struct RetainPtr<WKSelectTableViewController> { 
        void *m_ptr; 
    } _tableViewController;
    struct RetainPtr<UIKeyboard> { 
        void *m_ptr; 
    } _keyboard;
}


- (id)initWithView:(id)arg1 hasGroups:(bool)arg2;
- (void).cxx_destruct;
- (void)_userActionDismissedPopover:(id)arg1;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (id).cxx_construct;
- (void)dealloc;

@end
