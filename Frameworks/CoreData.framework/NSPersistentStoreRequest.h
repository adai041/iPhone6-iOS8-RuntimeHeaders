/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying> {
    NSArray *_affectedStores;
}

@property(retain) NSArray * affectedStores;
@property(readonly) unsigned long long requestType;

+ (void)initialize;

- (unsigned long long)requestType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setAffectedStores:(id)arg1;
- (id)affectedStores;

@end
