/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSArray;

@interface _CUIKeyTestOrganizer : NSObject  {
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    } originalKey[16];
    NSArray *orderedNonZeroFlexibleAttributes;
    unsigned long long flexAttributesCount;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    } testKey[16];
    unsigned long long chooseCount;
    unsigned long long subchooseCount;
}


- (struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)nextKey;
- (id)initWithRenditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)_bumpTestKey;
- (id)_nonZeroFlexibleAttributesInKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (bool)_bumpTestKeyAttributeIndex:(unsigned long long)arg1;
- (unsigned long long)_attributeToBumpIndex;
- (void)dealloc;

@end