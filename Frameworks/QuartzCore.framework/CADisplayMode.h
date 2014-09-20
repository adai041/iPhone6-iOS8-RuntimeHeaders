/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CADisplay;

@interface CADisplayMode : NSObject  {
    void *_priv;
    CADisplay *_dpy;
    unsigned long long _width;
    unsigned long long _height;
}

@property(readonly) unsigned long long width;
@property(readonly) unsigned long long height;
@property(readonly) double pixelAspectRatio;

+ (id)_displayModeWithMode:(int)arg1 display:(id)arg2;

- (id)_display;
- (double)pixelAspectRatio;
- (unsigned long long)height;
- (unsigned long long)width;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)_initWithMode:(int)arg1 display:(id)arg2;
- (int)_mode;

@end