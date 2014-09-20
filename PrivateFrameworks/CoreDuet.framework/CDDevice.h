/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@class CDSession, NSString;

@interface CDDevice : NSObject  {
    CDSession *_session;
    int remoteDataNotificationToken;
    unsigned int _identifier;
    NSString *_modelIdentifier;
}

@property(readonly) unsigned int identifier;
@property(readonly) NSString * modelIdentifier;
@property(readonly) CDSession * session;


- (id)modelIdentifier;
- (bool)requestLogDataWithError:(id*)arg1;
- (id)readLogDataWithError:(id*)arg1;
- (bool)setLogDataHandlerWithError:(id*)arg1 handler:(id)arg2;
- (bool)requestSystemDataWithError:(id*)arg1;
- (bool)setSystemDataHandlerWithError:(id*)arg1 handler:(id)arg2;
- (id)initWithSession:(id)arg1 identifier:(unsigned int)arg2 modelIdentifier:(id)arg3 error:(id*)arg4;
- (id)readSystemDataWithError:(id*)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (id)session;
- (void).cxx_destruct;
- (unsigned int)identifier;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
