/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSNumberFormatter;

@interface NSMassFormatter : NSFormatter  {
    void *_formatter;
    bool_isForPersonMassUse;
    void *_reserved[2];
}

@property(copy) NSNumberFormatter * numberFormatter;
@property long long unitStyle;
@property(getter=isForPersonMassUse) bool forPersonMassUse;


- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setForPersonMassUse:(bool)arg1;
- (bool)isForPersonMassUse;
- (id)unitStringFromKilograms:(double)arg1 usedUnit:(long long*)arg2;
- (long long)targetUnitFromKilograms:(double)arg1;
- (id)stringFromKilograms:(double)arg1;
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;
- (long long)unitStyle;
- (void)setUnitStyle:(long long)arg1;
- (id)numberFormatter;
- (void)setNumberFormatter:(id)arg1;

@end
