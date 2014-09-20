/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class NSString, MTLRenderPipelineColorAttachmentDescriptorArray, <MTLFunction>, MTLVertexDescriptor;

@interface MTLRenderPipelineDescriptor : NSObject <NSCopying> {
    struct MTLRenderPipelineDescriptorPrivate { 
        MTLRenderPipelineColorAttachmentDescriptorArray *attachments; 
        unsigned long long rtBlendDescHash[8]; 
        unsigned long long depthAttachmentPixelFormat; 
        unsigned long long stencilAttachmentPixelFormat; 
        unsigned long long sampleCount; 
        unsigned long long sampleMask; 
        union { 
            unsigned int sampleCoverageHash; 
            float sampleCoverage; 
        } ; 
        union { 
            unsigned int miscHash; 
            struct { 
                unsigned int alphaToCoverageEnabled : 1; 
                unsigned int alphaToOneEnabled : 1; 
                unsigned int rasterizationEnabled : 1; 
                unsigned int pad : 29; 
            } ; 
        } ; 
        NSString *label; 
        unsigned long long labelHash; 
        unsigned long long vertexFunctionHash; 
        unsigned long long fragmentFunctionHash; 
        unsigned long long vertexDescriptorHash; 
        <MTLFunction> *vertexFunction; 
        <MTLFunction> *fragmentFunction; 
        MTLVertexDescriptor *vertexDescriptor; 
    } _private;
}

@property(copy) NSString * label;
@property(retain) <MTLFunction> * vertexFunction;
@property(retain) <MTLFunction> * fragmentFunction;
@property(copy) MTLVertexDescriptor * vertexDescriptor;
@property unsigned long long sampleCount;
@property(getter=isAlphaToCoverageEnabled) bool alphaToCoverageEnabled;
@property(getter=isAlphaToOneEnabled) bool alphaToOneEnabled;
@property(getter=isRasterizationEnabled) bool rasterizationEnabled;
@property(readonly) MTLRenderPipelineColorAttachmentDescriptorArray * colorAttachments;
@property unsigned long long depthAttachmentPixelFormat;
@property unsigned long long stencilAttachmentPixelFormat;


- (id).cxx_construct;
- (void)reset;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)validate;
- (void)setSampleCount:(unsigned long long)arg1;
- (unsigned long long)sampleCount;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)serializeFragmentData;
- (void)validateWithDevice:(id)arg1;
- (void)setStencilAttachmentPixelFormat:(unsigned long long)arg1;
- (unsigned long long)stencilAttachmentPixelFormat;
- (void)setDepthAttachmentPixelFormat:(unsigned long long)arg1;
- (unsigned long long)depthAttachmentPixelFormat;
- (void)setVertexDescriptor:(id)arg1;
- (id)fastBlendDescriptorAtIndex:(unsigned long long)arg1;
- (void)setRasterizationEnabled:(bool)arg1;
- (bool)isRasterizationEnabled;
- (void)setAlphaToOneEnabled:(bool)arg1;
- (bool)isAlphaToOneEnabled;
- (void)setAlphaToCoverageEnabled:(bool)arg1;
- (bool)isAlphaToCoverageEnabled;
- (void)setSampleCoverage:(float)arg1;
- (float)sampleCoverage;
- (void)setSampleMask:(unsigned long long)arg1;
- (unsigned long long)sampleMask;
- (void)setFragmentFunction:(id)arg1;
- (id)fragmentFunction;
- (void)setVertexFunction:(id)arg1;
- (id)vertexFunction;
- (id)vertexDescriptor;
- (const struct MTLRenderPipelineDescriptorPrivate { id x1; unsigned long long x2[8]; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; union { unsigned int x_7_1_1; float x_7_1_2; } x7; union { unsigned int x_8_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 29; } x_8_1_2; } x8; id x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; id x14; id x15; id x16; }*)_descriptorPrivate;
- (id)colorAttachments;

@end
