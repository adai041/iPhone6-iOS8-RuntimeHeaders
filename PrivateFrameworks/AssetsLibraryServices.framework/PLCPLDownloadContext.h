/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@class NSString, NSError;

@interface PLCPLDownloadContext : NSObject  {
    bool_completed;
    NSString *_taskIdentifier;
    NSString *_resourceTypeDescription;
    double _progress;
    NSError *_error;
    double _updateLastQueuedTime;
}

@property(retain) NSString * taskIdentifier;
@property(retain) NSString * resourceTypeDescription;
@property double progress;
@property bool completed;
@property(retain) NSError * error;
@property double updateLastQueuedTime;


- (void)setError:(id)arg1;
- (id)error;
- (id)taskIdentifier;
- (void)setResourceTypeDescription:(id)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;
- (id)description;
- (void)dealloc;
- (id)resourceTypeDescription;
- (void)setUpdateLastQueuedTime:(double)arg1;
- (double)updateLastQueuedTime;
- (void)setCompleted:(bool)arg1;
- (bool)completed;
- (void)setTaskIdentifier:(id)arg1;

@end
