/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString;

@interface CPExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
}


- (id)initWithName:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)unlock;
- (void)lock;
- (id)init;
- (void)dealloc;
- (bool)tryLock;

@end
