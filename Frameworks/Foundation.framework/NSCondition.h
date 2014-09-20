/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSCondition : NSObject <NSLocking> {
    void *_priv;
}

@property(copy) NSString * name;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)finalize;
- (void)wait;
- (void)broadcast;
- (bool)waitUntilDate:(id)arg1;
- (void)signal;
- (id)name;
- (void)setName:(id)arg1;
- (void)unlock;
- (void)lock;
- (id)description;
- (id)init;
- (void)dealloc;

@end
