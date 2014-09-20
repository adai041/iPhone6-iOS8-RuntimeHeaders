/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class ABPeoplePickerNavigationController, NSString, UIImage, UIImagePickerController;

@interface UIAssignToContactActivity : UIActivity <ABPeoplePickerNavigationControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    UIImage *_image;
    ABPeoplePickerNavigationController *_peoplePicker;
    void *_person;
    UIImagePickerController *_imagePickerController;
}

@property(retain) UIImage * image;
@property(retain) ABPeoplePickerNavigationController * peoplePicker;
@property void* person;
@property(retain) UIImagePickerController * imagePickerController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setPerson:(void*)arg1;
- (void*)person;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)setImagePickerController:(id)arg1;
- (id)imagePickerController;
- (void)setPeoplePicker:(id)arg1;
- (id)peoplePicker;
- (void)_willPresentAsFormSheet;
- (id)_embeddedActivityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)_cleanup;
- (id)image;
- (void)setImage:(id)arg1;
- (void)dealloc;

@end
