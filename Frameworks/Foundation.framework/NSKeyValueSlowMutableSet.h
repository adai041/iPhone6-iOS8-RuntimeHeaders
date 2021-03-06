/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSKeyValueSetter, NSKeyValueGetter;

@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet  {
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    bool_treatNilValuesLikeEmptySets;
    BOOL _padding[3];
}

+ (struct { unsigned long long x1; id x2[4]; }*)_proxyNonGCPoolPointer;

- (void)setSet:(id)arg1;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (void)removeObject:(id)arg1;
- (id)_createMutableSetValueWithSelector:(SEL)arg1;
- (id)_setValueWithSelector:(SEL)arg1;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end
