/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSKeyValueUnnestedProperty;

@interface NSKeyValueNestedProperty : NSKeyValueProperty  {
    NSString *_relationshipKey;
    NSString *_keyPathFromRelatedObject;
    NSKeyValueUnnestedProperty *_relationshipProperty;
    NSString *_keyPathWithoutOperatorComponents;
    bool_isAllowedToResultInForwarding;
    id _dependentValueKeyOrKeys;
    bool_dependentValueKeyOrKeysIsASet;
}


- (id)description;
- (void)dealloc;
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 firstDotIndex:(unsigned long long)arg3 propertiesBeingInitialized:(struct __CFSet { }*)arg4;
- (void)_addDependentValueKey:(id)arg1;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet { }*)arg1 getAffectingProperties:(id)arg2;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(bool*)arg2;
- (Class)_isaForAutonotifying;
- (bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(bool)arg4 forwardingValues:(struct { id x1; id x2; }*)arg5;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(bool)arg4 forwardingValues:(struct { id x1; id x2; })arg5;
- (bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(bool)arg3;
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(bool)arg3;
- (id)dependentValueKeyOrKeysIsASet:(bool*)arg1;

@end
