/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSFilePresenterOperationRecord : NSObject  {
    NSString *operationDescription;
    long long state;
    id reactor;
}

@property(readonly) NSString * operationDescription;
@property(readonly) long long state;
@property id reactor;

+ (id)operationRecordWithDescription:(id)arg1;

- (long long)state;
- (id)description;
- (void)dealloc;
- (id)operationDescription;
- (id)reactor;
- (void)didEnd;
- (void)willEnd;
- (void)didBegin;
- (void)setReactor:(id)arg1;

@end
