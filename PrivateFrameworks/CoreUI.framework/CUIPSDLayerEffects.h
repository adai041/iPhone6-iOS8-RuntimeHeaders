/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject  {
    bool_visible;
    double _effectScale;
    NSMutableDictionary *_effectList;
}

@property bool visible;
@property double effectScale;
@property(copy) NSMutableDictionary * effectList;


- (void)setEffectList:(id)arg1;
- (id)dropShadow;
- (double)effectScale;
- (id)effectList;
- (void)addLayerEffectComponent:(id)arg1;
- (void)setEffectScale:(double)arg1;
- (bool)visible;
- (void)setVisible:(bool)arg1;
- (id)init;
- (void)dealloc;

@end
