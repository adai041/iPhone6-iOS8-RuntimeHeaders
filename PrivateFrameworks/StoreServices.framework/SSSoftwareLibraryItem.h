/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSMutableDictionary;

@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding> {
    bool_beta;
    NSMutableDictionary *_etags;
    bool_placeholder;
    bool_profileValidated;
    NSMutableDictionary *_propertyValues;
}

@property(getter=isBeta) bool beta;
@property(getter=isPlaceholder) bool placeholder;
@property(getter=isProfileValidated) bool profileValidated;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setProfileValidated:(bool)arg1;
- (bool)isProfileValidated;
- (void)setBeta:(bool)arg1;
- (id)_initWithITunesMetadata:(id)arg1;
- (bool)setETag:(id)arg1 forAssetType:(id)arg2 error:(id*)arg3;
- (id)ETagForAssetType:(id)arg1;
- (bool)isBeta;
- (bool)isPlaceholder;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)setPlaceholder:(bool)arg1;
- (void)dealloc;

@end
