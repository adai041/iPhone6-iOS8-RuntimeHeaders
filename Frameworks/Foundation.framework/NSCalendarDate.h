/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSTimeZone;

@interface NSCalendarDate : NSDate  {
    unsigned long long refCount;
    double _timeIntervalSinceReferenceDate;
    NSTimeZone *_timeZone;
    NSString *_formatString;
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)distantPast;
+ (id)distantFuture;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2;
+ (id)calendarDate;
+ (id)dateWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;

- (oneway void)release;
- (id)descriptionWithLocale:(id)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)timeZone;
- (id)initWithString:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimeZone:(id)arg1;
- (double)timeIntervalSinceReferenceDate;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2;
- (id)descriptionWithCalendarFormat:(id)arg1;
- (void)years:(long long*)arg1 months:(long long*)arg2 days:(long long*)arg3 hours:(long long*)arg4 minutes:(long long*)arg5 seconds:(long long*)arg6 sinceDate:(id)arg7;
- (long long)microsecondOfSecond;
- (long long)dayOfCommonEra;
- (id)timeZoneDetail;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
- (id)descriptionWithCalendarFormat:(id)arg1 locale:(id)arg2;
- (id)calendarFormat;
- (void)setCalendarFormat:(id)arg1;
- (long long)dayOfYear;
- (long long)dayOfWeek;
- (id)dateByAddingYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6;
- (id)initWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
- (long long)secondOfMinute;
- (long long)minuteOfHour;
- (long long)hourOfDay;
- (long long)dayOfMonth;
- (long long)monthOfYear;
- (long long)yearOfCommonEra;
- (id)addTimeInterval:(double)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

@end
