/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CAStateControllerUndo, NSString, NSMutableArray, CAState;

@interface CAStateControllerUndo : NSObject <CAStateRecorder> {
    CAStateControllerUndo *_next;
    CAState *_state;
    NSMutableArray *_elements;
    NSMutableArray *_transitions;
}

@property(readonly) CAStateControllerUndo * next;
@property(retain) CAState * state;
@property(retain) NSMutableArray * elements;
@property(retain) NSMutableArray * transitions;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)addElement:(id)arg1;
- (void)setElements:(id)arg1;
- (id)elements;
- (void)setState:(id)arg1;
- (id)state;
- (void)dealloc;
- (id)next;
- (void)setTransitions:(id)arg1;
- (id)transitions;
- (void)addTransition:(id)arg1;
- (void)willAddLayer:(id)arg1;

@end
