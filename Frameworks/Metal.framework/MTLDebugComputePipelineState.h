/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class MTLComputePipelineReflection, <MTLFunction>, MTLComputePipelineDescriptor;

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState  {
    <MTLFunction> *_function;
    MTLComputePipelineDescriptor *_descriptor;
    MTLComputePipelineReflection *_reflection;
}

@property(readonly) <MTLFunction> * function;
@property(readonly) MTLComputePipelineDescriptor * descriptor;
@property(readonly) MTLComputePipelineReflection * reflection;


- (id)reflection;
- (id)getParameter:(id)arg1;
- (id)function;
- (id)descriptor;
- (void).cxx_destruct;
- (id)description;
- (id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;

@end
