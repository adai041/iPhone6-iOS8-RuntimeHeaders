/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@class CDSession, NSString;

@interface CDBudget : NSObject  {
    CDSession *_session;
    NSString *_name;
    long long _type;
    unsigned long long _integerId;
}

@property(readonly) NSString * name;
@property(readonly) long long type;
@property(readonly) unsigned long long integerId;
@property(readonly) CDSession * session;


- (bool)deleteWithError:(id*)arg1;
- (unsigned long long)integerId;
- (id)forecastEffectiveOnDate:(id)arg1 error:(id*)arg2;
- (bool)compareValueTo:(long long)arg1 swapOnMatchWithValue:(long long)arg2 error:(id*)arg3;
- (bool)decrementByValue:(long long)arg1 error:(id*)arg2;
- (bool)incrementByValue:(long long)arg1 error:(id*)arg2;
- (id)initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5;
- (id)session;
- (long long)creditsRemainingWithError:(id*)arg1;
- (id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(long long)arg3 error:(id*)arg4;
- (void).cxx_destruct;
- (id)name;
- (long long)type;

@end
