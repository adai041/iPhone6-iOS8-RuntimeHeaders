/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject  {
    SSSQLiteDatabase *_database;
}


- (void)readAsyncUsingSessionBlock:(id)arg1;
- (void)_dispatchBlockAsync:(id)arg1;
- (id)_initReadOnly:(bool)arg1;
- (void)modifyAsyncUsingTransactionBlock:(id)arg1;
- (void)modifyUsingTransactionBlock:(id)arg1;
- (void)readUsingSessionBlock:(id)arg1;
- (id)initReadOnly;
- (id)init;
- (void)dealloc;

@end
