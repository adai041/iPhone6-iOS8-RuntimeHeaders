/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIKBCacheToken_Keyplane : UIKBCacheToken  {
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    union { 
        struct { 
            unsigned int idiom : 6; 
            unsigned int landscape : 1; 
            unsigned int split : 1; 
            unsigned int appearance : 8; 
            unsigned int rendering : 16; 
        } styling; 
        int intValue; 
    } _style;
    NSString *_geometrySetName;
    NSString *_keySetName;
}

+ (id)tokenForKeyplane:(id)arg1;

- (id)_initWithKeyplane:(id)arg1 keylayout:(id)arg2;
- (id)stringForSplitState:(bool)arg1;
- (void)dealloc;

@end
