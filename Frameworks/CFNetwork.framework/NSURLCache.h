/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSURLCacheInternal;

@interface NSURLCache : NSObject  {
    NSURLCacheInternal *_internal;
}

@property unsigned long long memoryCapacity;
@property unsigned long long diskCapacity;
@property(readonly) unsigned long long currentMemoryUsage;
@property(readonly) unsigned long long currentDiskUsage;

+ (id)sharedURLCache;
+ (void)setSharedURLCache:(id)arg1;

- (void)removeAllCachedResponses;
- (id)init;
- (void)dealloc;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (void)setDiskCapacity:(unsigned long long)arg1;
- (void)setMemoryCapacity:(unsigned long long)arg1;
- (struct _CFURLCache { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __CFURLCache {} *x2; }*)_CFURLCache;
- (void)removeCachedResponsesSinceDate:(id)arg1;
- (void)flushWithCompletion:(id)arg1;
- (id)_initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 relativePath:(id)arg3;
- (id)initWithExistingSharedCFURLCache:(struct _CFURLCache { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __CFURLCache {} *x2; }*)arg1;
- (id)_initWithIdentifier:(id)arg1 memoryCapacity:(long long)arg2 diskCapacity:(long long)arg3 private:(bool)arg4;
- (long long)_nscfBridgeURLCacheCurrentDiskUsage;
- (long long)_nscfBridgeURLCacheCurrentMemoryUsage;
- (long long)_nscfBridgeURLCacheMemoryCapacity;
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)arg1;
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long long)arg1;
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long long)arg1;
- (long long)_nscfBridgeURLCacheDiskCapacity;
- (void)_nscfBridgeURLCacheStoreCachedResponse:(struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __CFCachedURLResponse {} *x2; }*)arg1 forRequest:(struct _CFURLRequest { }*)arg2;
- (struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __CFCachedURLResponse {} *x2; }*)_nscfBridgeURLCacheCopyResponseForRequest:(struct _CFURLRequest { }*)arg1;
- (id)_cacheDirectory;
- (id)_diskCacheDefaultPath;
- (id)_initWithExistingCFURLCache:(struct _CFURLCache { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __CFURLCache {} *x2; }*)arg1;
- (unsigned long long)currentMemoryUsage;
- (unsigned long long)diskCapacity;
- (unsigned long long)memoryCapacity;
- (void)removeCachedResponseForRequest:(id)arg1;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;
- (unsigned long long)currentDiskUsage;
- (void)removeCachedResponseForDataTask:(id)arg1;
- (void)getCachedResponseForDataTask:(id)arg1 completionHandler:(id)arg2;
- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;

@end
