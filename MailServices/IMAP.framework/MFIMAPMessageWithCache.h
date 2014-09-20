/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class NSData, MFMessageHeaders;

@interface MFIMAPMessageWithCache : MFIMAPMessage  {
    NSData *_messageData;
    MFMessageHeaders *_headers;
}


- (void)setHeaders:(id)arg1;
- (id)headers;
- (void)setMessageData:(id)arg1 isPartial:(bool)arg2;
- (id)headersIfAvailable;
- (id)messageData;
- (bool)isMessageContentsLocallyAvailable;
- (id)headerData;
- (void)dealloc;

@end
