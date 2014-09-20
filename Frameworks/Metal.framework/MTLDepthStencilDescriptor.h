/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class MTLStencilDescriptor, NSString;

@interface MTLDepthStencilDescriptor : NSObject <NSCopying> {
    struct MTLDepthStencilDescriptorPrivate { 
        MTLStencilDescriptor *frontFaceStencil; 
        MTLStencilDescriptor *backFaceStencil; 
        unsigned long long depthCompareFunction; 
        booldepthWriteEnabled; 
        NSString *label; 
    } _private;
}

@property unsigned long long depthCompareFunction;
@property(getter=isDepthWriteEnabled) bool depthWriteEnabled;
@property(copy) MTLStencilDescriptor * frontFaceStencil;
@property(copy) MTLStencilDescriptor * backFaceStencil;
@property(copy) NSString * label;


- (void)setLabel:(id)arg1;
- (id)label;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setBackFaceStencil:(id)arg1;
- (void)setFrontFaceStencil:(id)arg1;
- (void)setDepthWriteEnabled:(bool)arg1;
- (bool)isDepthWriteEnabled;
- (void)setDepthCompareFunction:(unsigned long long)arg1;
- (unsigned long long)depthCompareFunction;
- (struct MTLDepthStencilDescriptorPrivate { id x1; id x2; unsigned long long x3; boolx4; id x5; }*)depthStencilPrivate;
- (id)backFaceStencil;
- (id)frontFaceStencil;

@end
