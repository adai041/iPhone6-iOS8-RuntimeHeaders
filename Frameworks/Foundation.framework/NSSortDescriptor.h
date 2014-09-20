/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSSortDescriptor : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _sortDescriptorFlags;
    NSString *_key;
    SEL _selector;
    id _selectorOrBlock;
}

@property(copy,readonly) NSString * key;
@property(readonly) bool ascending;
@property(readonly) SEL selector;
@property(readonly) id comparator;
@property(retain,readonly) id reversedSortDescriptor;

+ (id)sortDescriptorWithKey:(id)arg1 ascending:(bool)arg2;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(bool)arg2 selector:(SEL)arg3;
+ (void)initialize;
+ (bool)supportsSecureCoding;
+ (id)_defaultSelectorName;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(bool)arg2 comparator:(id)arg3;

- (id)reversedSortDescriptor;
- (bool)ascending;
- (id)initWithKey:(id)arg1 ascending:(bool)arg2 selector:(SEL)arg3;
- (id)key;
- (id)initWithKey:(id)arg1 ascending:(bool)arg2;
- (SEL)selector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_setAscending:(bool)arg1;
- (void)_setKey:(id)arg1;
- (bool)_isEqualToSortDescriptor:(id)arg1;
- (void)_disallowEvaluation;
- (void)_setSelectorName:(id)arg1;
- (id)_selectorName;
- (id)initWithKey:(id)arg1 ascending:(bool)arg2 comparator:(id)arg3;
- (long long)compareObject:(id)arg1 toObject:(id)arg2;
- (id)comparator;
- (void)allowEvaluation;
- (id)replacementObjectForPortCoder:(id)arg1;

@end
