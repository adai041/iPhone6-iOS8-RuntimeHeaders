/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, NSLocale;

@interface UILocalizedIndexedCollation : NSObject  {
    NSLocale *_locale;
    NSArray *_sectionTitles;
    NSArray *_sectionStartStrings;
    NSArray *_sectionIndexTitles;
    NSArray *_sectionIndexMapping;
    NSString *_transform;
    NSString *_firstSectionStartString;
    NSString *_lastSectionStartString;
    struct __CFStringTokenizer { } *_tokenizer;
}

@property(readonly) NSArray * sectionTitles;
@property(readonly) NSArray * sectionIndexTitles;

+ (id)currentCollation;
+ (id)collationWithDictionary:(id)arg1;

- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;
- (long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
- (long long)sectionForSectionIndexTitleAtIndex:(long long)arg1;
- (id)sectionIndexTitles;
- (id)sectionTitles;
- (void)dealloc;
- (id)transformedCollationStringForString:(id)arg1;
- (struct __CFStringTokenizer { }*)tokenizer;
- (id)initWithDictionary:(id)arg1;

@end
