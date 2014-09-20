/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class MTLToolsObject;

@interface MTLToolsObject : NSObject  {
    id _baseObject;
    MTLToolsObject *_parent;
    struct ILayerLockingPolicy { int (**x1)(); } *_lockingPolicy;
}

@property(retain) id baseObject;
@property(readonly) MTLToolsObject * parent;
@property(readonly) MTLToolsObject * strongParent;
@property struct ILayerLockingPolicy { int (**x1)(); }* lockingPolicy;

+ (id)dispatchQueue;
+ (void)visitObjects:(id)arg1 withVisitor:(id)arg2;

- (id)parent;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)strongParent;
- (void)setOriginalObject:(id)arg1;
- (id)originalObject;
- (id)baseObjectWithClass:(Class)arg1;
- (void)setLockingPolicy:(struct ILayerLockingPolicy { int (**x1)(); }*)arg1;
- (void)setBaseObject:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(struct ILayerLockingPolicy { int (**x1)(); }*)arg3;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (id)baseObject;
- (struct ILayerLockingPolicy { int (**x1)(); }*)lockingPolicy;

@end
