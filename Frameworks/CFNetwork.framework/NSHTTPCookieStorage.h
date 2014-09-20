/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSHTTPCookieStorageInternal, NSArray;

@interface NSHTTPCookieStorage : NSObject  {
    NSHTTPCookieStorageInternal *_internal;
}

@property(copy,readonly) NSArray * cookies;
@property unsigned long long cookieAcceptPolicy;

+ (id)sharedHTTPCookieStorage;

- (void)setCookie:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setCookiesFromResponseHeader:(id)arg1 forURL:(id)arg2 policyBaseURL:(id)arg3;
- (id)cookieRequestHeaderFieldsForURL:(id)arg1;
- (struct OpaqueCFHTTPCookieStorage { }*)_CFHTTPCookieStorage;
- (id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2;
- (void)getCookiesForTask:(id)arg1 completionHandler:(id)arg2;
- (void)storeCookies:(id)arg1 forTask:(id)arg2;
- (void)removeCookiesSinceDate:(id)arg1;
- (id)sortedCookiesUsingDescriptors:(id)arg1;
- (void)setCookieAcceptPolicy:(unsigned long long)arg1;
- (unsigned long long)cookieAcceptPolicy;
- (void)deleteCookie:(id)arg1;
- (id)cookies;
- (id)cookiesForURL:(id)arg1;
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;
- (id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)_saveCookies;
- (void)_setPrivateBrowsingEnabled:(bool)arg1;
- (id)_initWithIdentifier:(id)arg1 private:(bool)arg2;
- (struct OpaqueCFHTTPCookieStorage { }*)_cookieStorage;

@end