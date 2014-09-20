/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLEntity, NSString, NSSQLWhereIntermediate, NSSQLOrderIntermediate, NSSQLLimitIntermediate;

@interface NSSQLStatementIntermediate : NSSQLIntermediate  {
    NSSQLEntity *_governingEntity;
    NSString *_governingAlias;
    NSString *_correlationToken;
    NSSQLWhereIntermediate *_whereClause;
    NSSQLLimitIntermediate *_limitClause;
    NSSQLOrderIntermediate *_orderIntermediate;
}


- (void)dealloc;
- (id)orderIntermediate;
- (void)setGoverningEntity:(id)arg1;
- (void)setCorrelationToken:(id)arg1;
- (void)setGoverningAlias:(id)arg1;
- (id)governingEntity;
- (bool)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)limitIntermediate;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3;
- (void)setOrderIntermediate:(id)arg1;
- (void)setWhereIntermediate:(id)arg1;
- (id)governingAlias;
- (id)whereIntermediate;
- (void)setLimitIntermediate:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;

@end