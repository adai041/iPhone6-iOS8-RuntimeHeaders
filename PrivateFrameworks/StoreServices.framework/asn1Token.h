/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface asn1Token : NSObject  {
    unsigned char mClass;
    unsigned long long mIdentifier;
    unsigned long long mLength;
    const char *mContent;
}

@property(readonly) unsigned char tokenClass;
@property(readonly) unsigned long long identifier;
@property(readonly) unsigned long long length;
@property(readonly) const char * content;

+ (id)readOpaqueTokenFromBuffer:(const char *)arg1;
+ (id)readTokenFromBuffer:(const char *)arg1;
+ (id)readTokenFromBuffer:(const char *)arg1 opaque:(bool)arg2;

- (unsigned char)tokenClass;
- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(bool)arg5;
- (const char *)content;
- (unsigned long long)identifier;
- (unsigned long long)length;
- (id)description;

@end
