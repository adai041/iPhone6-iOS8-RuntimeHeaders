/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebHistoryItem, WebBackForwardListPrivate;

@interface WebBackForwardList : NSObject  {
    WebBackForwardListPrivate *_private;
}

@property(readonly) WebHistoryItem * backItem;
@property(readonly) WebHistoryItem * currentItem;
@property(readonly) WebHistoryItem * forwardItem;
@property int capacity;
@property(readonly) int backListCount;
@property(readonly) int forwardListCount;

+ (void)initialize;

- (int)forwardListCount;
- (int)backListCount;
- (unsigned long long)pageCacheSize;
- (id)forwardListWithLimit:(int)arg1;
- (id)backListWithLimit:(int)arg1;
- (void)goToItem:(id)arg1;
- (bool)containsItem:(id)arg1;
- (void)finalize;
- (int)capacity;
- (id)itemAtIndex:(int)arg1;
- (void)_close;
- (id)forwardItem;
- (void)setToMatchDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (void)goForward;
- (void)goBack;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)currentItem;
- (id)backItem;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setPageCacheSize:(unsigned long long)arg1;
- (void)setCapacity:(int)arg1;
- (id)initWithBackForwardList:(struct PassRefPtr<WebCore::BackForwardList> { struct BackForwardList {} *x1; })arg1;

@end
