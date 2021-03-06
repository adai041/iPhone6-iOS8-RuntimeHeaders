/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSMapTable, NSObject<OS_dispatch_source>, NSData, NSMutableData, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface IDSSocketPairConnection : NSObject  {
    NSMutableData *_headerData;
    NSMutableData *_currentMessageData;
    NSMapTable *_delegateToInfo;
    unsigned long long _currentOutgoingDataIndex;
    NSData *_outgoingData;
    NSMutableArray *_outgoingDataArray;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    bool_writeSourceIsResumed;
    bool_isConnected;
    unsigned int _currentDataLength;
    long long _bytesReceived;
    double _prevBPS;
    int _connectedSocket;
    double _lastDateCheck;
}

@property(readonly) int socket;
@property(readonly) bool isConnected;
@property(readonly) bool isEmpty;


- (bool)isConnected;
- (bool)sendDataMessage:(id)arg1;
- (void)_sourceCancelled;
- (long long)_read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)_setupWriteSource;
- (void)_sendToConnectedSocket;
- (void)_processBytesAvailable;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)_callDelegatesWithBlock:(id)arg1;
- (void)_startServer;
- (void)_endSession;
- (void)endSession;
- (bool)isEmpty;
- (void)dealloc;
- (int)socket;

@end
