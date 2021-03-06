/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSArray, AVItemAccessLogInternal;

@interface AVItemAccessLog : NSObject <NSCopying> {
    AVItemAccessLogInternal *_playerItemAccessLog;
}

@property(readonly) NSArray * events;


- (unsigned long long)extendedLogDataStringEncoding;
- (id)extendedLogData;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)events;
- (id)initWithLogArray:(id)arg1;

@end
