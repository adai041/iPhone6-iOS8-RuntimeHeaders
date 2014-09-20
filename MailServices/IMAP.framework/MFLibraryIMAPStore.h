/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class NSString, NSArray, MFIMAPCommandPipeline, MFIMAPConnection, NSLock, MFIMAPDownloadCache;

@interface MFLibraryIMAPStore : MFLibraryStore <MFIMAPSequenceIdentifierProvider> {
    unsigned int _supportsCustomPermanentFlags : 1;
    unsigned int _supportsJunkFlag : 1;
    unsigned int _supportsDollarJunkFlag : 1;
    unsigned int _supportsNotJunkFlag : 1;
    unsigned int _supportsDollarNotJunkFlag : 1;
    unsigned int _supportsForwardedFlag : 1;
    unsigned int _supportsDollarForwardedFlag : 1;
    unsigned int _updatingCache : 1;
    unsigned int _updateMetadata : 1;
    unsigned int _readyToDealloc : 1;
    unsigned int _didSynchronizeOldMessages : 1;
    unsigned int _recentsExist : 1;
    unsigned int _settingServerCount : 1;
    unsigned int _reserved : 16;
    NSString *_mailboxName;
    MFIMAPDownloadCache *_downloadCache;
    MFIMAPCommandPipeline *_fetchPipeline;
    unsigned long long _serverDeletedCount;
    unsigned long long _serverUidNext;
    unsigned long long _lastHighestModSequence;
    unsigned long long _highestModSequence;
    NSString *_selectedUID;
    unsigned int _currentFetchUid;
    NSString *_relativePath;
    NSArray *_additionalSynchronizationSearchArguments;
    NSArray *_additionalFetchHeaders;
    id _downloadDelegate;
    MFIMAPConnection *_cachedConnection;
    NSLock *_cachedConnectionLock;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)setHandlerForTemporaryUidToRemoteIDMapping:(id)arg1;
+ (id)copyRemoteIDForTemporaryUid:(unsigned int)arg1;

