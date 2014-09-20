/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray, UIKBGeometry;

@interface UIKBMergeAction : NSObject <NSCopying> {
    NSString *_remainingKeyName;
    NSString *_disappearingKeyName;
    NSArray *_orderedKeyList;
    UIKBGeometry *_factors;
}

@property(retain) NSString * remainingKeyName;
@property(retain) NSString * disappearingKeyName;
@property(retain) NSArray * orderedKeyList;
@property(retain) UIKBGeometry * factors;

+ (id)mergeActionWithRemainingKeyName:(id)arg1 disappearingKeyName:(id)arg2 factors:(id)arg3;
+ (id)mergeActionWithOrderedKeyList:(id)arg1 factors:(id)arg2;

- (void)setFactors:(id)arg1;
- (void)setOrderedKeyList:(id)arg1;
- (void)setDisappearingKeyName:(id)arg1;
- (void)setRemainingKeyName:(id)arg1;
- (id)factors;
- (id)remainingKeyName;
- (id)disappearingKeyName;
- (id)orderedKeyList;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
