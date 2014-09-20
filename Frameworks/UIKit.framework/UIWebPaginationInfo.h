/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSObject<WebDocumentView>, UIWebDocumentView;

@interface UIWebPaginationInfo : NSObject  {
    NSObject<WebDocumentView> *_documentView;
    double _scaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    } _layoutSize;
    NSArray *_pageRects;
    UIWebDocumentView *_webDocumentView;
}

@property(readonly) unsigned long long pageCount;
@property(readonly) double lastPageHeight;
@property(retain) UIWebDocumentView * webDocumentView;


- (id)webDocumentView;
- (struct CGSize { double x1; double x2; })sizeForPageAtIndex:(long long)arg1;
- (double)lastPageHeight;
- (unsigned long long)pageCount;
- (struct CGSize { double x1; double x2; })layoutSize;
- (double)scaleFactor;
- (id)pageRects;
- (void)setWebDocumentView:(id)arg1;
- (id)initWithDocumentView:(id)arg1 scaleFactor:(double)arg2 layoutSize:(struct CGSize { double x1; double x2; })arg3 pageRects:(id)arg4;
- (id)documentView;
- (void)dealloc;

@end
