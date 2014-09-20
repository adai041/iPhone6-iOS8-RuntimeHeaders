/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableDictionary, NSMutableSet, <NSISEngineDelegate>, NSMutableArray, NSMapTable, NSISVariable;

@interface NSISEngine : NSObject <NSISVariableDelegate> {
    NSMapTable *_rows;
    NSMapTable *_rowsCrossIndex;
    NSISVariable *_headForObjectiveRow;
    NSMutableArray *_variablesWithValueRestrictionViolations;
    NSMutableArray *_pendingRemovals;
    <NSISEngineDelegate> *_delegate;
    NSMapTable *_brokenConstraintPositiveErrors;
    NSMapTable *_brokenConstraintNegativeErrors;
    NSMutableSet *_variablesWithIntegralizationViolations;
    struct __CFDictionary { } *_integralizationAdjustmentsForConstraintMarkers;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _unsatisfiabilityHandler;

    unsigned long long _pivotCount;
    struct CGSize { 
        double width; 
        double height; 
    } _engineScalingCoefficients;
    NSMutableDictionary *_recordedOperations;
    int _automaticOptimizationDisabledCount;
    int _engineDelegateCallsDisabledCount;
    int _variableDelegateCallsDisabledCount;
    unsigned int _totalChangeCount;
    unsigned int _changeCountAtLastOptimization;
    bool_lastOptimizationInvolvedIntegralization;
    bool_shouldIntegralize;
    bool_revertsAfterUnsatisfiabilityHandler;
    bool_accumulatingRemovals;
}

