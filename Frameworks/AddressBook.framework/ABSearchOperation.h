/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, <ABSearchOperationDelegate>, NSPredicate, NSThread;

@interface ABSearchOperation : NSOperation  {
    void *_addressBook;
    NSPredicate *_predicate;
    NSArray *_prefetchProperties;
    unsigned int _sortOrdering;
    void *_internalSearchAddressBook;
    <ABSearchOperationDelegate> *_delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;

    NSThread *_progressBlockThread;
    void *_context;
    NSArray *_copiedRecords;
    NSArray *_copiedSuggestions;
}

@property void* addressBook;
@property(retain) NSPredicate * predicate;
@property(copy) NSArray * prefetchProperties;
@property <ABSearchOperationDelegate> * delegate;
@property void* context;
@property unsigned int sortOrdering;
@property(copy) id progressBlock;
@property void* internalSearchAddressBook;

+ (id)personPredicateWithValue:(id)arg1 comparison:(long long)arg2 forProperty:(int)arg3 addressBook:(void*)arg4;
+ (id)personPredicateWithGroup:(void*)arg1 addressBook:(void*)arg2;
+ (id)personPredicateWithAnyValueForProperty:(int)arg1 addressBook:(void*)arg2;
+ (id)personPredicateWithNameOnly:(id)arg1 inAccount:(id)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithNameLike:(id)arg1 inGroups:(id)arg2 sources:(id)arg3 addressBook:(void*)arg4;
+ (id)personPredicateWithNameLike:(id)arg1 inAccount:(id)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 includeSourceInResults:(bool)arg3 includePhotosInResults:(bool)arg4 addressBook:(void*)arg5;
+ (id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 includeSourceInResults:(bool)arg3 addressBook:(void*)arg4;
+ (id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithNameLike:(id)arg1 inGroup:(void*)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithName:(id)arg1 addressBook:(void*)arg2;
+ (id)personPredicateWithNameLike:(id)arg1 addressBook:(void*)arg2;
+ (id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void*)arg3;

- (void)setProgressBlock:(id)arg1;
- (void*)addressBook;
- (id)progressBlock;
- (bool)isConcurrent;
- (void)main;
- (id)predicate;
- (void)setPredicate:(id)arg1;
- (void)setContext:(void*)arg1;
- (void*)context;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)cancel;
- (void)setAddressBook:(void*)arg1;
- (void)setSortOrdering:(unsigned int)arg1;
- (void)setPrefetchProperties:(id)arg1;
- (id)prefetchProperties;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 moreComing:(bool)arg3;
- (void)setInternalSearchAddressBook:(void*)arg1;
- (void)_mainThread_tellDelegateSearchFoundMatch:(void*)arg1;
- (void*)internalSearchAddressBook;
- (unsigned int)sortOrdering;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;
- (bool)predicateShouldContinue:(id)arg1;

@end
