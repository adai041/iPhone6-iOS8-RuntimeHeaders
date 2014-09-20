/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableDictionary, NSSharedKeySet;

@interface NSSharedKeyDictionary : NSMutableDictionary  {
    NSSharedKeySet *_keyMap;
    unsigned long long _count;
    id *_values;
    int (*_ifkIMP)();
    NSMutableDictionary *_sideDic;
    unsigned long long _mutations;
}

+ (id)sharedKeyDictionaryWithKeySet:(id)arg1;

- (void)finalize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)keySet;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)keyEnumerator;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeObjectForKey:(id)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)initWithKeySet:(id)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3;

@end