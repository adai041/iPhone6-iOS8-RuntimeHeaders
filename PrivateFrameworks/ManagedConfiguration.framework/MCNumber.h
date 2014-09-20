/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber;

@interface MCNumber : NSObject <NSSecureCoding> {
    NSNumber *_number;
}

@property(retain) NSNumber * number;

+ (id)numberWithInteger:(long long)arg1;
+ (id)numberWithInt:(int)arg1;
+ (id)numberWithUnsignedInteger:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;

- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (void)setNumber:(id)arg1;
- (id)initWithUnsignedInteger:(unsigned long long)arg1;
- (id)initWithInteger:(long long)arg1;
- (id)number;
- (void).cxx_destruct;
- (id)initWithInt:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
