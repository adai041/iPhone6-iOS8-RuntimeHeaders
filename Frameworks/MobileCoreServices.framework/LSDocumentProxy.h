/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSString;

@interface LSDocumentProxy : LSResourceProxy  {
    bool_sourceIsManaged;
    NSString *_name;
    NSString *_typeIdentifier;
    NSString *_MIMEType;
}

@property(readonly) NSString * name;
@property(readonly) NSString * typeIdentifier;
@property(readonly) NSString * MIMEType;
@property(readonly) bool sourceIsManaged;

+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(bool)arg4;

- (bool)sourceIsManaged;
- (id)MIMEType;
- (id)name;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(bool)arg4;
- (void)bind;
- (id)iconStyleDomain;
- (id)typeIdentifier;
- (struct { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;
- (struct CGSize { double x1; double x2; })_defaultStyleSize:(id)arg1;

@end
