/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class GmailAccount, NSString;

@interface MFGmailSMTPAccount : SMTPAccount <MFGmailAccountClientTokenProtocol> {
    GmailAccount *_account;
}

@property(getter=mailAccountIfAvailable,retain) GmailAccount * mailAccount;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)accountTypeIdentifier;

- (id)hostname;
- (id)username;
- (id)errorForResponse:(id)arg1;
- (id)displayHostname;
- (id)mailAccountIfAvailable;
- (bool)shouldUseAuthentication;
- (bool)shouldFetchACEDBInfoForError:(id)arg1;
- (unsigned int)portNumber;
- (id)preferredAuthScheme;
- (bool)usesSSL;
- (id)_urlFromResponse:(id)arg1;
- (void)setMailAccount:(id)arg1;
- (id)clientToken;
- (id)password;
- (void)dealloc;

@end