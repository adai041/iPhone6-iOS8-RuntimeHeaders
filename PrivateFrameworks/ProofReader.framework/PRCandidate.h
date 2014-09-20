/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@class NSString;

@interface PRCandidate : NSObject  {
    NSString *_string;
    double _errorScore;
    double _lmScore;
}

+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 errorType:(unsigned long long)arg3;
+ (id)candidateWithString:(id)arg1 errorScore:(double)arg2;
+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 errorType:(unsigned long long)arg4;
+ (id)candidateWithString:(id)arg1 errorType:(unsigned long long)arg2;
+ (double)errorScoreForType:(unsigned long long)arg1;

- (double)score;
- (void)setLanguageModelScore:(double)arg1;
- (void)setErrorScore:(double)arg1;
- (double)languageModelScore;
- (double)errorScore;
- (id)initWithString:(id)arg1 errorScore:(double)arg2;
- (id)string;
- (id)description;
- (void)dealloc;

@end