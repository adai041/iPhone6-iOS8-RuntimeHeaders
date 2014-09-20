/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableArray, NSRecursiveLock;

@interface AVQueue : NSObject  {
    NSRecursiveLock *_mutex;
    NSMutableArray *_items;
    void *_reserved;
    int _isBeingModifiedCount;
}

+ (id)queueWithArray:(id)arg1 error:(id*)arg2;
+ (id)avQueue;

- (id)initWithError:(id*)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (bool)isBeingModified;
- (void)removeItemsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)insertItem:(id)arg1 afterItem:(id)arg2 error:(id*)arg3;
- (id)itemAfterItem:(id)arg1;
- (unsigned long long)indexOfItem:(id)arg1;
- (void)itemWillBeRemoved:(id)arg1 atIndex:(long long)arg2;
- (void)itemWasAdded:(id)arg1 atIndex:(long long)arg2;
- (bool)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 error:(id*)arg3;
- (bool)appendItem:(id)arg1 error:(id*)arg2;
- (bool)appendItemsFromArray:(id)arg1 error:(id*)arg2;
- (long long)_instantiateItem;
- (bool)removeItemAtIndex:(unsigned long long)arg1;
- (id)initWithArray:(id)arg1 error:(id*)arg2;
- (bool)removeItem:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)removeAllItems;

@end