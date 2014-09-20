/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLOptGroupElement;

@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate> {
    DOMHTMLOptGroupElement *_node;
}

@property(retain) DOMHTMLOptGroupElement * _node;


- (id)initWithHTMLOptGroupNode:(id)arg1;
- (id)_node;
- (void)unselect;
- (bool)isGroup;
- (id)node;
- (void)set_node:(id)arg1;
- (bool)selected;
- (void)setSelected:(bool)arg1;
- (void)dealloc;

@end
