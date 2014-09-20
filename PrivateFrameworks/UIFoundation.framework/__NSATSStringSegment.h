/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface __NSATSStringSegment : NSString  {
    struct __CFString { } *_originalString;
    long long _originalStringLength;
    struct { 
        long long location; 
        long long length; 
    } _range;
    const unsigned short *_characters;
    unsigned short _buffer[128];
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)initWithOriginalString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setOriginalString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (oneway void)release;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (unsigned long long)length;
- (void)dealloc;
- (const unsigned short*)_fastCharacterContents;

@end