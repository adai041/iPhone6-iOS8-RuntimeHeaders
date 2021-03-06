/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSWeakCallback;

@interface NSConcreteMapTable : NSMapTable  {
    struct NSSlice { 
        void **items; 
        boolwantsStrong; 
        boolwantsWeak; 
        boolwantsARC; 
        boolshouldCopyIn; 
        boolusesStrong; 
        boolusesWeak; 
        boolusesARC; 
        boolusesSentinel; 
        boolpointerPersonality; 
        boolintegerPersonality; 
        boolsimpleReadClear; 
        NSWeakCallback *callback; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    } keys;
    struct NSSlice { 
        void **items; 
        boolwantsStrong; 
        boolwantsWeak; 
        boolwantsARC; 
        boolshouldCopyIn; 
        boolusesStrong; 
        boolusesWeak; 
        boolusesARC; 
        boolusesSentinel; 
        boolpointerPersonality; 
        boolintegerPersonality; 
        boolsimpleReadClear; 
        NSWeakCallback *callback; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    } values;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long keyOptions;
    unsigned long long valueOptions;
    unsigned long long mutations;
    int growLock;
    boolshouldRehash;
}


- (void)finalize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)allValues;
- (id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3;
- (id)objectEnumerator;
- (Class)classForCoder;
- (void)removeObjectForKey:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)copy;
- (id)init;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)allKeys;
- (id)dump;
- (void)removeAllItems;
- (bool)containsKeys:(const void**)arg1 values:(const void**)arg2 count:(unsigned long long)arg3;
- (void)zeroPairedEntries;
- (void)checkCount:(const char *)arg1;
- (void)grow;
- (void)assign:(unsigned long long)arg1 key:(const void*)arg2 value:(const void*)arg3 isNew:(bool)arg4;
- (void)_setBackingStore;
- (unsigned long long)realCount;
- (unsigned long long)getKeys:(const void**)arg1 values:(const void**)arg2;
- (bool)mapMember:(const void*)arg1 originalKey:(const void**)arg2 value:(const void**)arg3;
- (void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2;
- (void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (id)valuePointerFunctions;
- (id)keyPointerFunctions;
- (void)rehash;
- (unsigned long long)rehashAround:(unsigned long long)arg1;
- (void)raiseCountUnderflowException;
- (void)_initBlock;

@end
