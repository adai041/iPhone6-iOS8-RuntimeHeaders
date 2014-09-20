/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSNumberFormatter;

@interface NSEnergyFormatter : NSFormatter  {
    void *_formatter;
    bool_isForFoodEnergyUse;
    void *_reserved[2];
}

@property(copy) NSNumberFormatter * numberFormatter;
@property long long unitStyle;
@property(getter=isForFoodEnergyUse) bool forFoodEnergyUse;


- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setForFoodEnergyUse:(bool)arg1;
- (id)unitStringFromJoules:(double)arg1 usedUnit:(long long*)arg2;
- (id)stringFromJoules:(double)arg1;
- (long long)targetUnitFromJoules:(double)arg1;
- (bool)isForFoodEnergyUse;
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;
- (long long)unitStyle;
- (void)setUnitStyle:(long long)arg1;
- (id)numberFormatter;
- (void)setNumberFormatter:(id)arg1;

@end