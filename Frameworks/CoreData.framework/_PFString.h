/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFString : NSString  {
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)accessInstanceVariablesDirectly;

- (oneway void)release;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)getCharacters:(unsigned short*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)length;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)retainCount;
- (bool)isEqual:(id)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (bool)isEqualToString:(id)arg1;
- (const char *)UTF8String;
- (id)retain;
- (unsigned long long)cStringLength;
- (void)getCString:(char *)arg1;
- (const char *)_fastCStringContents:(bool)arg1;
- (const char *)cString;

@end