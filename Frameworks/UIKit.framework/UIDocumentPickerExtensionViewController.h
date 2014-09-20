/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL, NSArray, NSString;

@interface UIDocumentPickerExtensionViewController : UIViewController <_UIDocumentPickerExtensionViewController> {
    unsigned long long _documentPickerMode;
    NSURL *_originalURL;
    NSArray *_validTypes;
    NSString *_providerIdentifier;
    NSURL *_documentStorageURL;
}

@property unsigned long long documentPickerMode;
@property(copy) NSURL * originalURL;
@property(copy) NSArray * validTypes;
@property(copy) NSString * providerIdentifier;
@property(copy) NSURL * documentStorageURL;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;

- (id)providerIdentifier;
- (id)validTypes;
- (id)originalURL;
- (void)prepareForDocumentSelectionInMode:(unsigned long long)arg1;
- (void)dismissGrantingAccessToURL:(id)arg1;
- (void)prepareForPresentationInMode:(unsigned long long)arg1;
- (void)_setProviderIdentifier:(id)arg1;
- (void)_setDocumentStorageURL:(id)arg1;
- (void)_setUploadURL:(id)arg1;
- (id)documentStorageURL;
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(id)arg2;
- (void)_documentPickerDidDismiss;
- (unsigned long long)documentPickerMode;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setPickableTypes:(id)arg1;
- (void)dealloc;

@end
