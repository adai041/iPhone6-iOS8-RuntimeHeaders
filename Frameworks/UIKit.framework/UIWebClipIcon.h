/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL;

@interface UIWebClipIcon : NSObject  {
    bool_precomposed;
    bool_siteWide;
    struct CGSize { 
        double width; 
        double height; 
    } _bestSize;
    NSURL *_url;
}

@property(getter=isPrecomposed) bool precomposed;
@property(getter=isSiteWide) bool siteWide;
@property struct CGSize { double x1; double x2; } bestSize;
@property(retain) NSURL * url;


- (void)setBestSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSiteWide:(bool)arg1;
- (void)setPrecomposed:(bool)arg1;
- (long long)compare:(id)arg1 preferringDeviceIconSizes:(bool)arg2;
- (bool)isPrecomposed;
- (struct CGSize { double x1; double x2; })bestSize;
- (bool)isSiteWide;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)dealloc;

@end
