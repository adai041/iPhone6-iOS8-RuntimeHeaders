/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryDatabase : NSObject  {
    SSSQLiteDatabase *_database;
}

+ (id)accountUniqueIdentifierKey;
+ (bool)_setupDatabase:(id)arg1;
+ (void)_createDatabaseDirectory;
+ (id)newDefaultInstance;

- (id)allProperties:(id)arg1 accountID:(id)arg2 includingHidden:(bool)arg3;
- (bool)resetCacheForNewAccountID:(id)arg1;
- (bool)setLocalRevision:(long long)arg1 forAccountUniqueIdentifier:(id)arg2;
- (long long)localRevisionForAccountUniqueIdentifier:(id)arg1;
- (bool)setCurrentAccountUniqueIdentifier:(id)arg1;
- (id)currentAccountUniqueIdentifier;
- (void)modifyUsingAppPurchaseHistoryTransactionBlock:(id)arg1;
- (bool)removeValueForDatabaseProperty:(id)arg1;
- (void)readUsingTransactionBlock:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(bool)arg2;
- (void)readAsyncUsingTransactionBlock:(id)arg1;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (id)database;
- (id)init;
- (void)dealloc;

@end