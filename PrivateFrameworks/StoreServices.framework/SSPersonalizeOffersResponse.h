/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSMutableDictionary, NSString;

@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding> {
    NSMutableDictionary *_actionDisplayNames;
    NSMutableDictionary *_actionParameters;
    NSArray *_items;
    NSMutableDictionary *_priceDisplayNames;
}

@property(readonly) NSArray * personalizedItems;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)actionDisplayNameForItemType:(id)arg1;
- (id)priceDisplayForItemType:(id)arg1;
- (id)actionParametersForItemIdentifier:(id)arg1;
- (void)setPriceDisplayString:(id)arg1 forItemType:(id)arg2;
- (void)setActionParameters:(id)arg1 forItemIdentifier:(id)arg2;
- (void)setActionDisplayNameString:(id)arg1 forItemType:(id)arg2;
- (id)personalizedItems;
- (void)_setPersonalizedItems:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)dealloc;

@end
