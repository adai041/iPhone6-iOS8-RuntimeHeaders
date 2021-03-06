/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIHandwritingCompositionCandidate : TIKeyboardCandidateSingle  {
    unsigned long long _deleteCount;
}

+ (bool)supportsSecureCoding;
+ (int)type;

- (id)initWithCandidate:(id)arg1 deleteCount:(unsigned long long)arg2;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (unsigned long long)deleteCount;
- (id)label;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
