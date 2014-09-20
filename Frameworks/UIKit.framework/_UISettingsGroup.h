/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSHashTable;

@interface _UISettingsGroup : _UISettings <NSFastEnumeration> {
    NSMutableArray *_internal_group;
    NSHashTable *_internal_groupObservers;
}


- (void)enumerateSettingsUsingBlock:(id)arg1;
- (void)moveSettings:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeSettings:(id)arg1;
- (void)addSettings:(id)arg1;
- (bool)containsSettings:(id)arg1;
- (id)settingsAtIndex:(unsigned long long)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)_sendMove:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)moveSettingsAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)_sendRemove:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeSettingsAtIndex:(unsigned long long)arg1;
- (void)_sendInsert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertSettings:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)removeGroupObserver:(id)arg1;
- (void)addGroupObserver:(id)arg1;
- (void)_startObservingPropertiesAndChildren;
- (bool)_hasObservers;
- (void)_addInternalEntriesToArchiveDictionary:(id)arg1;
- (void)_stopObservingPropertiesAndChildren;
- (void)_completeInitByApplyingArchiveDictionary:(id)arg1;
- (void)_continueInitBySettingDefaultValues;
- (id)_startInit;
- (void)setValuesFromModel:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)archiveDictionary;

@end
