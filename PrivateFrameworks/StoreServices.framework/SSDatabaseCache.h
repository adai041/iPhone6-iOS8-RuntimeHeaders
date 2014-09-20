/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, SSPersistentCache, NSObject<OS_dispatch_queue>, SSSQLiteDatabase;

@interface SSDatabaseCache : NSObject  {
    unsigned long long _maximumInlineBlobSize;
    NSString *_identifier;
    NSString *_cacheName;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSPersistentCache *_persistentCache;
    SSSQLiteDatabase *_database;
    Class _cacheEntryClass;
}

@property unsigned long long maximumInlineBlobSize;


- (void)setMaximumInlineBlobSize:(unsigned long long)arg1;
- (id)cacheEntryProperties:(id)arg1 forLookupKeys:(id)arg2;
- (id)setData:(id)arg1 expiring:(double)arg2 retiring:(double)arg3 lookupKey:(id)arg4 userInfo:(id)arg5;
- (int)clearRetiredData;
- (void)clearCacheForLookupKey:(id)arg1;
- (unsigned long long)maximumInlineBlobSize;
- (id)cacheEntryForLookupKey:(id)arg1;
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 database:(id)arg3 cacheEntryClass:(Class)arg4;
- (bool)_setupDatabase;
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2;
- (id)statistics;
- (void)clear;
- (id)description;
- (void)dealloc;

@end
