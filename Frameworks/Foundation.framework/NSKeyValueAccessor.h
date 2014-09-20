/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface NSKeyValueAccessor : NSObject  {
    id _containerClassID;
    NSString *_key;
    int (*_implementation)();
    SEL _selector;
    unsigned long long _extraArgumentCount;
    void *_extraArgument1;
    void *_extraArgument2;
    void *_extraArgument3;
}


- (id)key;
- (SEL)selector;
- (void)dealloc;
- (void*)extraArgument2;
- (void*)extraArgument1;
- (unsigned long long)extraArgumentCount;
- (id)containerClassID;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(int (*)())arg3 selector:(SEL)arg4 extraArguments:(void*[3])arg5 count:(unsigned long long)arg6;

@end
