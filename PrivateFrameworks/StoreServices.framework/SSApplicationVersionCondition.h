/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSNumber;

@interface SSApplicationVersionCondition : SSProtocolCondition  {
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_externalVersion;
}


- (bool)evaluateWithContext:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end
