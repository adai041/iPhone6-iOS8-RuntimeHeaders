/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _operatorType;
    unsigned long long _modifier;
}

+ (bool)supportsSecureCoding;
+ (id)operatorWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2;
+ (id)_getSymbolForType:(unsigned long long)arg1;
+ (SEL)_getSelectorForType:(unsigned long long)arg1;
+ (id)_newOperatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (id)operatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;

- (id)symbol;
- (unsigned long long)options;
- (SEL)selector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setModifier:(unsigned long long)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1;
- (void)_setOptions:(unsigned long long)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2;
- (bool)performOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)predicateFormat;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (unsigned long long)modifier;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (unsigned long long)operatorType;

@end