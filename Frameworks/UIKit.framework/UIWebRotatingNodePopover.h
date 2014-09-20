/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebRotatingNodePopoverDelegate>, DOMNode, NSString, UIPopoverController;

@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate> {
    bool_isRotating;
    DOMNode *_node;
    struct CGPoint { 
        double x; 
        double y; 
    } _presentationPoint;
    UIPopoverController *_popoverController;
    <UIWebRotatingNodePopoverDelegate> *_dismissDelegate;
}

@property(retain) DOMNode * node;
@property struct CGPoint { double x1; double x2; } presentationPoint;
@property(retain) UIPopoverController * popoverController;
@property <UIWebRotatingNodePopoverDelegate> * dismissDelegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setDismissDelegate:(id)arg1;
- (id)dismissDelegate;
- (struct CGPoint { double x1; double x2; })presentationPoint;
- (unsigned long long)popoverArrowDirections;
- (void)setPresentationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNode:(id)arg1;
- (id)popoverController;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)presentPopoverAnimated:(bool)arg1;
- (void)setPopoverController:(id)arg1;
- (id)initWithDOMNode:(id)arg1;
- (id)node;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissPopoverAnimated:(bool)arg1;
- (void)dealloc;

@end