@property <NSISEngineDelegate> * delegate;
@property bool shouldIntegralize;
@property bool revertsAfterUnsatisfiabilityHandler;
@property struct CGSize { double x1; double x2; } engineScalingCoefficients;
@property(retain) NSMapTable * rows;
@property(retain) NSMapTable * rowsCrossIndex;
@property(retain) NSISVariable * headForObjectiveRow;
@property(retain) NSMutableArray * variablesWithValueRestrictionViolations;
@property(retain) NSMutableSet * variablesWithIntegralizationViolations;
@property struct __CFDictionary { }* integralizationAdjustmentsForConstraintMarkers;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (bool)exerciseAmbiguityInVariable:(id)arg1;
- (id)constraintsAffectingValueOfVariable:(id)arg1;
- (struct CGSize { double x1; double x2; })engineScalingCoefficients;
- (id)candidateRedundantConstraints;
- (void)setShouldIntegralize:(bool)arg1;
- (void)setRows:(id)arg1;
- (id)rows;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (bool)hasValue:(double*)arg1 forVariable:(id)arg2;
- (bool)valueOfVariableIsAmbiguous:(id)arg1;
- (double)valueForVariable:(id)arg1;
- (void)withAutomaticOptimizationDisabled:(id)arg1;
- (void)setEngineScalingCoefficients:(struct CGSize { double x1; double x2; })arg1;
- (id)constraints;
- (id)delegate;
- (id)description;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)setRevertsAfterUnsatisfiabilityHandler:(bool)arg1;
- (bool)revertsAfterUnsatisfiabilityHandler;
- (id)variablesWithIntegralizationViolations;
- (id)variablesWithValueRestrictionViolations;
- (id)headForObjectiveRow;
- (id)rowsCrossIndex;
- (unsigned long long)pivotCount;
- (void)withDelegateCallsDisabled:(id)arg1;
- (bool)shouldIntegralize;
- (unsigned long long)replayCommandsData:(id)arg1 verifyingIntegrity:(bool)arg2;
- (id)recordedCommandsData;
- (void)beginRecording;
- (unsigned long long)numberOfConstraintsEligibleForAdjustmentToIntegralizeVariable:(id)arg1 ignoringConstraintsWithMarkers:(id)arg2;
- (void)performModifications:(id)arg1 withUnsatisfiableConstraintsHandler:(id)arg2;
- (void)addExpression:(id)arg1 times:(double)arg2 toRowWithHead:(id)arg3 body:(id)arg4;
- (id)allRowHeads;
- (struct __CFDictionary { }*)integralizationAdjustmentsForConstraintMarkers;
- (bool)incoming:(id*)arg1 andOutgoing:(id*)arg2 rowHeadsThatMakeValueAmbiguousForVariable:(id)arg3;
- (bool)bodyVarIsAmbiguous:(id)arg1 withPivotOfOutgoingRowHead:(id*)arg2;
- (void)enumerateOriginalConstraints:(id)arg1;
- (void)enumerateRowsCrossIndex:(id)arg1;
- (void)enumerateRows:(id)arg1;
- (id)tryToOptimizeReturningMutuallyExclusiveConstraints;
- (void)_coreReplaceMarker:(id)arg1 withMarkerPlusDelta:(double)arg2;
- (id)negativeErrorVarForBrokenConstraintWithMarker:(id)arg1;
- (id)positiveErrorVarForBrokenConstraintWithMarker:(id)arg1;
- (id)outgoingRowHeadForRemovingConstraintWithMarker:(id)arg1;
- (void)addExpression:(id)arg1 priority:(double)arg2 times:(double)arg3 toObjectiveRowWithHead:(id)arg4 body:(id)arg5;
- (bool)tryUsingArtificialVariableToAddConstraintWithMarker:(id)arg1 rowBody:(id)arg2 usingInfeasibilityHandlingBehavior:(long long)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (bool)tryAddingDirectly:(id)arg1;
- (id)createExpressionBySubstitutingForRowHeadVariablesInExpression:(id)arg1;
- (void)withBehaviors:(unsigned long long)arg1 performModifications:(id)arg2;
- (void)_flushPendingRemovals;
- (void)fixupIntegralizationViolations;
- (id)fixUpValueRestrictionViolationsWithInfeasibilityHandlingBehavior:(long long)arg1;
- (void)setIntegralizationAdjustmentsForConstraintMarkers:(struct __CFDictionary { }*)arg1;
- (void)setVariablesWithIntegralizationViolations:(id)arg1;
- (void)setVariablesWithValueRestrictionViolations:(id)arg1;
- (void)setHeadForObjectiveRow:(id)arg1;
- (void)setRowsCrossIndex:(id)arg1;
- (void)removeBodyVarFromAllRows:(id)arg1;
- (unsigned long long)minimizeConstantInObjectiveRowWithHead:(id)arg1;
- (id)chooseHeadForRowBody:(id)arg1;
- (void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(id)arg1;
- (void)setIntegralizationAdjustment:(double)arg1 forMarker:(id)arg2;
- (double)valueForVariableWithoutIntegralizationAdjustments:(id)arg1;
- (id)variableToWorkOnAmongVariablesWithIntegralizationViolationsIgnoringLostCauses:(id)arg1 varsAlreadyAdjusted:(id)arg2;
- (double)integralizationAdjustmentForMarker:(id)arg1;
- (id)handleUnsatisfiableRowWithHead:(id)arg1 body:(id)arg2 usingInfeasibilityHandlingBehavior:(long long)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (void)pivotToMakeBodyVar:(id)arg1 newHeadOfRowWithHead:(id)arg2 andDropRow:(bool)arg3;
- (id)chooseOutgoingRowHeadForIncomingRowHead:(id)arg1;
- (id)errorVariableIntroducedByBreakingConstraintWithMarker:(id)arg1 errorIsPositive:(bool)arg2;
- (id)fallbackMarkerForConstraintToBreakInRowWithHead:(id)arg1 body:(id)arg2;
- (void)setNegativeErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (void)setPositiveErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (void)replaceMarker:(id)arg1 withMarkerPlusCoefficient:(double)arg2 timesVariable:(id)arg3;
- (void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3 toObjectiveRowWithHead:(id)arg4 body:(id)arg5;
- (id)rowBodyForObjectiveHead:(id)arg1;
- (void)addVariable:(id)arg1 coefficient:(double)arg2 toRowWithHead:(id)arg3 body:(id)arg4;
- (void)setRowWithHead:(id)arg1 body:(id)arg2;
- (void)substituteOutAllOccurencesOfBodyVar:(id)arg1 withExpression:(id)arg2;
- (void)removeRowWithHead:(id)arg1;
- (id)rowBodyForNonObjectiveHead:(id)arg1;
- (void)rowCrossIndexNoteDroppedBodyVar:(id)arg1;
- (id)rowHeadsForRowsContainingBodyVar:(id)arg1;
- (void)rawRemoveRowWithHead:(id)arg1;
- (void)rowCrossIndexNoteBodyVariable:(id)arg1 wasRemovedFromRowWithHead:(id)arg2;
- (id)rowBodyForHead:(id)arg1;
- (void)rowCrossIndexNoteBodyVariable:(id)arg1 wasAddedToRowWithHead:(id)arg2;
- (void)rawSetRowWithHead:(id)arg1 body:(id)arg2;
- (id)markerForBrokenConstraintWithNegativeErrorVar:(id)arg1;
- (id)markerForBrokenConstraintWithPositiveErrorVar:(id)arg1;
- (id)_brokenConstraintNegativeErrorsIfAvailable;
- (id)_brokenConstraintNegativeErrors;
- (id)_brokenConstraintPositiveErrorsIfAvailable;
- (id)_brokenConstraintPositiveErrors;
- (void)verifyInternalIntegrity;
- (bool)tryToChangeConstraintSuchThatMarker:(id)arg1 isReplacedByMarkerPlusDelta:(double)arg2 undoHandler:(id)arg3;
- (void)constraintDidChangeSuchThatMarker:(id)arg1 shouldBeReplacedByMarkerPlusDelta:(double)arg2;
- (void)removeConstraintWithMarker:(id)arg1;
- (void)changeVariableToBeOptimized:(id)arg1 fromPriority:(double)arg2 toPriority:(double)arg3;
- (void)removeVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (void)addVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (bool)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 integralizationAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (unsigned long long)optimize;

@end
