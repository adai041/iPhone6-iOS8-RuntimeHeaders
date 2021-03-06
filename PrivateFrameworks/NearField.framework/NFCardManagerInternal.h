/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@class XPCConnection, NSMutableDictionary, NSString;

@interface NFCardManagerInternal : NSObject <XPCConnectionDelegate> {
    XPCConnection *_xpcConnection;
    NSMutableDictionary *_cards;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (unsigned int)deleteCardsWithAIDs:(id)arg1;
- (unsigned int)certificates:(id*)arg1;
- (void)refreshCardCache;
- (unsigned int)isInRestrictedMode;
- (unsigned int)nextPushInfo:(id*)arg1;
- (unsigned int)serverRegistrationInfo:(id*)arg1;
- (unsigned int)connectToServer:(id)arg1 blocking:(bool)arg2 retry:(bool)arg3;
- (unsigned int)activateOnlyCardWithAID:(id)arg1;
- (unsigned int)deleteAllCards;
- (unsigned int)installedAIDs:(id*)arg1;
- (unsigned int)cardWithAID:(id)arg1 card:(id*)arg2;
- (unsigned int)deauthorize;
- (unsigned int)authorizeForECommerce:(id)arg1 parameters:(id)arg2 response:(id*)arg3;
- (unsigned int)authorizeForContactless:(id)arg1;
- (unsigned int)signChallenge:(id)arg1 response:(id*)arg2;
- (unsigned int)serialNumber:(id*)arg1;
- (unsigned int)setCardsWithAIDs:(id)arg1 asActive:(bool)arg2;
- (unsigned int)refreshCards;
- (void)XPCConnectionServiceDidRestart:(id)arg1;
- (void)XPCConnectionDidTerminate:(id)arg1;
- (id)_getXPCConnection;
- (void)dealloc;

@end
