/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WKBackForwardListItem, NSArray, NSString;

@interface WKBackForwardList : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebBackForwardList> { 
        struct type { 
            unsigned char __lx[56]; 
        } data; 
    } _list;
}

@property(readonly) WKBackForwardListItem * currentItem;
@property(readonly) WKBackForwardListItem * backItem;
@property(readonly) WKBackForwardListItem * forwardItem;
@property(copy,readonly) NSArray * backList;
@property(copy,readonly) NSArray * forwardList;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;


- (id)itemAtIndex:(long long)arg1;
- (id)forwardList;
- (id)backList;
- (id)forwardItem;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id).cxx_construct;
- (id)currentItem;
- (id)backItem;
- (void)dealloc;
- (void)_clear;
- (void)_removeAllItems;

@end
