/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSObject<OS_dispatch_queue>, NSDictionary;

@interface MCCloudConfiguration : NSObject  {
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSDictionary *_memberQueueDetails;
}

@property(copy) NSDictionary * details;
@property(retain) NSObject<OS_dispatch_queue> * memberQueue;
@property(retain) NSDictionary * memberQueueDetails;

+ (id)sharedConfiguration;

- (void)setDetails:(id)arg1;
- (id)details;
- (id)memberQueueDetails;
- (void)setMemberQueueDetails:(id)arg1;
- (void)refreshDetailsFromDisk;
- (bool)isSupervised;
- (void).cxx_destruct;
- (void)setMemberQueue:(id)arg1;
- (id)memberQueue;
- (id)init;

@end
