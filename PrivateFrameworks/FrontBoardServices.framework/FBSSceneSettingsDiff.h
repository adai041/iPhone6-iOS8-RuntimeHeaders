/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class BSMutableSettings, NSString;

@interface FBSSceneSettingsDiff : NSObject <BSXPCCoding> {
    BSMutableSettings *_changes;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;

- (void)inspectOtherChangesWithBlock:(id)arg1;
- (id)_initWithChanges:(id)arg1;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;
- (void)inspectChangesWithBlock:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
