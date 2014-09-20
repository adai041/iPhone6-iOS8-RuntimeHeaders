/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSSQLEntity, NSMutableString, NSSQLFetchIntermediate, NSExpression, NSMutableArray, NSSQLColumn;

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate  {
    NSExpression *_trailingKeypath;
    NSExpression *_variableExpression;
    NSSQLFetchIntermediate *_fetchIntermediate;
    NSSQLEntity *_selectFromEntity;
    NSMutableString *_selectFromCorrelationTarget;
    NSString *_selectEntityAlias;
    NSSQLEntity *_governingEntityForVariable;
    NSSQLColumn *_variableColumn;
    NSString *_variableAlias;
    NSSQLColumn *_targetColumn;
    NSString *_targetAlias;
    NSMutableArray *_keypathsToPromote;
    bool_useDistinct;
    bool_isCount;
    bool_hasTrailingFunction;
    bool_onlyTrailIsCount;
    bool_subqueryHasTruePredicate;
}


- (void)dealloc;
- (void)_createSelectClauseInFetchWithContext:(id)arg1;
- (void)_createCollectionJoinsForFetchInContext:(id)arg1;
- (void)_setVariableColumn:(id)arg1;
- (bool)_isKeypathScopedToSubquery:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;
- (bool)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)initWithExpression:(id)arg1 trailingKeypath:(id)arg2 inScope:(id)arg3;
- (void)selectDistinct;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;

@end
