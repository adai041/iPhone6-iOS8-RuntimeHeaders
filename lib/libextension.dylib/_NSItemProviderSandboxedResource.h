/* Generated by RuntimeBrowser.
   Image: /usr/lib/libextension.dylib
 */

@class NSURL, NSData;

@interface _NSItemProviderSandboxedResource : NSObject <NSSecureCoding, NSCopying> {
    bool_accessingSecurityScopedResource;
    NSURL *_resourceURL;
    NSData *_sandboxExtensionToken;
}

@property(copy) NSURL * resourceURL;
@property(copy) NSData * sandboxExtensionToken;
@property(getter=isAccessingSecurityScopedResource) bool accessingSecurityScopedResource;

+ (bool)supportsSecureCoding;

- (id)resolveURLAndReturnError:(id*)arg1;
- (void)setAccessingSecurityScopedResource:(bool)arg1;
- (bool)isAccessingSecurityScopedResource;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (void)setResourceURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setSandboxExtensionToken:(id)arg1;
- (id)sandboxExtensionToken;
- (id)resourceURL;

@end
