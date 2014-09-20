/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@class NSObject<OS_dispatch_queue>, <FigNeroLayerDelegate>;

@interface FigNeroLayer : CALayer  {
    NSObject<OS_dispatch_queue> *_neroQueue;
    struct OpaqueFigNeroid { } *_neroid;
    <FigNeroLayerDelegate> *_neroDelegate;
}

@property <FigNeroLayerDelegate> * neroDelegate;


- (void)stop;
- (void)start;
- (void)_start;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (void)dealloc;
- (void)setNeroDelegate:(id)arg1;
- (id)neroDelegate;
- (void)_dispatchNotification:(id)arg1 value:(id)arg2;

@end
