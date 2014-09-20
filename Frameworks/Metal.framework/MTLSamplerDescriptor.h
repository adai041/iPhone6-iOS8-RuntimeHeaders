/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class NSString;

@interface MTLSamplerDescriptor : NSObject <NSCopying> {
    struct MTLSamplerDescriptorPrivate { union { struct { unsigned int x_1_2_1 : 2; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3 : 2; unsigned int x_1_2_4 : 3; unsigned int x_1_2_5 : 3; unsigned int x_1_2_6 : 3; unsigned int x_1_2_7 : 1; } x_1_1_1; unsigned int x_1_1_2; } x1; union { unsigned int x_2_1_1; float x_2_1_2; } x2; union { unsigned int x_3_1_1; float x_3_1_2; } x3; union { unsigned int x_4_1_1; float x_4_1_2; } x4; unsigned long long x5; id x6; } *_private;
}

@property unsigned long long minFilter;
@property unsigned long long magFilter;
@property unsigned long long mipFilter;
@property unsigned long long maxAnisotropy;
@property unsigned long long sAddressMode;
@property unsigned long long tAddressMode;
@property unsigned long long rAddressMode;
@property bool normalizedCoordinates;
@property float lodMinClamp;
@property float lodMaxClamp;
@property(copy) NSString * label;


- (float)lodBias;
- (void)setLodBias:(float)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setMaxAnisotropy:(unsigned long long)arg1;
- (unsigned long long)maxAnisotropy;
- (void)setMipFilter:(unsigned long long)arg1;
- (unsigned long long)mipFilter;
- (void)setLodMaxClamp:(float)arg1;
- (void)setLodMinClamp:(float)arg1;
- (void)setNormalizedCoordinates:(bool)arg1;
- (bool)normalizedCoordinates;
- (void)setRAddressMode:(unsigned long long)arg1;
- (unsigned long long)rAddressMode;
- (void)setTAddressMode:(unsigned long long)arg1;
- (unsigned long long)tAddressMode;
- (void)setSAddressMode:(unsigned long long)arg1;
- (unsigned long long)sAddressMode;
- (void)setMagFilter:(unsigned long long)arg1;
- (unsigned long long)magFilter;
- (void)setMinFilter:(unsigned long long)arg1;
- (unsigned long long)minFilter;
- (const struct MTLSamplerDescriptorPrivate { union { struct { unsigned int x_1_2_1 : 2; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3 : 2; unsigned int x_1_2_4 : 3; unsigned int x_1_2_5 : 3; unsigned int x_1_2_6 : 3; unsigned int x_1_2_7 : 1; } x_1_1_1; unsigned int x_1_1_2; } x1; union { unsigned int x_2_1_1; float x_2_1_2; } x2; union { unsigned int x_3_1_1; float x_3_1_2; } x3; union { unsigned int x_4_1_1; float x_4_1_2; } x4; unsigned long long x5; id x6; }*)descriptorPrivate;
- (float)lodMaxClamp;
- (float)lodMinClamp;

@end
