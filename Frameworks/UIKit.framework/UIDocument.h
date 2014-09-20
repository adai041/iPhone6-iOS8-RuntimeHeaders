/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL, NSObject<OS_dispatch_semaphore>, NSUserActivity, NSDate, NSMutableArray, NSDocumentDifferenceSize, NSString, NSUndoManager, NSTimer, NSOperationQueue, NSObject<OS_dispatch_queue>, NSLock;

@interface UIDocument : NSObject <NSFilePresenter> {
    NSURL *_fileURL;
    NSString *_fileType;
    NSString *_localizedName;
    NSUndoManager *_undoManager;
    NSDate *_fileModificationDate;
    NSObject<OS_dispatch_queue> *_fileAccessQueue;
    NSObject<OS_dispatch_queue> *_openingQueue;
    NSObject<OS_dispatch_semaphore> *_fileAccessSemaphore;
    NSOperationQueue *_filePresenterQueue;
    id _differenceDueToRecentChanges;
    id _differenceSincePreservingPreviousVersion;
    id _differenceSinceSaving;
    NSTimer *_autosavingTimer;
    double _lastSaveTime;
    double _lastPreservationTime;
    id _versionWithoutRecentChanges;
    NSMutableArray *_versions;
    NSLock *_documentPropertyLock;
    id _alertPresenter;
    struct __docFlags { 
        unsigned int inClose : 1; 
        unsigned int isOpen : 1; 
        unsigned int inOpen : 1; 
        unsigned int isAutosavingBecauseOfTimer : 1; 
        unsigned int versionWithoutRecentChangesIsNotLastOpened : 1; 
        unsigned int ignoreUndoAndRedoNotifications : 1; 
        unsigned int editingDisabled : 1; 
        unsigned int isRegisteredAsFilePresenter : 1; 
        unsigned int movingFile : 1; 
        unsigned int savingError : 1; 
        unsigned int inConflict : 1; 
        unsigned int needToStopAccessingSecurityScopedResource : 1; 
    } _docFlags;
    NSUserActivity *_currentUserActivity;
    NSLock *_activityContinuationLock;
}

@property(getter=_isEditingDisabled,setter=_setEditingDisabled:) bool editingDisabled;
@property(readonly) NSURL * fileURL;
@property(copy,readonly) NSString * localizedName;
@property(copy,readonly) NSString * fileType;
@property(copy) NSDate * fileModificationDate;
@property(readonly) unsigned long long documentState;
@property(retain) NSUndoManager * undoManager;
@property(readonly) NSDocumentDifferenceSize * differenceDueToRecentChanges;
@property(readonly) NSDocumentDifferenceSize * differenceSincePreservingPreviousVersion;
@property(readonly) NSDocumentDifferenceSize * differenceSinceSaving;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSURL * presentedItemURL;
@property(retain,readonly) NSOperationQueue * presentedItemOperationQueue;
@property(copy,readonly) NSURL * primaryPresentedItemURL;

