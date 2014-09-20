/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, NSURL;

@interface DOMHTMLAreaElement : DOMHTMLElement  {
}

@property(copy) NSString * alt;
@property(copy) NSString * coords;
@property(copy) NSString * href;
@property bool noHref;
@property(copy) NSString * shape;
@property(copy) NSString * target;
@property(copy) NSString * accessKey;
@property(copy,readonly) NSString * hashName;
@property(copy,readonly) NSString * host;
@property(copy,readonly) NSString * hostname;
@property(copy,readonly) NSString * pathname;
@property(copy,readonly) NSString * port;
@property(copy,readonly) NSString * protocol;
@property(copy,readonly) NSString * search;
@property(copy,readonly) NSURL * absoluteLinkURL;


- (void)setNoHref:(bool)arg1;
- (bool)noHref;
- (void)setAlt:(id)arg1;
- (id)alt;
- (id)search;
- (id)pathname;
- (id)hostname;
- (id)hashName;
- (void)setAccessKey:(id)arg1;
- (id)accessKey;
- (void)setPing:(id)arg1;
- (void)setCoords:(id)arg1;
- (id)coords;
- (id)ping;
- (id)port;
- (id)protocol;
- (void)setShape:(id)arg1;
- (id)shape;
- (void)setHref:(id)arg1;
- (id)href;
- (id)absoluteLinkURL;
- (id)host;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)boundingBoxesWithOwner:(id)arg1;
- (struct _WKQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })absoluteQuadWithOwner:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxWithOwner:(id)arg1;
- (id)absoluteQuadsWithOwner:(id)arg1;
- (id)absoluteQuadsAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
