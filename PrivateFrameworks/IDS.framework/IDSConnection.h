/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class IDSAccount, _IDSConnection;

@interface IDSConnection : NSObject  {
    _IDSConnection *_internal;
}

@property(retain,readonly) IDSAccount * account;
@property(readonly) bool isActive;
@property(retain,readonly) _IDSConnection * _internal;


- (id)initWithAccount:(id)arg1;
- (bool)sendMessage:(id)arg1 toDestinations:(id)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (id)_initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(bool)arg3;
- (bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (id)initWithAccount:(id)arg1 commands:(id)arg2;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)account;
- (bool)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)isActive;
- (void)dealloc;
- (void)removeDelegate:(id)arg1;
- (id)_internal;

@end
