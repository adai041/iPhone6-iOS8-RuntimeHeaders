/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class MTLRenderPipelineReflection, MTLRenderPipelineDescriptor;

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState  {
    MTLRenderPipelineDescriptor *_descriptor;
    MTLRenderPipelineReflection *_reflection;
}

@property(readonly) MTLRenderPipelineDescriptor * descriptor;
@property(readonly) MTLRenderPipelineReflection * reflection;


- (id)reflection;
- (id)getParameter:(id)arg1;
- (id)descriptor;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;

@end
