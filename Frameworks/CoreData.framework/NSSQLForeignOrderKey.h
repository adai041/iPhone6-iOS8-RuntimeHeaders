/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLForeignKey;

@interface NSSQLForeignOrderKey : NSSQLColumn  {
    NSSQLForeignKey *_foreignKey;
}


- (void)dealloc;
- (void)setFKForReadOnlyFetch:(id)arg1;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;
- (id)toOneRelationship;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)foreignKey;

@end
