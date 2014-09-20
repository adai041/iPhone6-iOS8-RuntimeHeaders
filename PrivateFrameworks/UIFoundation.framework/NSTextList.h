/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSString;

@interface NSTextList : NSObject <NSCoding, NSCopying> {
    NSString *_markerFormat;
    unsigned long long _listFlags;
    long long _startIndex;
    void *_listSecondary;
}

+ (id)_standardMarkerAttributesForAttributes:(id)arg1;
+ (void)initialize;

- (id)markerForItemNumber:(long long)arg1;
- (long long)startingItemNumber;
- (void)setStartingItemNumber:(long long)arg1;
- (id)initWithMarkerFormat:(id)arg1 options:(unsigned long long)arg2;
- (id)_markerSuffix;
- (id)_unaffixedMarkerTitle;
- (id)_unaffixedMarkerFormat;
- (id)_markerSpecifier;
- (id)_markerPrefix;
- (id)_markerTitle;
- (id)_markerAtIndex:(unsigned long long)arg1 inText:(id)arg2;
- (id)_unaffixedMarkerForItemNumber:(long long)arg1;
- (id)_markerForMarkerFormat:(id)arg1 itemNumber:(long long)arg2 isNumbered:(bool*)arg3 substitutionStart:(unsigned long long*)arg4 end:(unsigned long long*)arg5 specifierStart:(unsigned long long*)arg6 end:(unsigned long long*)arg7;
- (id)markerFormat;
- (unsigned long long)listOptions;
- (unsigned long long)options;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (bool)_isOrdered;

@end
