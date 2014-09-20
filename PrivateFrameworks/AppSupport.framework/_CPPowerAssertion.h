/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString, NSArray;

@interface _CPPowerAssertion : NSObject  {
    unsigned int _assertion;
    double _timeout;
    NSString *_identifier;
    NSArray *_stack;
}

@property double timeout;


- (double)timeout;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;
- (void)setTimeout:(double)arg1;
- (void)timedout;
- (void)dealloc;

@end