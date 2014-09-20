/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, MCAPNConfiguration;

@interface MCCellularPayload : MCPayload  {
    MCAPNConfiguration *_attachAPN;
    NSArray *_APNs;
}

@property(retain) MCAPNConfiguration * attachAPN;
@property(retain) NSArray * APNs;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setAPNs:(id)arg1;
- (void)setAttachAPN:(id)arg1;
- (id)APNsDescription;
- (id)APNConfigurationDescription;
- (id)APNsLabel;
- (id)attachAPNConfigurationLabel;
- (id)APNs;
- (id)attachAPN;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void).cxx_destruct;
- (id)description;

@end
