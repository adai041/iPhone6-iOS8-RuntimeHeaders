/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString;

@interface SSTermsAndConditions : NSObject <NSCopying> {
    bool_requiresAuthentication;
    NSString *_text;
    bool_userAccepted;
    long long _versionID;
}

@property(getter=isUserAccepted) bool userAccepted;
@property NSString * currentText;
@property long long currentVersionIdentifier;
@property(readonly) bool requiresAuthentication;


- (void)setUserAccepted:(bool)arg1;
- (void)setCurrentVersionIdentifier:(long long)arg1;
- (long long)currentVersionIdentifier;
- (void)setCurrentText:(id)arg1;
- (id)currentText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)isUserAccepted;
- (id)initWithResponseData:(id)arg1 error:(id*)arg2;
- (bool)requiresAuthentication;

@end
