/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSKeyValueGetter;

@interface NSKeyValueFastMutableOrderedSet2 : NSKeyValueFastMutableOrderedSet  {
    NSKeyValueGetter *_valueGetter;
}

+ (struct { unsigned long long x1; id x2[4]; }*)_proxyNonGCPoolPointer;

- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)objectsAtIndexes:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)_nonNilOrderedSetValueWithSelector:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end
