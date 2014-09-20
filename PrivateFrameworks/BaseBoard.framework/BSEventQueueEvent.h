/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface BSEventQueueEvent : NSObject  {
    NSString *_name;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

}

@property(copy) NSString * name;
@property(copy) id handler;

+ (id)eventWithName:(id)arg1 handler:(id)arg2;

- (void)execute;
- (bool)isEqualToEvent:(id)arg1;
- (void)_execute;
- (void)executeFromEventQueue;
- (id)handler;
- (void)setHandler:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;

@end
