/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSNumber, NSString;

@interface SSTonePurchase : SSPurchase <SSXPCCoding, NSCoding, NSCopying> {
    NSArray *_allowedToneStyles;
    NSNumber *_assigneeIdentifier;
    NSString *_assigneeToneStyle;
    bool_shouldMakeDefaultRingtone;
    bool_shouldMakeDefaultTextTone;
}

@property(copy) NSArray * allowedToneStyles;
@property(retain) NSNumber * assigneeIdentifier;
@property(copy) NSString * assigneeToneStyle;
@property bool shouldMakeDefaultRingtone;
@property bool shouldMakeDefaultTextTone;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)allowedToneStyles;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (void)setAllowedToneStyles:(id)arg1;
- (void)_addEntriesToDatabaseEncoding:(id)arg1;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (void)setShouldMakeDefaultTextTone:(bool)arg1;
- (bool)shouldMakeDefaultTextTone;
- (void)setShouldMakeDefaultRingtone:(bool)arg1;
- (bool)shouldMakeDefaultRingtone;
- (void)setAssigneeToneStyle:(id)arg1;
- (id)assigneeToneStyle;
- (void)setAssigneeIdentifier:(id)arg1;
- (id)assigneeIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
