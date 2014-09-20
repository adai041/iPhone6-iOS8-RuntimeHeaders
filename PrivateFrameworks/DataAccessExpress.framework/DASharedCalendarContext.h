/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSObject<OS_dispatch_queue>;

@interface DASharedCalendarContext : NSObject  {
    bool_shouldSyncCalendar;
    NSString *_calendarID;
    NSString *_accountID;
    NSObject<OS_dispatch_queue> *_queue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

}

@property(readonly) NSString * calendarID;
@property(readonly) NSString * accountID;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property(copy,readonly) id completionBlock;
@property bool shouldSyncCalendar;


- (void)setShouldSyncCalendar:(bool)arg1;
- (id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(id)arg4;
- (bool)shouldSyncCalendar;
- (void)finishedWithError:(id)arg1;
- (id)calendarID;
- (id)queue;
- (id)accountID;
- (void).cxx_destruct;
- (id)completionBlock;

@end
