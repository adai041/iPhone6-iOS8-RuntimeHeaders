/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSClassicMapTable : NSMapTable  {
    struct { 
        int (*hash)(); 
        int (*isEqual)(); 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
        void *notAKeyMarker; 
    } _keyCallBacks;
    struct { 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
    } _valueCallBacks;
    struct __CFBasicHash { } *_ht;
}


- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)allValues;
- (void)removeObjectForKey:(id)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (id)copy;
- (id)init;
- (unsigned long long)count;
- (void)dealloc;
- (id)allKeys;
- (void)removeAllItems;
- (unsigned long long)getKeys:(const void**)arg1 values:(const void**)arg2;
- (bool)mapMember:(const void*)arg1 originalKey:(const void**)arg2 value:(const void**)arg3;
- (void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2;

@end
