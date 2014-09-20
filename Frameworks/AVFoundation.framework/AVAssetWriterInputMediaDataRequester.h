/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, <AVAssetWriterInputMediaDataRequesterDelegate>;

@interface AVAssetWriterInputMediaDataRequester : NSObject  {
    NSObject<OS_dispatch_queue> *_requestQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _requestBlock;

    <AVAssetWriterInputMediaDataRequesterDelegate> *_delegate;
}

@property(readonly) NSObject<OS_dispatch_queue> * requestQueue;
@property <AVAssetWriterInputMediaDataRequesterDelegate> * delegate;


- (void)finalize;
- (id)requestQueue;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)_collectUncollectables_invokedFromDeallocAndFinalize;
- (void)requestMediaDataIfNecessary;
- (id)initWithRequestQueue:(id)arg1 requestBlock:(id)arg2;

@end
