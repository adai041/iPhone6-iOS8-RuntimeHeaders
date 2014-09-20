/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class MTLToolsPointerArray, NSString, <MTLDevice>;

@interface MTLToolsParallelRenderCommandEncoder : MTLToolsCommandEncoder <MTLParallelRenderCommandEncoder> {
    MTLToolsPointerArray *_renderCommandEncoders;
}

@property(readonly) MTLToolsPointerArray * renderCommandEncoders;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) <MTLDevice> * device;
@property(copy) NSString * label;


- (void).cxx_destruct;
- (id)renderCommandEncoders;
- (id)renderCommandEncoder;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;

@end
