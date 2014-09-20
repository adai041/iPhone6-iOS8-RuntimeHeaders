/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableData : NSData  {
}

@property(readonly) void* mutableBytes;
@property unsigned long long length;

+ (id)dataWithCapacity:(unsigned long long)arg1;
+ (id)dataWithLength:(unsigned long long)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)increaseLengthBy:(unsigned long long)arg1;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3;
- (id)initWithLength:(unsigned long long)arg1;
- (void*)mutableBytes;
- (void)appendData:(id)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setData:(id)arg1;
- (Class)classForCoder;
- (void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBytes:(const void*)arg2;
- (void)resetBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_isCompact;
- (void)abAppendString:(id)arg1;

@end
