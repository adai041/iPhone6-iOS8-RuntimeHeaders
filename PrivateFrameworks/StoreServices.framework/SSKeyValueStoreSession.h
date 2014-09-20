/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase;

@interface SSKeyValueStoreSession : NSObject  {
    SSSQLiteDatabase *_database;
}

@property(readonly) SSSQLiteDatabase * database;


- (id)existingEntityForDomain:(id)arg1 key:(id)arg2;
- (id)copyDataForDomain:(id)arg1 key:(id)arg2;
- (id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2;
- (id)copyAccountDictionaryForDomain:(id)arg1;
- (id)copyValueForDomain:(id)arg1 key:(id)arg2;
- (id)database;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end
