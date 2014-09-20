/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL, NSString;

@interface _UIPreviewItemProxy : NSObject  {
    NSURL *_URL;
    NSURL *_previewURLOverride;
    NSString *_name;
    NSURL *_URLsToDeleteOnDealloc;
    NSString *_previewItemContentType;
    NSURL *_URLToDeleteOnDealloc;
}

@property(copy) NSURL * previewItemURL;
@property(copy) NSURL * previewItemURLOverride;
@property(copy) NSString * previewItemTitle;
@property(copy) NSURL * URLToDeleteOnDealloc;
@property(copy) NSString * previewItemContentType;


- (void)setURLToDeleteOnDealloc:(id)arg1;
- (id)URLToDeleteOnDealloc;
- (void)setPreviewItemTitle:(id)arg1;
- (id)previewItemTitle;
- (void)setPreviewItemURLOverride:(id)arg1;
- (void)setPreviewItemURL:(id)arg1;
- (id)previewItemURLForDisplay;
- (id)_primitive_previewItemContentType;
- (id)previewItemContentType;
- (void)setPreviewItemContentType:(id)arg1;
- (id)previewItemURLOverride;
- (id)previewItemURL;
- (void)dealloc;

@end
