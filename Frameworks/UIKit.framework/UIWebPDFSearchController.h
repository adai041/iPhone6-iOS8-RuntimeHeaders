/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSObject<UIWebPDFSearchControllerDelegate>, NSString, NSArray, NSOperationQueue, NSMutableArray, UIPDFDocument;

@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate> {
    unsigned long long _resultIndexWhenLimitHit;
    bool_notifiedThatSearchBegin;
    unsigned long long _pageIndexWhenLimitHit;
    NSOperationQueue *_searchQueue;
    NSMutableArray *_results;
    NSString *_searchString;
    UIPDFDocument *_documentToSearch;
    NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate;
    unsigned long long startingPageIndex;
    double documentScale;
    unsigned long long resultLimit;
}

@property NSObject<UIWebPDFSearchControllerDelegate> * searchDelegate;
@property(retain) UIPDFDocument * documentToSearch;
@property double documentScale;
@property unsigned long long startingPageIndex;
@property unsigned long long resultLimit;
@property(readonly) bool searching;
@property(readonly) bool paused;
@property(retain) NSArray * results;
@property(retain) NSString * searchString;


- (void)setResults:(id)arg1;
- (void)pause;
- (bool)searching;
- (void)searchDidTimeOut:(id)arg1;
- (void)search:(id)arg1;
- (void)_clearSearchQueue;
- (unsigned long long)_actualStartingPageIndex;
- (bool)paused;
- (id)searchDelegate;
- (void)setStartingPageIndex:(unsigned long long)arg1;
- (unsigned long long)startingPageIndex;
- (void)searchDidBegin:(id)arg1;
- (id)documentToSearch;
- (void)searchLimitHit:(id)arg1;
- (void)searchDidFinish:(id)arg1;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;
- (void)searchWasCancelled:(id)arg1;
- (unsigned long long)resultLimit;
- (void)setSearchString:(id)arg1;
- (void)setResultLimit:(unsigned long long)arg1;
- (void)setSearchDelegate:(id)arg1;
- (void)setDocumentScale:(double)arg1;
- (void)setDocumentToSearch:(id)arg1;
- (double)documentScale;
- (void)resume;
- (id)searchString;
- (id)results;
- (id)init;
- (void)dealloc;
- (void)cancel;

@end
