/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSString;

@interface BSStackFrameInfo : NSObject  {
    NSString *_realFunctionName;
    unsigned long long _address;
    NSString *_functionName;
    NSString *_executableName;
    NSString *_className;
}

@property(readonly) unsigned long long address;
@property(retain,readonly) NSString * functionName;
@property(retain,readonly) NSString * executableName;
@property(retain,readonly) NSString * className;


- (id)functionName;
- (id)executableName;
- (id)initWithReturnAddress:(unsigned long long)arg1;
- (id)className;
- (id)description;
- (void)dealloc;
- (unsigned long long)address;

@end