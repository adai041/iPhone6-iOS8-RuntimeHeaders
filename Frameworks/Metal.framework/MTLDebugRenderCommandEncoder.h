/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class MTLRenderPassDescriptor, <MTLRenderPipelineState>, <MTLDevice>, MTLDebugFunctionArgument, <MTLDepthStencilState>, MTLDepthStencilDescriptor;

@interface MTLDebugRenderCommandEncoder : MTLToolsRenderCommandEncoder  {
    MTLDebugFunctionArgument *_vertexBuffers[31];
    MTLDebugFunctionArgument *_vertexTextures[31];
    MTLDebugFunctionArgument *_vertexSamplers[16];
    MTLDebugFunctionArgument *_fragmentBuffers[31];
    MTLDebugFunctionArgument *_fragmentTextures[31];
    MTLDebugFunctionArgument *_fragmentSamplers[16];
    unsigned int _encoderState;
    float _lineWidth;
    float _depthBias;
    float _depthBiasSlopeScale;
    float _depthBiasClamp;
    unsigned int _stencilRef;
    float _blendColorRed;
    float _blendColorGreen;
    float _blendColorBlue;
    float _blendColorAlpha;
    <MTLDevice> *_cachedDevice;
    MTLRenderPassDescriptor *_descriptor;
    unsigned long long _frontFacingWinding;
    unsigned long long _cullMode;
    unsigned long long _triangleFillMode;
    <MTLRenderPipelineState> *_renderPipelineState;
    <MTLDepthStencilState> *_depthStencilState;
    MTLDepthStencilDescriptor *_defaultDepthStencilDescriptor;
    unsigned long long _visibilityResultMode;
    unsigned long long _visibilityResultOffset;
    unsigned long long _width;
    unsigned long long _height;
    struct { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long width; 
        unsigned long long height; 
    } _scissorRect;
    struct { 
        double originX; 
        double originY; 
        double width; 
        double height; 
        double znear; 
        double zfar; 
    } _viewport;
}

@property(readonly) <MTLDevice> * cachedDevice;
@property(copy,readonly) MTLRenderPassDescriptor * descriptor;
@property(readonly) struct { double x1; double x2; double x3; double x4; double x5; double x6; } viewport;
@property(readonly) unsigned long long frontFacingWinding;
@property(readonly) unsigned long long cullMode;
@property(readonly) float lineWidth;
@property(readonly) float depthBias;
@property(readonly) float depthBiasSlopeScale;
@property(readonly) float depthBiasClamp;
@property(readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } scissorRect;
@property(readonly) unsigned long long triangleFillMode;
@property(readonly) <MTLRenderPipelineState> * renderPipelineState;
@property(readonly) <MTLDepthStencilState> * depthStencilState;
@property(readonly) MTLDepthStencilDescriptor * defaultDepthStencilDescriptor;
@property(readonly) unsigned int stencilRef;
@property(readonly) unsigned long long visibilityResultMode;
@property(readonly) unsigned long long visibilityResultOffset;
@property(readonly) float blendColorRed;
@property(readonly) float blendColorGreen;
@property(readonly) float blendColorBlue;
@property(readonly) float blendColorAlpha;
@property(readonly) unsigned long long width;
@property(readonly) unsigned long long height;


- (id)descriptor;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)height;
- (unsigned long long)width;
- (void)setLineWidth:(float)arg1;
- (float)lineWidth;
- (id)description;
- (void)dealloc;
- (void)setCullMode:(unsigned long long)arg1;
- (unsigned long long)cullMode;
- (float)blendColorAlpha;
- (float)blendColorBlue;
- (float)blendColorGreen;
- (float)blendColorRed;
- (unsigned long long)visibilityResultOffset;
- (unsigned long long)visibilityResultMode;
- (unsigned int)stencilRef;
- (id)defaultDepthStencilDescriptor;
- (id)depthStencilState;
- (id)renderPipelineState;
- (unsigned long long)triangleFillMode;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })scissorRect;
- (float)depthBiasClamp;
- (float)depthBiasSlopeScale;
- (float)depthBias;
- (unsigned long long)frontFacingWinding;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; })viewport;
- (id)cachedDevice;
- (id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;
- (void)enumerateFragmentSamplersUsingBlock:(id)arg1;
- (void)enumerateFragmentTexturesUsingBlock:(id)arg1;
- (void)enumerateFragmentBuffersUsingBlock:(id)arg1;
- (void)enumerateVertexSamplersUsingBlock:(id)arg1;
- (void)enumerateVertexTexturesUsingBlock:(id)arg1;
- (void)enumerateVertexBuffersUsingBlock:(id)arg1;
- (void)_validateAllFunctionArguments;
- (void)validateCommonDrawErrors:(unsigned long long)arg1 instanceCount:(unsigned long long)arg2 maxVertexID:(unsigned long long)arg3;
- (void)validateFramebufferWithRenderPipelineState:(id)arg1;
- (void)_setDefaults;
- (void)endEncoding;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;
- (void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setDepthStencilState:(id)arg1;
- (void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTriangleFillMode:(unsigned long long)arg1;
- (void)setScissorRect:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setFrontFacingWinding:(unsigned long long)arg1;
- (void)setVertexSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setVertexSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setRenderPipelineState:(id)arg1;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setViewport:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end