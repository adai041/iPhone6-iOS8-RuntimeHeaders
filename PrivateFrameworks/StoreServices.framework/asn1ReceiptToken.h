/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, asn1Token;

@interface asn1ReceiptToken : NSObject  {
    unsigned long long mType;
    unsigned long long mTypeVersion;
    asn1Token *mContentToken;
}

@property(readonly) unsigned long long type;
@property(readonly) unsigned long long typeVersion;
@property(readonly) asn1Token * contentToken;
@property(readonly) NSString * stringValue;
@property(readonly) unsigned long long integerValue;

+ (id)readFromBuffer:(const char *)arg1;

- (unsigned long long)typeVersion;
- (id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3;
- (id)contentToken;
- (id)stringValue;
- (unsigned long long)type;
- (unsigned long long)integerValue;
- (id)description;
- (void)dealloc;

@end
