/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CoreUI : NSObject  {
}

+ (bool)isSharedCacheSizeTestEnabled;
+ (id)versionCreditsString;
+ (void)installForCustomLook:(id)arg1;
+ (id)_customLookDelegate;
+ (void)install;
+ (bool)_isInIBCocoaSimulator;
+ (void)setBool:(bool)arg1 forDefaultsKey:(id)arg2;
+ (bool)boolForDefaultsKey:(id)arg1;
+ (void)_setCustomLookDelegate:(id)arg1;
+ (long long)integerForDefaultsKey:(id)arg1;
+ (id)defaultsDomainName;
+ (void)setValue:(id)arg1 forDefaultsKey:(id)arg2;
+ (void)_determineCompatibilityMode;
+ (id)stringForDefaultsKey:(id)arg1;
+ (bool)defaultExistsForKey:(id)arg1;
+ (bool)_hasDarkMenuBarForLook:(struct _themelook { long long x1; char *x2; }*)arg1;
+ (void)_setThemeLookDelegate:(id)arg1;
+ (id)_themeLookDelegate;
+ (void)_invalidateVisibleWindows;
+ (long long)lookCongruencyForObject:(id)arg1;
+ (bool)_isCurrentLook:(struct _themelook { long long x1; char *x2; }*)arg1;
+ (void)_updateMenuBarDrawingStyleForLook:(struct _themelook { long long x1; char *x2; }*)arg1;
+ (void)_setCurrentSystemThemeLook:(struct _themelook { long long x1; char *x2; }*)arg1;
+ (struct _themelook { long long x1; char *x2; }*)currentSystemThemeLook;
+ (void)changeToLook:(struct _themelook { long long x1; char *x2; }*)arg1;
+ (long long)maximumLookGradation;
+ (long long)currentLookGradation;
+ (void)changeToLookGradation:(long long)arg1;
+ (void)_changeToLookGradation:(long long)arg1 forceRedraw:(bool)arg2;


@end
