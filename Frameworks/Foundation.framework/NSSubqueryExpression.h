/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSExpression, NSPredicate;

@interface NSSubqueryExpression : NSExpression  {
    NSExpression *_collection;
    NSExpression *_variableExpression;
    NSPredicate *_subpredicate;
}

+ (bool)supportsSecureCoding;

- (id)variable;
- (id)predicate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (bool)_shouldUseParensWithDescription;
- (id)initWithExpression:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)predicateFormat;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)initWithExpression:(id)arg1 usingIteratorExpression:(id)arg2 predicate:(id)arg3;
- (id)variableExpression;
- (id)collection;
- (void)allowEvaluation;
- (id)minimalFormInContext:(id)arg1;

@end
