/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline  {
    NSOperationQueue *_queue;
    long long _priority;
}


- (id)initWithTarget:(id)arg1 operationQueue:(id)arg2 priority:(long long)arg3;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end