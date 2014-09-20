/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSPersistentCache;

@interface SSDatabaseCacheEntry : SSSQLiteEntity  {
    SSPersistentCache *_persistentCache;
}

+ (unsigned long long)_fetchPersistentID:(id)arg1 inDatabase:(id)arg2;
+ (id)allPropertyKeys;
+ (id)databaseTable;

- (id)dataBlob:(bool*)arg1;
- (void)setPersistentCache:(id)arg1;
- (id)initWithLookupKey:(id)arg1 inDatabase:(id)arg2;
- (id)description;
- (void)dealloc;

@end