+ (id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryAttempter:(id)arg4;
+ (void)_autosavingTimerDidFireSoContinue:(id)arg1;
+ (void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(bool)arg4;
+ (id)_typeForContentsOfURL:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (id)_fileModificationDateForURL:(id)arg1;

- (void)userInteractionNoLongerPermittedForError:(id)arg1;
- (void)closeWithCompletionHandler:(id)arg1;
- (id)_presentableFileNameForSaveOperation:(long long)arg1 url:(id)arg2;
- (void)_unlockFileAccessQueue;
- (void)_lockFileAccessQueueAndPerformBlock:(id)arg1;
- (bool)_isInConflict;
- (bool)_hasSavingError;
- (id)initWithFileURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)presentedSubitemDidAppearAtURL:(id)arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(id)arg2;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)relinquishPresentedItemToReader:(id)arg1;
- (void)_setInConflict:(bool)arg1;
- (id)fileModificationDate;
- (void)revertToContentsOfURL:(id)arg1 completionHandler:(id)arg2;
- (bool)_isEditingDisabled;
- (bool)_shouldAllowWritingInResponseToPresenterMessage;
- (void)_setHasSavingError:(bool)arg1;
- (void)finishedHandlingError:(id)arg1 recovered:(bool)arg2;
- (void)setUndoManager:(id)arg1;
- (void)_changeWasDone:(id)arg1;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (id)differenceSincePreservingPreviousVersion;
- (id)differenceDueToRecentChanges;
- (bool)_hasUnsavedChanges;
- (id)differenceSinceSaving;
- (void)_clearActivityForCloudDocument;
- (void)_saveUnsavedChangesWithCompletionHandler:(id)arg1;
- (void)autosaveWithCompletionHandler:(id)arg1;
- (void)saveToURL:(id)arg1 forSaveOperation:(long long)arg2 completionHandler:(id)arg3;
- (void)_autosavingCompletedSuccessfully:(bool)arg1;
- (void)_rescheduleAutosaving;
- (void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(bool)arg2;
- (double)_autosavingDelay;
- (void)_autosaveWithCompletionHandler:(id)arg1;
- (void)_scheduleAutosaving;
- (bool)hasUnsavedChanges;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(long long)arg2;
- (bool)_coordinateWritingItemAtURL:(id)arg1 error:(id*)arg2 byAccessor:(id)arg3;
- (void)_finishSavingToURL:(id)arg1 forSaveOperation:(long long)arg2 changeCount:(id)arg3;
- (bool)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(long long)arg4 error:(id*)arg5;
- (id)fileAttributesToWriteToURL:(id)arg1 forSaveOperation:(long long)arg2 error:(id*)arg3;
- (id)changeCountTokenForSaveOperation:(long long)arg1;
- (id)contentsForType:(id)arg1 error:(id*)arg2;
- (id)fileNameExtensionForType:(id)arg1 saveOperation:(long long)arg2;
- (id)savingFileType;
- (bool)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5;
- (bool)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (void)openWithCompletionHandler:(id)arg1;
- (void)updateChangeCount:(long long)arg1;
- (void)setFileType:(id)arg1;
- (void)_setEditingDisabled:(bool)arg1;
- (bool)_isOpen;
- (void)_sendStateChangedNotification;
- (void)enableEditing;
- (void)disableEditing;
- (void)_updateConflictState;
- (void)performAsynchronousFileAccessUsingBlock:(id)arg1;
- (void)_saveActivityForCloudDocumentIfAppropriate;
- (void)handleError:(id)arg1 userInteractionPermitted:(bool)arg2;
- (void)_setOpen:(bool)arg1;
- (void)_updateLocalizedName;
- (void)setFileModificationDate:(id)arg1;
- (bool)readFromURL:(id)arg1 error:(id*)arg2;
- (void)_registerAsFilePresenterIfNecessary;
- (void)_setInOpen:(bool)arg1;
- (bool)_isInOpen;
- (void)_setUserActivity:(id)arg1;
- (id)_userActivityWithActivityType:(id)arg1;
- (void)_invalidateCurrentUserActivity;
- (id)_activityTypeIdentifierForCloudDocument;
- (bool)_documentIsUbiquitous;
- (id)fileType;
- (id)_userInfoForActivityContinuation;
- (id)fileURL;
- (void)_releaseUndoManager;
- (void)_unregisterAsFilePresenterIfNecessary;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_setFileURL:(id)arg1;
- (unsigned long long)documentState;
- (void)setUserActivity:(id)arg1;
- (id)userActivity;
- (id)localizedName;
- (void)restoreUserActivityState:(id)arg1;
- (void)updateUserActivityState:(id)arg1;
- (id)undoManager;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)_fileOpeningQueue;
- (void)_performBlock:(id)arg1 synchronouslyOnQueue:(id)arg2;
- (void)_performBlockSynchronouslyOnMainThread:(id)arg1;

@end