/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSURL, AVAssetResourceLoadingRequest;

@interface SSVSecureKeyDeliveryRequestOperation : NSOperation  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSURL *_certificateURL;
    NSURL *_keyServerURL;
    AVAssetResourceLoadingRequest *_resourceLoadingRequest;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _responseBlock;

    bool_iTunesStoreRequest;
}

@property(retain) NSURL * certificateURL;
@property(retain) NSURL * keyServerURL;
@property(retain) AVAssetResourceLoadingRequest * resourceLoadingRequest;
@property(getter=isITunesStoreRequest) bool ITunesStoreRequest;
@property(copy) id responseBlock;


- (void)setCertificateURL:(id)arg1;
- (id)certificateURL;
- (bool)isITunesStoreRequest;
- (void)setResourceLoadingRequest:(id)arg1;
- (void)setKeyServerURL:(id)arg1;
- (id)resourceLoadingRequest;
- (id)keyServerURL;
- (id)_contentKeyContextForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2 error:(id*)arg3;
- (id)_streamingRequestDictionaryWithStreamingKeyDictionaries:(id)arg1;
- (id)_streamingKeyDictionaryForID:(long long)arg1 URI:(id)arg2 serverPlaybackContextData:(id)arg3;
- (void)_sendResponseBlockWithError:(id)arg1;
- (void)setResponseBlock:(id)arg1;
- (void).cxx_destruct;
- (void)main;
- (void)start;
- (id)init;
- (id)responseBlock;
- (void)setITunesStoreRequest:(bool)arg1;

@end
