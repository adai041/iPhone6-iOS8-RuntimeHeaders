/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class <NSISVariableDelegate>;

@interface NSISVariable : NSObject  {
    <NSISVariableDelegate> *_delegate;
    int _refCount;
    unsigned int _ident;
}

@property <NSISVariableDelegate> * delegate;
@property(readonly) bool shouldBeMinimized;
@property(readonly) int valueRestriction;

+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3;
+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3;
+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3;

- (oneway void)release;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)delegate;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)retainCount;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)retain;
- (bool)shouldBeMinimized;
- (bool)valueIsUserVisible;
- (double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (bool)markedConstraintIsEligibleForIntegralizationAdjustment;
- (id)markedConstraint;
- (int)valueRestriction;
- (bool)shouldBeIntegral;

@end
