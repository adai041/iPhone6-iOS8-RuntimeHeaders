/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, _NSLayoutConstraintConstant;

@interface NSLayoutConstraint : NSObject <NSISConstraint> {
    id _container;
    id _firstItem;
    id _secondItem;
    double _constant;
    double _loweredConstant;
    id _markerAndPositiveExtraVar;
    id _negativeExtraVar;
    unsigned long long _layoutConstraintFlags;
    float _coefficient;
    float _priority;
}

@property(getter=_encodedConstant,setter=_setEncodedConstant:) _NSLayoutConstraintConstant * encodedConstant;
@property float priority;
@property bool shouldBeArchived;
@property id firstItem;
@property long long firstAttribute;
@property long long relation;
@property id secondItem;
@property long long secondAttribute;
@property double multiplier;
@property double constant;
@property(getter=isActive) bool active;
@property(copy) NSString * identifier;
@property(readonly) bool hasBeenLowered;
@property id container;
@property(copy) NSString * symbolicConstant;
@property(getter=_loweredConstantNeedsUpdate,setter=_setLoweredConstantNeedsUpdate:) bool loweredConstantNeedsUpdate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;
+ (void)activateConstraints:(id)arg1;
+ (void)deactivateConstraints:(id)arg1;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;
+ (void)_setLegacyDecodingOnly:(bool)arg1;
+ (void)_addOrRemoveConstraints:(id)arg1 activate:(bool)arg2;
+ (id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7;
+ (bool)_UIWantsMarginAttributeSupport;

- (int)_constraintType;
- (void)setShouldBeArchived:(bool)arg1;
- (void)setSymbolicConstant:(id)arg1;
- (id)symbolicConstant;
- (id)_markerAndPositiveExtraVar;
- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (bool)_loweredConstantIsRounded;
- (bool)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (bool)_nsib_isRedundant;
- (double)multiplier;
- (long long)relation;
- (void)_setMultiplier:(double)arg1;
- (float)priority;
- (id)animations;
- (void)setPriority:(float)arg1;
- (void)setActive:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (id)container;
- (id)_identifier;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (void)setContainer:(id)arg1;
- (double)constant;
- (void)_containerGeometryDidChange;
- (long long)secondAttribute;
- (long long)firstAttribute;
- (void)_addToEngine:(id)arg1;
- (void)_removeFromEngine:(id)arg1;
- (id)secondItem;
- (bool)shouldBeArchived;
- (id)_layoutEngine;
- (void)setAnimations:(id)arg1;
- (id)firstItem;
- (void)setConstant:(double)arg1;
- (id)identifier;
- (bool)isActive;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_loweredExpression;
- (bool)_describesSameRestrictionAsConstraint:(id)arg1;
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (void)_clearWeakContainerReference;
- (void)_setPrimitiveConstraintType:(int)arg1;
- (int)_primitiveConstraintType;
- (void)_setDeferDTraceLogging:(bool)arg1;
- (bool)_deferDTraceLogging;
- (void)_setNegativeExtraVar:(id)arg1;
- (id)_negativeExtraVar;
- (void)_setMarkerAndPositiveErrorVar:(id)arg1;
- (double)_fudgeIncrement;
- (bool)_isFudgeable;
- (bool)_isIBPrototypingLayoutConstraint;
- (bool)_loweredConstantNeedsUpdate;
- (void)_setLoweredConstantNeedsUpdate:(bool)arg1;
- (void)_setSecondAttribute:(long long)arg1;
- (void)_setSecondItem:(id)arg1;
- (void)_setRelation:(long long)arg1;
- (void)_setFirstAttribute:(long long)arg1;
- (void)_setFirstItem:(id)arg1;
- (bool)_nsib_isRedundantInEngine:(id)arg1;
- (void)_makeExtraVars;
- (double)priorityForVariable:(id)arg1;
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;
- (id)_priorityDescription;
- (id)equationDescription;
- (id)asciiArtDescription;
- (id)descriptionAccessory;
- (id)_descriptionforSymbolicConstant;
- (void)_setSymbolicConstant:(id)arg1 constant:(double)arg2;
- (bool)_effectiveConstant:(double*)arg1 error:(id*)arg2;
- (bool)_tryToChangeContainerGeometryWithUndoHandler:(id)arg1;
- (void)_setSymbolicConstant:(id)arg1;
- (void)_ensureValueMaintainsArbitraryLimit:(double*)arg1;
- (id)_symbolicConstant;
- (double)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(double*)arg1;
- (bool)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(double)arg3 lastLoweredConstantWasRounded:(bool)arg4 mutuallyExclusiveConstraints:(id*)arg5;
- (bool)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(bool*)arg2;
- (void)setHasBeenLowered:(bool)arg1;
- (struct CGSize { double x1; double x2; })_engineToContainerScalingCoefficients;
- (double)_allowedMagnitudeForIntegralizationAdjustment;
- (void)_setIdentifier:(id)arg1;
- (id)_constantDescriptionForDTrace;
- (bool)hasBeenLowered;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (bool)defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 error:(id*)arg3;
- (void)_setEncodedConstant:(id)arg1;
- (id)_encodedConstant;

@end