- (id)relativePath;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (bool)bodyFetchRequiresNetworkActivity;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(bool)arg3 partial:(bool*)arg4;
- (id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(bool)arg3 didDownload:(bool*)arg4;
- (bool)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isComplete:(bool*)arg3 consumer:(id)arg4;
- (void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (id)mailboxName;
- (bool)setPreferredEncoding:(unsigned int)arg1 forMessage:(id)arg2;
- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)uniqueRemoteIDsForMessages:(id)arg1;
- (id)messageForRemoteID:(id)arg1;
- (bool)allowsAppend;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(bool)arg2;
- (void)doCompact;
- (bool)canCompact;
- (long long)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (long long)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (bool)canFetchMessageIDs;
- (id)remoteIDsFromUniqueRemoteIDs:(id)arg1;
- (id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 error:(id*)arg3;
- (long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (bool)canFetchSearchResults;
- (unsigned long long)growFetchWindow;
- (id)initWithMailboxUid:(id)arg1 readOnly:(bool)arg2;
- (void)_setFlagsForMessages:(id)arg1;
- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(bool)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (unsigned long long)serverMessageCount;
- (void)setDownloadDelegate:(id)arg1;
- (id)downloadCache;
- (id)fetchPipeline;
- (bool)_changedFlagsForMessage:(id)arg1 fetchResponse:(id)arg2 newFlags:(unsigned long long*)arg3;
- (void)reselectMailbox;
- (id)newDictionaryForLocalFlags:(unsigned long long)arg1 serverFlags:(unsigned long long)arg2 existingDictionary:(id)arg3;
- (void)_addOfflineTransferMessages:(id)arg1;
- (void)removeAllLocalMessages;
- (void)setAdditionalSynchronizationSearchArguments:(id)arg1;
- (void)setAdditionalFetchHeaders:(id)arg1;
- (void)updateDeletedCount;
- (bool)shouldRetryEmptyBodyDownloadForMessage:(id)arg1;
- (id)_performBodyDataDownload:(id)arg1 usingConnection:(id)arg2 isPartial:(bool*)arg3;
- (id)_downloadForMessageBodyData:(id)arg1;
- (id)_dataForMessage:(id)arg1 readHeadersOnly:(bool)arg2;
- (void)_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)addFlagChanges:(id)arg1 forMessages:(id)arg2;
- (void)_synchronouslySetFlags:(id)arg1 clearFlags:(id)arg2 forMessages:(id)arg3 originalChanges:(id)arg4;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 customIMAPFlagsToSet:(id)arg6;
- (unsigned long long)_doAppend:(struct { id x1; id x2; id x3; id x4; boolx5; id x6; id x7; id x8; id x9; unsigned int x10; unsigned int x11; }*)arg1;
- (bool)canPerformOfflineAppend;
- (bool)_doUidCopy:(struct { id x1; id x2; id x3; id x4; boolx5; id x6; id x7; id x8; id x9; unsigned int x10; unsigned int x11; }*)arg1 toStore:(id)arg2 newMessages:(id)arg3;
- (void)setMailboxUidValidity:(unsigned int)arg1;
- (id)offlineCache;
- (id)_uidsForMessages:(id)arg1;
- (id)addMessages:(id)arg1 newMessagesByOldMessage:(id)arg2;
- (id)deletedMessages;
- (id)offlineCacheIfOffline;
- (void)_fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 handler:(id)arg3;
- (void)_updateServerUnreadCount:(unsigned long long)arg1;
- (void)_fetchServerUnreadCountWithConnection:(id)arg1;
- (unsigned long long)_fetchMessagesWithArguments:(id)arg1 idRange:(id)arg2 onConnection:(id)arg3 synchronize:(bool)arg4 limit:(unsigned long long)arg5 topUIDToCompact:(unsigned long long)arg6 topKnownUID:(unsigned long long)arg7 success:(bool*)arg8 examinedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg9 fetchableUIDsFound:(unsigned long long*)arg10 preserveUID:(unsigned long long*)arg11;
- (id)_searchArgumentsForSynchronize;
- (bool)_shouldContinueToPreservedUID:(unsigned long long)arg1;
- (void)updateDeletedCountWithNotDeletedCount:(unsigned long long)arg1;
- (bool)performOperationRequiringConnection:(bool)arg1 withOptions:(int)arg2 operation:(id)arg3;
- (void)_performActionsOnConnection:(id)arg1 uidsToFetch:(id*)arg2 uidsToSync:(id*)arg3 messagesToCompact:(id*)arg4 libraryDetails:(id)arg5 flagSearchResults:(id)arg6 shouldForce:(bool)arg7 newUIDsToFetch:(unsigned int*)arg8;
- (id)_searchFlagsForUIDs:(id)arg1 usingConnection:(id)arg2;
- (void)_updateSelectedUID:(unsigned long long*)arg1;
- (unsigned long long)syncMessagesWithUIDs:(id)arg1 connection:(id)arg2 libraryDetails:(id)arg3 flagSearchResults:(id)arg4;
- (unsigned long long)fetchMessagesWithUIDs:(id)arg1 connection:(id)arg2 newCount:(unsigned long long)arg3 flagsToSet:(unsigned long long)arg4 queueClass:(Class)arg5;
- (void)focusedMessageDidChange:(id)arg1;
- (void)setUid:(unsigned int)arg1 forMessageWithTemporaryUid:(unsigned int)arg2;
- (bool)hasValidCacheFileForMessage:(id)arg1;
- (void)setSequenceIdentifier:(id)arg1 forUIDs:(id)arg2;
- (id)sequenceIdentifierForUIDs:(id)arg1;
- (void)setHighestModSequence:(unsigned long long)arg1;
- (void)setServerMessageCount:(unsigned long long)arg1;
- (void)connection:(id)arg1 didFinishLoadingBodyData:(id)arg2 section:(id)arg3;
- (void)connection:(id)arg1 didLoadMoreBodyData:(id)arg2 section:(id)arg3;
- (void)connection:(id)arg1 didBeginBodyLoad:(id)arg2 section:(id)arg3;
- (void)connectionDidDisconnect:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 forCommand:(struct { int x1; id x2; id x3; unsigned long long x4; id x5; }*)arg3;
- (bool)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(struct { int x1; id x2; id x3; unsigned long long x4; id x5; }*)arg3;
- (void)willRemoveDelegation:(id)arg1;
- (void)close;
- (void)dealloc;

@end
