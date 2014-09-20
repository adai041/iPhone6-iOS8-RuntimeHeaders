/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class _IDSSession;

@interface IDSSession : NSObject  {
    _IDSSession *_internal;
}

@property(readonly) int socket;
@property bool isAudioEnabled;
@property long long invitationTimeOut;
@property(readonly) unsigned int sessionEndedReason;


- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)declineInvitation;
- (void)acceptInvitation;
- (void)sendInvitation;
- (void)cancelInvitation;
- (long long)invitationTimeOut;
- (void)setInvitationTimeOut:(long long)arg1;
- (void)sendInvitationWithData:(id)arg1;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3;
- (unsigned int)sessionEndedReason;
- (bool)sendData:(id)arg1 error:(id*)arg2;
- (void)sendSessionMessage:(id)arg1;
- (void)endSessionWithData:(id)arg1;
- (void)declineInvitationWithData:(id)arg1;
- (void)acceptInvitationWithData:(id)arg1;
- (void)cancelInvitationWithData:(id)arg1;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(bool)arg2;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)setIsAudioEnabled:(bool)arg1;
- (bool)isAudioEnabled;
- (void)endSession;
- (unsigned int)state;
- (void)dealloc;
- (int)socket;
- (id)_internal;

@end