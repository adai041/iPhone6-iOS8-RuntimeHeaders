/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSConcreteNotifyingMutableAttributedString;

@interface NSConcreteTextStorage : NSTextStorage  {
    NSConcreteNotifyingMutableAttributedString *_contents;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    } _lock;
    struct { 
        unsigned int _forceFixAttributes : 1; 
        unsigned int _needLock : 1; 
        unsigned int _lockInitialized : 1; 
        unsigned int _inFixingAttributes : 1; 
        unsigned int _reserved : 28; 
    } _pFlags;
}

+ (unsigned long long)_writerCountTSDKey;

- (void)_initLocks;
- (bool)_forceFixAttributes;
- (bool)fixesAttributesLazily;
- (bool)_lockForWritingWithExceptionHandler:(bool)arg1;
- (void)_setAttributeFixingInProgress:(bool)arg1;
- (bool)_attributeFixingInProgress;
- (void)_setForceFixAttributes:(bool)arg1;
- (void)_unlock;
- (bool)_lockForReading;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedString:(id)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)initWithAttributedString:(id)arg1;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)initWithString:(id)arg1;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (Class)classForCoder;
- (id)string;
- (unsigned long long)length;
- (id)init;
- (void)dealloc;

@end
