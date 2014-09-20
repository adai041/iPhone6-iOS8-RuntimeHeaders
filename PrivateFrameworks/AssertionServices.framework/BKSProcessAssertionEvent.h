/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@class NSString;

@interface BKSProcessAssertionEvent : NSObject <BSXPCCoding> {
    NSString *_identifier;
}

@property(copy) NSString * identifier;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)description;
- (void)dealloc;

@end