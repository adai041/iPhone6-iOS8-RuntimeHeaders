/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteMutableData : NSMutableData  {
    unsigned int _reserved : 1;
    unsigned int _needToZero : 1;
    unsigned int _hasVM : 1;
    unsigned int _retainCount : 29;
    unsigned long long _length;
    unsigned long long _capacity;
    void *_bytes;
}


- (void)finalize;
- (void)increaseLengthBy:(unsigned long long)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (void*)mutableBytes;
- (void)appendData:(id)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (const void*)bytes;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)init;
- (void)dealloc;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBytes:(const void*)arg2;
- (void)_freeBytes;
- (void)resetBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 deallocator:(id)arg4;

@end