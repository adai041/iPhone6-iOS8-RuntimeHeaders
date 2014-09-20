/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIRemoteViewService, <UIDocumentPickerDelegate>, NSURL, _UIDocumentPickerRemoteViewController, NSMutableArray;

@interface UIDocumentPickerViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining> {
    <UIDocumentPickerDelegate> *_weak_delegate;
    unsigned long long _documentPickerMode;
    _UIDocumentPickerRemoteViewController *_remoteViewController;
    _UIRemoteViewService *_remoteViewService;
    NSURL *_uploadURL;
    NSMutableArray *_stitchingTokens;
}

@property <UIDocumentPickerDelegate> * delegate;
@property unsigned long long documentPickerMode;
@property(getter=_remoteViewController,setter=_setRemoteViewController:,retain) _UIDocumentPickerRemoteViewController * remoteViewController;
@property(retain) _UIRemoteViewService * remoteViewService;
@property(copy) NSURL * uploadURL;
@property(retain) NSMutableArray * stitchingTokens;

+ (unsigned long long)supportedModes;
+ (id)supportedContentTypes;
+ (id)localizedName;
+ (id)_identifier;
+ (id)_extension;
+ (id)image;

- (void)setRemoteViewService:(id)arg1;
- (id)remoteViewService;
- (id)initWithExistingDocumentAtURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initForSelectingDocumentMatchingTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)_initWithRemoteViewController:(id)arg1 inMode:(unsigned long long)arg2 uploadURLOrNil:(id)arg3;
- (void)addAuxiliaryOptionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)_preferredContentSizeChanged:(struct CGSize { double x1; double x2; })arg1;
- (void)_dismissWithOption:(id)arg1;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)arg1;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)uploadURL;
- (unsigned long long)documentPickerMode;
- (void)_prepareForDeletionIfNecessary;
- (void)setUploadURL:(id)arg1;
- (void)_commonInitWithCompletion:(id)arg1;
- (void)setDocumentPickerMode:(unsigned long long)arg1;
- (void)_callDelegateWithSelectedURLAndDismiss:(id)arg1;
- (void)_finishStitching;
- (id)stitchingTokens;
- (id)_remoteViewController;
- (void)_dismissViewController;
- (void)_setRemoteViewController:(id)arg1;
- (void)setStitchingTokens:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end
