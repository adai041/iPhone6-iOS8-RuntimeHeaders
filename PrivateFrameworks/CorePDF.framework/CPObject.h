/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPDocument, CPObject, CPPage, NSMutableArray;

@interface CPObject : NSObject <NSCopying, CPCopying> {
    CPObject *parent;
    NSMutableArray *children;
    CPDocument *document;
    CPPage *page;
    long long zOrder;
}


- (id)parent;
- (void)setParent:(id)arg1;
- (id)children;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (int)depth;
- (void)addChildren:(id)arg1;
- (id)childAtIndex:(unsigned int)arg1;
- (id)shallowDescendantsOfClass:(Class)arg1;
- (id)descendantsOfClass:(Class)arg1;
- (void)map:(SEL)arg1 target:(id)arg2 last:(bool)arg3;
- (void)map:(SEL)arg1 target:(id)arg2;
- (void)mapSafely:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 last:(bool)arg4;
- (id)childrenNotOfClass:(Class)arg1;
- (id)childrenOfClass:(Class)arg1;
- (void)childrenOfClass:(Class)arg1 into:(id)arg2;
- (void)promoteChildren;
- (void)removeLastChild;
- (void)removeFirstChild;
- (id)firstSibling;
- (id)lastSibling;
- (unsigned int)countOfClass:(Class)arg1;
- (id)initSuper;
- (id)firstDescendantsOfClass:(Class)arg1;
- (void)clearCachedInfo;
- (void)setZOrder:(long long)arg1;
- (unsigned int)countOfFirstDescendantsOfClass:(Class)arg1;
- (id)lastDescendantOfClass:(Class)arg1;
- (id)firstDescendantOfClass:(Class)arg1;
- (id)descendantsOfClass:(Class)arg1 omitTraversing:(Class)arg2;
- (void)descendantsOfClass:(Class)arg1 to:(id)arg2;
- (id)descendantsOfClass:(Class)arg1 deep:(bool)arg2;
- (id)ancestorOfClass:(Class)arg1;
- (id)copyWithoutChildren;
- (void)disposeDescendants;
- (void)accept:(id)arg1;
- (id)newTakeChildrenAmong:(id)arg1;
- (id)newTakeChildren;
- (void)addChildrenOf:(id)arg1;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)updateZOrder:(long long)arg1;
- (void)recomputeZOrder;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
- (long long)zOrder;
- (void)removeAll;
- (void)setDocument:(id)arg1;
- (id)nextSibling;
- (void)remove;
- (void)setPage:(id)arg1;
- (id)page;
- (id)document;
- (id)previousSibling;
- (id)firstChild;
- (id)lastChild;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)performSelector:(SEL)arg1;
- (bool)isEqual:(id)arg1;
- (id)init;
- (unsigned int)count;
- (void)dealloc;
- (unsigned long long)indexOf:(id)arg1;

@end
