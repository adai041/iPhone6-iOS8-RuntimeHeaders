/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@class NSObject<OS_dispatch_queue>;

@interface PLFileSystemPersistence : NSObject  {
    NSObject<OS_dispatch_queue> *_writerQueue;
}

+ (void)persistMetadata:(id)arg1 fileURL:(id)arg2;
+ (void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (id)filesystemPersistenceBatchItemForFileAtURL:(id)arg1;
+ (void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (id)persistedAttributesForFileAtURL:(id)arg1;
+ (void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (id)sharedInstance;

- (void)backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2;
- (id)init;
- (void)dealloc;

@end
