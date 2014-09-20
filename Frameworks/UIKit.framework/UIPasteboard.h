/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSString, NSArray, NSURL, UIImage;

@interface UIPasteboard : NSObject  {
    NSString *_name;
}

@property(copy) NSString * string;
@property(copy) NSArray * strings;
@property(copy) NSURL * URL;
@property(copy) NSArray * URLs;
@property(copy) UIImage * image;
@property(copy) NSArray * images;
@property(copy) UIColor * color;
@property(copy) NSArray * colors;
@property(readonly) NSString * name;
@property(getter=isPersistent) bool persistent;
@property(readonly) long long changeCount;
@property(readonly) long long numberOfItems;
@property(copy) NSArray * items;

+ (void)removePasteboardWithName:(id)arg1;
+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)arg1 create:(bool)arg2;
+ (id)generalPasteboard;
+ (id)_printPasteboard;
+ (id)_findPasteboard;

- (void)setPersistent:(bool)arg1;
- (bool)isPersistent;
- (void)addItems:(id)arg1;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (bool)containsPasteboardTypes:(id)arg1;
- (id)pasteboardTypes;
- (void)_addItems:(id)arg1 oldPasteboardTypes:(id)arg2;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (bool)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (long long)numberOfItems;
- (long long)changeCount;
- (void)setItems:(id)arg1;
- (id)items;
- (id)name;
- (id)init;
- (void)dealloc;
- (id)colors;
- (id)URLs;
- (void)setURLs:(id)arg1;
- (id)strings;
- (void)setStrings:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setString:(id)arg1;
- (void)setColor:(id)arg1;
- (id)color;
- (id)URL;
- (id)image;
- (id)images;
- (id)string;
- (void)setColors:(id)arg1;
- (void)setImage:(id)arg1;
- (void)_pasteboardChanged:(id)arg1;
- (id)_initWithName:(id)arg1 system:(bool)arg2 create:(bool)arg3;

@end