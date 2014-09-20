/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;

@interface PFUBLogEventID : NSObject  {
    NSString *_idString;
    long long _hash;
    long long _eventType;
}

@property(readonly) NSString * idString;
@property(readonly) long long hash;
@property(readonly) long long eventType;

+ (void)initialize;

- (long long)hash;
- (long long)eventType;
- (id)idString;
- (id)initWithCustomKey:(id)arg1;
- (id)initWithEventType:(int)arg1;

@end
