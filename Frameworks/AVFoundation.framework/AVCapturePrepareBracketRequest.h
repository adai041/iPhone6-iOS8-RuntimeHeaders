/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class FigCaptureStillImageSettings;

@interface AVCapturePrepareBracketRequest : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    FigCaptureStillImageSettings *_settings;
}

@property(readonly) FigCaptureStillImageSettings * settings;
@property(readonly) id completionBlock;

+ (id)prepareBracketRequestWithCompletionBlock:(id)arg1 settings:(id)arg2;

- (id)completionBlock;
- (id)settings;
- (void)dealloc;
- (id)_initWithCompletionBlock:(id)arg1 settings:(id)arg2;

@end
