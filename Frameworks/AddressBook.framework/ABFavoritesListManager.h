/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSMutableArray;

@interface ABFavoritesListManager : NSObject  {
    void *_addressBook;
    NSMutableArray *_list;
    struct __CFDictionary { } *_uidToEntry;
    struct { 
        unsigned int dirty : 1; 
        unsigned int postCount : 1; 
        unsigned int needsReload : 1; 
        unsigned int unused : 29; 
    } _flags;
}

+ (id)sharedInstance;
+ (id)sharedInstanceWithAddressBook:(void*)arg1;

- (void)addEntry:(id)arg1;
- (id)initWithAddressBook:(void*)arg1;
- (void)_postChangeNotification;
- (id)entries;
- (void)dealloc;
- (void)save;
- (void)removeAllEntries;
- (void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)removeEntryAtIndex:(long long)arg1;
- (void)_listChangedExternally;
- (void)saveImmediately;
- (bool)addEntryForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3;
- (bool)containsEntryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (bool)containsEntryWithIdentifier:(int)arg1 forPerson:(void*)arg2;
- (id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 value:(id)arg4 label:(id)arg5;
- (void)_delayedLookup;
- (bool)_writeFavoritesToFile:(id)arg1;
- (void)_scheduleSave;
- (void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2;
- (bool)isFull;
- (id)entryWithIdentifier:(int)arg1 forPerson:(void*)arg2;
- (id)entryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)entriesForPerson:(void*)arg1;
- (id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 identifier:(int)arg4 value:(id)arg5 label:(id)arg6;
- (bool)_isValueForEntry:(id)arg1 equalToValue:(id)arg2;
- (id)entriesForPeople:(id)arg1;
- (void)_loadList;
- (void)_entryIdentityChanged:(id)arg1;
- (void)_loadListWithAddressBook:(void*)arg1;
- (void)recacheIdentitiesSoon;
- (void)_addEntryToMap:(id)arg1;
- (bool)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2;

@end
