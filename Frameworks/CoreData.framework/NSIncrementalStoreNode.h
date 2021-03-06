/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject  {
    NSManagedObjectID *_objectID;
    unsigned long long _versionNumber;
    id _propertyCache;
    void *_reserved1;
}

@property(readonly) NSManagedObjectID * objectID;
@property(readonly) unsigned long long version;

+ (void)initialize;

- (id)objectID;
- (unsigned long long)version;
- (id)description;
- (void)dealloc;
- (void)updateFromSQLRow:(id)arg1;
- (void)updateWithValues:(id)arg1 version:(unsigned long long)arg2;
- (id)initWithObjectID:(id)arg1 withValues:(id)arg2 version:(unsigned long long)arg3;
- (id)initWithObjectID:(id)arg1 fromSQLRow:(id)arg2;
- (id)valueForPropertyDescription:(id)arg1;
- (id)_snapshot_;
- (const id*)knownKeyValuesPointer;
- (unsigned int)_versionNumber;
- (id)_propertyCache;

@end
