/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface RMListItem : NSObject  {
    struct CGPDFNode {} **_paragraphs;
    unsigned long long _count;
    unsigned long long _pos;
}

@property(readonly) struct CGPDFNode {}** paragraphNodes;
@property(readonly) struct CGPDFPage { }* page;


- (struct CGPDFNode {}**)paragraphNodes;
- (void)addParagraph:(struct CGPDFNode { }*)arg1;
- (struct CGPDFPage { }*)page;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1;

@end
