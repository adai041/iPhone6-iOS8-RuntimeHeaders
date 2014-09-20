/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIActivityUserDefaults, NSArray, UINavigationController, UIViewController;

@interface _UIUserDefaultsActivity : UIActivity  {
    NSArray *_availableActivities;
    _UIActivityUserDefaults *_userDefaults;
    UINavigationController *_navigationController;
    UIViewController *_userDefaultsViewController;
}

@property(copy) NSArray * availableActivities;
@property(retain) _UIActivityUserDefaults * userDefaults;
@property(retain) UINavigationController * navigationController;
@property(retain) UIViewController * userDefaultsViewController;


- (id)userDefaultsViewController;
- (void)_settingsViewControllerDidDismiss:(id)arg1;
- (id)availableActivities;
- (void)_prepareActivityViewControllerIfNeeded;
- (void)setUserDefaultsViewController:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)activityDidFinish:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)setAvailableActivities:(id)arg1;
- (id)initWithUserDefaults:(id)arg1;
- (id)userDefaults;
- (void)setUserDefaults:(id)arg1;
- (void)_cleanup;
- (id)navigationController;
- (void)dealloc;

@end