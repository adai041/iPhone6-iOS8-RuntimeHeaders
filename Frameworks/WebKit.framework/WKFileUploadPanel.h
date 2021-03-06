/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <WKFileUploadPanelDelegate>, NSString, WKContentView;

@interface WKFileUploadPanel : UIViewController <UIPopoverControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    WKContentView *_view;
    struct WebOpenPanelResultListenerProxy { int (**x1)(); id x2; struct RefPtr<WebKit::WebPageProxy> { struct WebPageProxy {} *x_3_1_1; } x3; } *_listener;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    } _mimeTypes;
    struct CGPoint { 
        double x; 
        double y; 
    } _interactionPoint;
    bool_allowMultipleFiles;
    bool_usingCamera;
    struct RetainPtr<UIImagePickerController> { 
        void *m_ptr; 
    } _imagePicker;
    struct RetainPtr<UIAlertController> { 
        void *m_ptr; 
    } _actionSheetController;
    struct RetainPtr<UIViewController> { 
        void *m_ptr; 
    } _presentationViewController;
    struct RetainPtr<UIPopoverController> { 
        void *m_ptr; 
    } _presentationPopover;
    <WKFileUploadPanelDelegate> *_delegate;
}

@property <WKFileUploadPanelDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)presentWithParameters:(struct WebOpenPanelParameters { int (**x1)(); id x2; struct FileChooserSettings { boolx_3_1_1; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_3_1_2; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_3_1_3; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_3_1_4; } x3; }*)arg1 resultListener:(struct WebOpenPanelResultListenerProxy { int (**x1)(); id x2; struct RefPtr<WebKit::WebPageProxy> { struct WebPageProxy {} *x_3_1_1; } x3; }*)arg2;
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (void)_chooseFiles:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (bool)_willMultipleSelectionDelegateBeCalled;
- (id)_displayStringForPhotos:(unsigned long long)arg1 videos:(unsigned long long)arg2;
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(id)arg6 failureBlock:(id)arg7;
- (void)_showMediaSourceSelectionSheet;
- (void)_dismissDisplayAnimated:(bool)arg1;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (void)_cancel;
- (void)_presentFullscreenViewController:(id)arg1 animated:(bool)arg2;
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(bool)arg2;
- (id)_mediaTypesForPickerSourceType:(long long)arg1;
- (void)_dispatchDidDismiss;
- (void).cxx_destruct;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id).cxx_construct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismiss;
- (id)initWithView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end
