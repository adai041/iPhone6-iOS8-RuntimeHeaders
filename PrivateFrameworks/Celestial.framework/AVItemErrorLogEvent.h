/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDate, NSString, AVItemErrorLogEventInternal;

@interface AVItemErrorLogEvent : NSObject <NSCopying> {
    AVItemErrorLogEventInternal *_playerItemErrorLogEvent;
}

@property(readonly) NSDate * date;
@property(readonly) NSString * URI;
@property(readonly) NSString * serverAddress;
@property(readonly) NSString * playbackSessionID;
@property(readonly) long long errorStatusCode;
@property(readonly) NSString * errorDomain;
@property(readonly) NSString * errorComment;


- (void)finalize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)errorComment;
- (id)errorDomain;
- (long long)errorStatusCode;
- (id)playbackSessionID;
- (id)serverAddress;
- (id)URI;

@end
