/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder;

@interface _UITouchForwardingRecipient : NSObject  {
    UIResponder *fromResponder;
    UIResponder *responder;
    long long recordedPhase;
    long long autocompletedPhase;
}

@property UIResponder * fromResponder;
@property UIResponder * responder;
@property long long recordedPhase;
@property long long autocompletedPhase;


- (void)setFromResponder:(id)arg1;
- (id)fromResponder;
- (id)initWithResponder:(id)arg1 fromResponder:(id)arg2;
- (void)setAutocompletedPhase:(long long)arg1;
- (void)setRecordedPhase:(long long)arg1;
- (long long)autocompletedPhase;
- (long long)recordedPhase;
- (id)responder;
- (void)setResponder:(id)arg1;
- (id)description;

@end
