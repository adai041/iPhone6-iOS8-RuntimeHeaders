/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIUserNotificationAction : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool_authenticationRequired;
    bool_destructive;
    NSString *_activationModeString;
    NSString *_identifier;
    NSString *_title;
    unsigned long long _activationMode;
}

@property(copy) NSString * identifier;
@property(copy) NSString * title;
@property unsigned long long activationMode;
@property(getter=isAuthenticationRequired) bool authenticationRequired;
@property(getter=isDestructive) bool destructive;
@property(readonly) NSString * activationModeString;

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 activationMode:(unsigned long long)arg3 isAuthenticationRequired:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void)setDestructive:(bool)arg1;
- (void)setAuthenticationRequired:(bool)arg1;
- (void)setActivationMode:(unsigned long long)arg1;
- (id)activationModeString;
- (bool)isDestructive;
- (bool)isAuthenticationRequired;
- (unsigned long long)activationMode;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 activationMode:(unsigned long long)arg3 isAuthenticationRequired:(bool)arg4 isDestructive:(bool)arg5;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)validatedAction;
- (void)setIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)title;
- (id)identifier;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
