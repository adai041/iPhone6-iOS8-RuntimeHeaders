/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSMutableDictionary, <NEProfilePayloadBaseDelegate>;

@interface MCVPNPayloadBase : MCPayload  {
    NSMutableDictionary *_configurationDictionary;
    NSString *_serviceName;
    NSString *_vpnType;
    <NEProfilePayloadBaseDelegate> *_nePayloadBase;
    NSString *_userNameKey;
    NSString *_passwordKey;
    NSString *_proxyUserNameKey;
    NSString *_proxyPasswordKey;
    NSString *_sharedSecretKey;
    NSString *_pinKey;
}

@property(retain) NSMutableDictionary * configurationDictionary;
@property(copy) NSString * serviceName;
@property(copy) NSString * vpnType;
@property(retain) <NEProfilePayloadBaseDelegate> * nePayloadBase;
@property(retain) NSString * userNameKey;
@property(retain) NSString * passwordKey;
@property(retain) NSString * proxyUserNameKey;
@property(retain) NSString * proxyPasswordKey;
@property(retain) NSString * sharedSecretKey;
@property(retain) NSString * pinKey;

+ (id)NEVPNPayloadBaseDelegateWithConfigurationDict:(id)arg1;
+ (id)NEAlwaysOnVPNPayloadBaseDelegateWithConfigurationDict:(id)arg1;

- (void)setPinKey:(id)arg1;
- (id)pinKey;
- (void)setSharedSecretKey:(id)arg1;
- (id)sharedSecretKey;
- (void)setProxyPasswordKey:(id)arg1;
- (id)proxyPasswordKey;
- (void)setProxyUserNameKey:(id)arg1;
- (id)proxyUserNameKey;
- (void)setPasswordKey:(id)arg1;
- (id)passwordKey;
- (void)setUserNameKey:(id)arg1;
- (id)userNameKey;
- (void)setNePayloadBase:(id)arg1;
- (id)nePayloadBase;
- (void)setVpnType:(id)arg1;
- (void)setConfigurationDictionary:(id)arg1;
- (id)configurationDictionary;
- (id)vpnType;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void)setServiceName:(id)arg1;
- (id)serviceName;
- (void).cxx_destruct;
- (id)description;

@end
