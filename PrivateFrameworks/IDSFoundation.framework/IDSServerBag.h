/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class IDSRemoteURLConnection, NSString, NSURL, NSData, NSDate, NSDictionary, IMConnectionMonitor, NSObject<OS_dispatch_queue>, NSMutableURLRequest, NSNumber;

@interface IDSServerBag : NSObject  {
    bool_allowSelfSignedCertificates;
    bool_allowUnsignedBags;
    int _trustStatus;
    IMConnectionMonitor *_connectionMonitor;
    NSURL *_bagURL;
    NSString *_apsEnvironmentName;
    NSDictionary *_bag;
    NSDictionary *_cachedBag;
    NSMutableURLRequest *_urlRequest;
    IDSRemoteURLConnection *_remoteURLConnection;
    NSObject<OS_dispatch_queue> *_bagQueue;
    NSString *_cachedURLString;
    NSData *_certData;
    NSString *_cachedHash;
    NSDate *_loadDate;
    NSNumber *_cacheTime;
}

@property(retain) NSURL * bagURL;
@property(retain) NSString * apsEnvironmentName;
@property bool allowSelfSignedCertificates;
@property bool allowUnsignedBags;
@property(readonly) bool isLoaded;
@property(readonly) bool isLoading;
@property(readonly) bool isInDebilitatedMode;
@property(readonly) bool isServerAvailable;
@property(retain) IMConnectionMonitor * _connectionMonitor;
@property(setter=_setBag:,retain) NSDictionary * _bag;
@property(setter=_setCachedBag:,retain) NSDictionary * _cachedBag;
@property(retain) NSMutableURLRequest * _urlRequest;
@property(setter=_setCachedURLString:,retain) NSString * _cachedURLString;
@property(setter=_setCachedHash:,retain) NSString * _cachedHash;
@property(retain) NSDate * _loadDate;
@property(retain) NSNumber * _cacheTime;
@property IDSRemoteURLConnection * _remoteURLConnection;
@property NSObject<OS_dispatch_queue> * _bagQueue;
@property(setter=_setTrustStatus:) int _trustStatus;
@property(retain) NSData * _certData;

+ (id)_sharedInstance;
+ (id)_sharedInstanceForClass:(Class)arg1;
+ (id)_bagCreationLock;
+ (id)sharedInstanceForBagType:(long long)arg1;
+ (id)sharedInstance;

- (id)objectForKey:(id)arg1;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)setAllowUnsignedBags:(bool)arg1;
- (void)setAllowSelfSignedCertificates:(bool)arg1;
- (void)set_cacheTime:(id)arg1;
- (void)set_loadDate:(id)arg1;
- (id)_loadDate;
- (id)_cachedHash;
- (void)set_certData:(id)arg1;
- (id)_certData;
- (void)set_bagQueue:(id)arg1;
- (id)_bagQueue;
- (void)set_remoteURLConnection:(id)arg1;
- (id)_remoteURLConnection;
- (void)set_urlRequest:(id)arg1;
- (id)_urlRequest;
- (void)setApsEnvironmentName:(id)arg1;
- (void)setBagURL:(id)arg1;
- (void)set_connectionMonitor:(id)arg1;
- (id)_connectionMonitor;
- (void)_bagExternallyReloaded;
- (void)_startBagLoad:(bool)arg1;
- (void)_processBagResultData:(id)arg1 response:(id)arg2 inBackground:(bool)arg3;
- (void)_cancelCurrentLoad;
- (void)_generateURLRequest;
- (id)_cachedURLString;
- (bool)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2;
- (bool)_loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (int)_trustStatus;
- (bool)_allowInvalid;
- (void)_saveToCache;
- (void)_loadFromCache;
- (void)_setCachedHash:(id)arg1;
- (void)_saveCacheToPrefs;
- (void)__saveCacheToPrefs;
- (void)_setTrustStatus:(int)arg1;
- (void)_setBag:(id)arg1;
- (void)_setCachedURLString:(id)arg1;
- (void)_setCachedBag:(id)arg1;
- (id)_cacheTime;
- (id)_bagDefaultsDomain;
- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(bool)arg3 allowUnsignedBags:(bool)arg4;
- (bool)isServerAvailable;
- (void)startBagLoad;
- (bool)isInDebilitatedMode;
- (bool)allowUnsignedBags;
- (bool)allowSelfSignedCertificates;
- (id)apsEnvironmentName;
- (id)bagURL;
- (id)_bag;
- (id)_cachedBag;
- (void)forceBagLoad;
- (id)urlWithKey:(id)arg1;
- (void)_invalidate;
- (bool)isLoaded;
- (bool)isLoading;
- (void)dealloc;
- (void)_clearCache;

@end
