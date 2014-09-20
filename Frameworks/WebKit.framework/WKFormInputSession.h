/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString, NSObject<NSSecureCoding>, WKContentView;

@interface WKFormInputSession : NSObject <_WKFormInputSession> {
    WKContentView *_contentView;
    struct RetainPtr<NSObject<NSSecureCoding> > { 
        void *m_ptr; 
    } _userObject;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(getter=isValid,readonly) bool valid;
@property(readonly) NSObject<NSSecureCoding> * userObject;
@property(copy) NSString * accessoryViewCustomButtonTitle;


- (id)userObject;
- (id)initWithContentView:(id)arg1 userObject:(id)arg2;
- (void)setAccessoryViewCustomButtonTitle:(id)arg1;
- (id)accessoryViewCustomButtonTitle;
- (void).cxx_destruct;
- (id).cxx_construct;
- (bool)isValid;
- (void)invalidate;

@end
