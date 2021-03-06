/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSObject<OS_dispatch_group>;

@interface FigNSXPCConnection : NSXPCConnection  {
    NSObject<OS_dispatch_group> *_connectionRunningGroup;
    bool_explicitlyInvalidated;
}

@property(readonly) bool explicitlyInvalidated;


- (bool)explicitlyInvalidated;
- (void)blockUntilInvalidateHandlerHasBeenCalled;
- (void)setInvalidationHandler:(id)arg1;
- (void)resume;
- (void)invalidate;
- (void)dealloc;

@end
