/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputFigAssetWriterEndPassOperation : NSObject  {
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    int _trackID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    bool_succeeded;
    NSError *_error;
    AVAssetWriterInputPassDescription *_nextPassDescription;
}

@property(copy) id completionBlock;
@property(readonly) bool succeeded;
@property(readonly) NSError * error;
@property(readonly) AVAssetWriterInputPassDescription * descriptionForNextPass;


- (void)finalize;
- (id)error;
- (void)start;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (id)init;
- (void)dealloc;
- (void)_notifyWhetherMorePassesAreNeeded:(bool)arg1 timeRanges:(id)arg2 forTrackWithID:(int)arg3;
- (void)_markOperationAsCompletedWithSuccess:(bool)arg1 error:(id)arg2;
- (id)descriptionForNextPass;
- (bool)succeeded;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 trackID:(int)arg2;

@end
