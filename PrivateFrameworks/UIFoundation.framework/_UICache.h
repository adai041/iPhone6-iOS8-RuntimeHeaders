/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary, NSObject<OS_dispatch_source>;

@interface _UICache : NSObject  {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_source> *_memoryWarningsSource;
    bool_clearsCacheOnLowMemoryWarnings;
    bool_clearsCacheOnApplicationBackground;
    id _noteObserver;
}

@property bool clearsCacheOnLowMemoryWarnings;
@property bool clearsCacheOnApplicationBackground;


- (bool)clearsCacheOnApplicationBackground;
- (bool)clearsCacheOnLowMemoryWarnings;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setClearsCacheOnLowMemoryWarnings:(bool)arg1;
- (void)setClearsCacheOnApplicationBackground:(bool)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)init;
- (void)dealloc;

@end
