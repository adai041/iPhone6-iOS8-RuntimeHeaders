/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSKeyValueSetter, NSKeyValueGetter;

@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter  {
    NSKeyValueGetter *_baseGetter;
    NSKeyValueSetter *_baseSetter;
}


- (void)dealloc;
- (bool)treatNilValuesLikeEmptyCollections;
- (id)baseSetter;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 baseSetter:(id)arg4 containerIsa:(Class)arg5 proxyClass:(Class)arg6;
- (id)baseGetter;

@end
