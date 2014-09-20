/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSError, <NSStreamDelegate>;

@interface NSStream : NSObject  {
}

@property <NSStreamDelegate> * delegate;
@property(readonly) unsigned long long streamStatus;
@property(copy,readonly) NSError * streamError;

+ (void)getStreamsToHost:(id)arg1 port:(long long)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4;
+ (void)getStreamsToHostWithName:(id)arg1 port:(long long)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4;
+ (void)getBoundStreamsWithBufferSize:(unsigned long long)arg1 inputStream:(id*)arg2 outputStream:(id*)arg3;

- (id)propertyForKey:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (void)open;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

@end
