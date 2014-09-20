/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSURL, NSURLResponseInternal, NSString;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {
    NSURLResponseInternal *_internal;
}

@property(copy,readonly) NSURL * URL;
@property(copy,readonly) NSString * MIMEType;
@property(readonly) long long expectedContentLength;
@property(copy,readonly) NSString * textEncodingName;
@property(copy,readonly) NSString * suggestedFilename;

+ (bool)supportsSecureCoding;
+ (id)getObjectKeyWithIndex:(long long)arg1;
+ (id)_responseWithCFURLResponse:(struct _CFURLResponse { }*)arg1;

- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4;
- (long long)expectedContentLength;
- (id)MIMEType;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)suggestedFilename;
- (id)textEncodingName;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (struct _CFURLResponse { }*)_CFURLResponse;
- (void)dealloc;
- (id)_peerCertificateChain;
- (double)_calculatedExpiration;
- (double)_freshnessLifetime;
- (bool)_mustRevalidate;
- (id)_lastModifiedDate;
- (void)_setMIMEType:(id)arg1;
- (void)_setExpectedContentLength:(long long)arg1;
- (id)_cacheTime;

@end
