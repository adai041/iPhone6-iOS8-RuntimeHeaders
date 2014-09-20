/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSArray;

@interface MCLDAPAccountPayload : MCPayload  {
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    bool_useSSL;
    NSArray *_searchSettings;
    NSString *_accountPersistentUUID;
}

@property(retain,readonly) NSString * accountDescription;
@property(retain,readonly) NSString * hostname;
@property(retain) NSString * username;
@property(retain) NSString * password;
@property(retain,readonly) NSArray * searchSettings;
@property(readonly) bool useSSL;
@property(copy) NSString * accountPersistentUUID;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (id)hostname;
- (id)username;
- (id)accountDescription;
- (id)searchSettings;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)accountPersistentUUID;
- (bool)useSSL;
- (void)setUsername:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)password;
- (void).cxx_destruct;
- (id)title;
- (id)description;

@end
