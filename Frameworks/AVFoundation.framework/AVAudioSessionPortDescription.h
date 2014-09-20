/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject  {
    void *_impl;
}

@property(readonly) NSString * portType;
@property(readonly) NSString * portName;
@property(readonly) NSString * UID;
@property(readonly) NSArray * channels;
@property(readonly) NSArray * dataSources;
@property(readonly) AVAudioSessionDataSourceDescription * selectedDataSource;
@property(readonly) AVAudioSessionDataSourceDescription * preferredDataSource;

+ (id)privateCreateOrConfigureArray:(id)arg1 withRawPortArray:(id)arg2;
+ (bool)privateMatchesInputs:(id)arg1 toRawInputs:(id)arg2;

- (id)portType;
- (id)portName;
- (id)dataSources;
- (id)selectedDataSource;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)channels;
- (id)preferredDataSource;
- (bool)isHeadphones;
- (id)initWithRawPortDescription:(id)arg1;
- (void)configureChannelsAndDataSources:(id)arg1;
- (bool)privateMatchesRawDescription:(id)arg1;
- (id)UID;
- (bool)isEqualToPort:(id)arg1 compareStrict:(bool)arg2;
- (struct PortDescriptionImpl { id x1; id x2; id x3; id x4; boolx5; id x6; id x7; id x8; id x9; }*)privateGetImplementation;
- (id)privateGetID;
- (bool)setPreferredDataSource:(id)arg1 error:(id*)arg2;

@end
