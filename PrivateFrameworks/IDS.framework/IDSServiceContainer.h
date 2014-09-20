/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject  {
    IDSServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

@property(retain) IDSServiceMonitor * monitor;
@property(retain,readonly) NSMutableSet * listeners;


- (void)setMonitor:(id)arg1;
- (id)monitor;
- (bool)removeListenerID:(id)arg1;
- (bool)addListenerID:(id)arg1;
- (bool)hasListenerID:(id)arg1;
- (id)listeners;
- (id)initWithService:(id)arg1;
- (void)dealloc;

@end
