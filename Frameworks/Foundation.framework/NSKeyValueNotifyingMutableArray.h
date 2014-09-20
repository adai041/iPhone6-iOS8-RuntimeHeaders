/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableArray;

@interface NSKeyValueNotifyingMutableArray : NSKeyValueMutableArray  {
    NSMutableArray *_mutableArray;
}

+ (id)_proxyShare;
+ (struct { unsigned long long x1; id x2[4]; }*)_proxyNonGCPoolPointer;

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end
