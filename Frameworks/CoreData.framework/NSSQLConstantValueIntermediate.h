/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLConstantValueIntermediate : NSSQLIntermediate  {
    unsigned int _type;
    id _constantValue;
}


- (void)dealloc;
- (id)initWithConstantValue:(id)arg1 ofType:(unsigned int)arg2 inScope:(id)arg3;
- (bool)_addBindVarForConstVal1:(id)arg1 inContext:(id)arg2;
- (bool)_addBindVarForConstId:(id)arg1 ofType:(unsigned int)arg2 inContext:(id)arg3;
- (unsigned int)sqlTypeForProperty:(id)arg1;
- (id)propertyAtEndOfKeyPathExpression:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithConstantValue:(id)arg1 inScope:(id)arg2;

@end
