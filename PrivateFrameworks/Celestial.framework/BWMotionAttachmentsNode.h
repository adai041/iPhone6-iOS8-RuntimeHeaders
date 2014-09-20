/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary;

@interface BWMotionAttachmentsNode : BWNode  {
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSDictionary *_optionsDict;
}

+ (void)initialize;

- (id)initWithSensorIDDict:(id)arg1 moduleInfo:(id)arg2 requiredFormat:(id)arg3 forPanorama:(bool)arg4 motionAttachmentsSource:(int)arg5;
- (int)_setupSampleBufferProcessor;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeType;
- (void)dealloc;

@end
