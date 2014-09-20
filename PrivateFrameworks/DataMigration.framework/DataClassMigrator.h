/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@class NSDictionary;

@interface DataClassMigrator : NSObject  {
    NSDictionary *_context;
    bool_didUpgrade;
}

@property(retain) NSDictionary * context;
@property bool didUpgrade;
@property(readonly) bool didRestoreFromBackup;
@property(readonly) bool didMigrateBackupFromDifferentDevice;
@property(readonly) bool didRestoreFromCloudBackup;
@property(readonly) bool shouldPreserveSettingsAfterRestore;
@property(readonly) bool wasPasscodeSetInBackup;


- (void)setDidUpgrade:(bool)arg1;
- (bool)wasPasscodeSetInBackup;
- (bool)shouldPreserveSettingsAfterRestore;
- (bool)didRestoreFromCloudBackup;
- (bool)didMigrateBackupFromDifferentDevice;
- (bool)didRestoreFromBackup;
- (bool)didUpgrade;
- (void).cxx_destruct;
- (void)setContext:(id)arg1;
- (id)context;
- (float)migrationProgress;
- (float)estimatedDuration;
- (bool)performMigration;
- (id)dataClassName;

@end
