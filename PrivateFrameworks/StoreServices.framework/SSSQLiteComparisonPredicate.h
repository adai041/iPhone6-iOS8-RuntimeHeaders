/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteComparisonPredicate : SSSQLitePropertyPredicate <NSCopying> {
    long long _comparisonType;
    id _value;
}

@property(readonly) long long comparisonType;
@property(readonly) id value;

+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;
+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;

- (id)_comparisonTypeString;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)SQLForEntityClass:(Class)arg1;
- (id)value;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (long long)comparisonType;

@end