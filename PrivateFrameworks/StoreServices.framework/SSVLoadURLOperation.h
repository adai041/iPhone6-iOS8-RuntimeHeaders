/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, NSMutableData, NSHTTPURLResponse, SSVURLDataConsumer, NSRunLoop, NSString, SSMetricsPageEvent, NSURLRequest, NSCachedURLResponse, NSMutableSet, NSObject<OS_dispatch_queue>, NSData;

@interface SSVLoadURLOperation : NSOperation <NSURLConnectionDelegate> {
    NSMutableData *_dataBuffer;
    SSVURLDataConsumer *_dataConsumer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _expiredOutputBlock;

    NSData *_inputData;
    bool_iTunesStoreRequest;
    SSMetricsPageEvent *_metricsPageEvent;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _outputBlock;

    NSMutableSet *_protocolRedirectURLs;
    bool_recordsMetrics;
    NSURL *_redirectURL;
    NSString *_referrerApplicationName;
    NSString *_referrerURLString;
    NSHTTPURLResponse *_response;
    NSRunLoop *_runLoop;
    NSString *_storeFrontSuffix;
    bool_stopped;
    NSURLRequest *_urlRequest;
}

@property(readonly) NSURL * URL;
@property(readonly) NSURLRequest * URLRequest;
@property(readonly) NSCachedURLResponse * cachedURLResponse;
@property(retain) SSVURLDataConsumer * dataConsumer;
@property(getter=isITunesStoreRequest) bool ITunesStoreRequest;
@property(readonly) SSMetricsPageEvent * metricsPageEvent;
@property bool recordsMetrics;
@property(copy) NSString * referrerApplicationName;
@property(copy) NSString * referrerURLString;
@property(copy) NSString * storeFrontSuffix;
@property(copy) id expiredOutputBlock;
@property(copy) id outputBlock;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithURLRequestProperties:(id)arg1;
- (id)_dataForCachedResponse:(struct _CFCachedURLResponse { }*)arg1;
- (void)setExpiredOutputBlock:(id)arg1;
- (id)expiredOutputBlock;
- (void)_keepAliveTimer:(id)arg1;
- (int)_runRunLoopUntilStopped;
- (void)_stopIfCancelled;
- (void)_releaseOutputBlocks;
- (id)_outputForData:(id)arg1 error:(id*)arg2;
- (void)_applyResponseToMetrics:(id)arg1;
- (void)_finishWithOutput:(id)arg1 error:(id)arg2;
- (void)_runOnce;
- (void)_finishWithData:(id)arg1;
- (void)_stopRunLoop;
- (id)_newURLRequestWithRedirectURL:(id)arg1;
- (id)storeFrontSuffix;
- (bool)recordsMetrics;
- (id)_initSSVLoadURLOperation;
- (bool)isITunesStoreRequest;
- (void)setRecordsMetrics:(bool)arg1;
- (id)outputBlock;
- (id)cachedURLResponse;
- (void)dispatchSync:(id)arg1;
- (void)dispatchAsync:(id)arg1;
- (void)setReferrerURLString:(id)arg1;
- (id)referrerURLString;
- (void)setReferrerApplicationName:(id)arg1;
- (id)referrerApplicationName;
- (id)initWithData:(id)arg1 fromOperation:(id)arg2;
- (void)setStoreFrontSuffix:(id)arg1;
- (id)metricsPageEvent;
- (void)setOutputBlock:(id)arg1;
- (id)dataConsumer;
- (void)setDataConsumer:(id)arg1;
- (void).cxx_destruct;
- (void)main;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)URL;
- (id)initWithURL:(id)arg1;
- (id)init;
- (void)cancel;
- (id)initWithURLRequest:(id)arg1;
- (id)URLRequest;
- (void)setITunesStoreRequest:(bool)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;

@end
