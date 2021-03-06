/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSProgress, NSError, NSManagedObjectContext;

@interface NSPersistentStoreAsynchronousResult : NSPersistentStoreResult  {
    NSProgress *_requestProgress;
    NSError *_requestError;
    NSManagedObjectContext *_requestContext;
    id _requestCompletionBlock;
    int _flags;
}

@property(readonly) NSManagedObjectContext * managedObjectContext;
@property(retain) NSError * operationError;
@property(retain) NSProgress * progress;
@property(copy) id requestCompletionBlock;


- (void)setRequestCompletionBlock:(id)arg1;
- (id)managedObjectContext;
- (id)progress;
- (void)setProgress:(id)arg1;
- (void)dealloc;
- (void)cancel;
- (id)requestCompletionBlock;
- (void)setOperationError:(id)arg1;
- (id)operationError;
- (bool)_isCancelled;
- (void)_cancelProgress;
- (id)initWithContext:(id)arg1 andProgress:(id)arg2 completetionBlock:(id)arg3;

@end
