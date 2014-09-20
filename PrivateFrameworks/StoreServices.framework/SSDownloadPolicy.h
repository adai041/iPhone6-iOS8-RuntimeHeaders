/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSMutableArray, NSArray;

@interface SSDownloadPolicy : NSObject <NSCoding, SSXPCCoding, NSCopying> {
    long long _bagType;
    NSString *_downloadKind;
    NSMutableArray *_policyRules;
}

@property(readonly) NSString * downloadKind;
@property(readonly) long long URLBagType;
@property(copy) NSArray * policyRules;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setPolicyRules:(id)arg1;
- (void)setPolicyRule:(id)arg1;
- (id)_policyRuleForSizeLimit:(long long)arg1;
- (void)unionNetworkConstraints:(id)arg1;
- (id)downloadKind;
- (id)initWithNetworkConstraints:(id)arg1;
- (id)policyRules;
- (long long)URLBagType;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)unionPolicyRule:(id)arg1;
- (id)initWithDownloadKind:(id)arg1 URLBagType:(long long)arg2;

@end