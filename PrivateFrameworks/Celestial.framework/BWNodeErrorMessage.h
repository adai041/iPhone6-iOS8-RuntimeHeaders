/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class BWNodeError;

@interface BWNodeErrorMessage : BWNodeMessage  {
    BWNodeError *_nodeError;
}

@property(readonly) BWNodeError * nodeError;

+ (id)newMessageWithNodeError:(id)arg1;

- (id)_initWithNodeError:(id)arg1;
- (id)nodeError;
- (void)dealloc;

@end
