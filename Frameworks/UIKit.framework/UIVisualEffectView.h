/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIVisualEffect, _UIVisualEffectContentView, NSString, UIView;

@interface UIVisualEffectView : UIView <NSSecureCoding> {
    UIView *_maskView;
    struct { 
        unsigned int hasHadAlphaAnimated : 1; 
        unsigned int suppressReportingEmptyContentView : 1; 
    } _effectViewFlags;
    _UIVisualEffectContentView *_contentView;
    NSString *_groupName;
    UIVisualEffect *_effect;
}

@property(retain) UIView * contentView;
@property(copy) UIVisualEffect * effect;
@property(setter=_setGroupName:,copy) NSString * _groupName;

+ (bool)supportsSecureCoding;

- (void)setEffect:(id)arg1;
- (id)_whatsWrongWithThisEffect;
- (void)_applyGroupNameToSubviews;
- (void)_configureForEffectConfig:(id)arg1;
- (void)_configureForEffectSettings:(id)arg1;
- (id)effect;
- (void)_setEffect:(id)arg1;
- (void)_createContentViewIfNecessary;
- (void)_configureForCurrentEffect;
- (void)_setGroupName:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)_groupName;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)viewDidMoveToSuperview;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (void)_commonInit;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
